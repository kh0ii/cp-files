#   author: kh0i
#   created: 10.01.2022 11:05:59
n, k = map(int, input().split())
a = list(map(int, input().split()))

for i in range(1, 2*n+1, 2):
    if a[i] > a[i-1] + 1 and a[i] > a[i+1] + 1:
        a[i] = a[i] - 1
        k = k - 1
    if k == 0:
        break

for i in a:
    print(i, end = " ")

