def exponential(x,n):
    result=1.0
    term=1
    for i in range (1,n+1):
       term *= x / i
       result += term
    return result
x=float(input("Enter Value of x:"))
n=int(input("Enter Value of terms:"))
result = exponential(x, n)
print(f"Approximation of e^{x} using {n} terms: {result:.10f}")
