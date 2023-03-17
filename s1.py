fib = []
def solve(n):
    for i in range(n+2):
        fib.append(0)
    fib[0] = 1
    fib[1] = 1
    for i in range(2,n+2):
        fib[i] = fib[i-1] + fib[i-2]
    m = 10**9 + 7
    res = (fib[n + 1] % m)
    return res

n = int(input())
ans = solve(n)
print(ans)