#   author: kh0i
#   created: 13.01.2022 18:41:23

t, k = map(int, input().split())
dp = []
p = []
mod = int(1e9+7)

for i in range(0, k):
    dp.append(1)

for i in range(k, 100002):
    dp.append(dp[i-1] + dp[i-k])
    dp[i] = dp[i] % mod

p.append(0)
for i in range(1, 100002):
    p.append(p[-1] + dp[i])

for _ in range(t):
    a, b = map(int, input().split())
    print((p[b] - p[a-1])%mod)




