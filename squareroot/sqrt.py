def sqrt(x, tolerance=1e-10):
    if x < 0:
        raise ValueError("Cannot compute square root of a negative number")

    if x == 0:
        return 0

    guess = x / 2.0
    while abs(guess * guess - x) > tolerance:
        guess = (guess + x / guess) / 2.0
    return guess

# Example usage
n=float(input("Enter number:"))
result=sqrt(n)
print(result)

