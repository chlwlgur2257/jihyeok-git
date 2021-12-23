#include<stdio.h>
int main()
{
    
    int num,sum=0;
    printf("enter a naum ver : ");
    scanf("%d", &sum);
    for(int i=1;i<=sum; i++)
    {
        printf("i +");
    }
    for(int i=1;i<=sum; i++)
    {
        printf("sum +=i");
    }
    
    printf("Resulr : %d\n", sum);
}