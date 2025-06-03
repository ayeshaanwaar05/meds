#include <stdio.h>
double exponential( double x, int n){
    double result=1.0;
    double term=1.0;
    
    for (int i=1 ; i<=n; i++){
        term*=x/i;
        result+=term;
    }
    return result;

}
int main() {
    double x;
    int terms;

    printf("Enter value of x: ");
    scanf("%lf", &x);

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    double result = exponential(x, terms);
    printf("Approximation of e^%.2f using %d terms: %.10f\n", x, terms, result);

    return 0;
}