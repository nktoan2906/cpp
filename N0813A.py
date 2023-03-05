from math import gcd
def lcm(a,b):
    return a*b // gcd(a,b)
def tongCs(n):
    if n == 0:
        return 0
    return (n % 10) + tongCs(n // 10)
a,b = map(int, input().split())
print(lcm(tongCs(a),tongCs(b)))
