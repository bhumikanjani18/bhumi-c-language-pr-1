#include<stdio.h>
#define C_TO_F 1.8
#define ADD 32
int main()
{
    float c,f;
    printf("Enter a value of C: ");
    scanf("%f",&c);

    f=(C_TO_F*c)+ADD;
    printf("The temprature in fahrenheit: %.1f",f);
    return 0;
}