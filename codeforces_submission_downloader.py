import urllib
import urllib.request
import json
import sys
import time, os
from bs4 import BeautifulSoup

def eprint(*args, **kwargs):
    print(*args, file=sys.stderr, **kwargs)

MAX_SUBS = 1000000
MAX_CONTEST_ID = 2407

if (len(sys.argv) < 2):
    print('Usage: python main.py <handle>')
    exit(1)

handle = sys.argv[1]

DOWNLOAD_DIR = 'Solutions'
SUBMISSION_URL = 'http://codeforces.com/contest/{ContestId}/submission/{SubmissionId}'
USER_INFO_URL = 'http://codeforces.com/api/user.status?handle={handle}&from=1&count={count}'

EXT = {'C++': 'cpp', 'C': 'c', 'Java': 'java', 'Python': 'py', 'Delphi': 'dpr', 'FPC': 'pas', 'C#': 'cs'}
EXT_keys = EXT.keys()

replacer = {'&quot;': '\"', '&gt;': '>', '&lt;': '<', '&amp;': '&', "&apos;": "'"}
keys = replacer.keys()

def get_ext(comp_lang):
    if 'C++' in comp_lang:
        return 'cpp'
    for key in EXT_keys:
        if key in comp_lang:
            return EXT[key]
    return ""

def parse(source_code):
    for key in keys:
        source_code = source_code.replace(key, replacer[key])
    return source_code

# base_dir = DOWNLOAD_DIR + '/' + handle
base_dir = "codeforces"
if not os.path.exists(base_dir):
    os.makedirs(base_dir)

user_info_full_url = USER_INFO_URL.format(handle=handle, count=MAX_SUBS)
print('Fetching user status: %s' % user_info_full_url)
dic = json.loads(urllib.request.urlopen(user_info_full_url).read())
if dic['status'] != u'OK':
    print('Couldn\'t fetch user status')
    exit(1)

submissions = [submission for submission in dic['result'] if submission['verdict'] == u'OK']
print('Fetching %d submissions' % len(submissions))

for submission in submissions:
    if 'contestId' not in submission or submission['verdict'] != 'OK':
        continue
    if submission['contestId'] > MAX_CONTEST_ID:
        continue
    con_id, sub_id = submission['contestId'], submission['id'],
    prob_name, prob_id = submission['problem']['name'], submission['problem']['index']
    comp_lang = submission['programmingLanguage']
    new_directory = base_dir + '/' + str(con_id)
    ext = get_ext(comp_lang)
    name = new_directory + '/' + prob_id + ' [' + prob_name + ']' + '.' + ext
    if os.path.isfile(name):
        continue
    submission_full_url = SUBMISSION_URL.format(ContestId=con_id, SubmissionId=sub_id)
    print(f'Fetching {con_id}{prob_id}: ' + submission_full_url)
    submission_info = urllib.request.urlopen(submission_full_url).read()
    soup = BeautifulSoup(submission_info, 'html.parser')
#    print(soup)
    submission_text = soup.find(id = "program-source-text")
#    eprint(submission_info)
#    print(submission_text)
    if submission_text is None:
        print(f"Could not fetch solution {submission['contestId']}{submission['problem']['index']}")
        continue
    result = submission_text.text.replace('\r', '')
    if not os.path.exists(new_directory):
        os.makedirs(new_directory)
    file = open(name, 'w')
    file.write(result)
    file.close()
    time.sleep(3)

print('Finished!')

