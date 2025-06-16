#include "header.h"
int main(){
    int num1,num2;
    printf("Enter num1:");
    scanf("%d",&num1);
    printf("Enter num2:");
    scanf("%d",&num2);
    int sum = add(num1, num2);
    printf("Sum = %d\n", sum);
    return 0;
}