mod = 1000000007
def solve():
    n , x = input().split()
    n = int(n)
    x = int(x)
    if n == 1:
        val = x
    elif n == 2:
        val = (x + x) % mod  
    else:
        val = pow(2,(n-2)) 
        val = (val * x) + (2*x)
        val =  val % mod
    print(val)    

t = int(input())
while t != 0:
    solve()
    t = t - 1 