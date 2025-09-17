#include<stdio.h>
int main()
{
    const int A=45;
    float b,c;
    printf("\n First angle: ");
    scanf("%f",&b);
    printf("\n Second Angle: %d",A);
    c=180-A-b;
    printf("\n Third angle: %.2f",c);
    return 0;

}