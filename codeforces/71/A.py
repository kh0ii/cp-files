t = int(input())

for _ in range(t):
    s = str(input())
    if len(s) > 10:
        print(f"{s[0]}{len(s) - 2}{s[-1]}")
    else:
        print(s)
