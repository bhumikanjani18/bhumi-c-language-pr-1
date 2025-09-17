#include<stdio.h>

int main()
{
    int E_ID,basicSalary;
    float HRA,DA,TA,gross;
    char* name;

    printf("Enter an employee id: ");
    scanf("%d",&E_ID);    

    printf("Enter a name of Employee: ");
    scanf("%s",&name);

    printf("Enter a salary: ");
    scanf("%d",&basicSalary);

    HRA=basicSalary*0.1;
    DA=basicSalary*0.05;
    TA=basicSalary*0.08;

    gross=basicSalary+HRA+DA+TA;

    printf("\n Gross salary:Rs %.2f",gross);

    return 0;
}