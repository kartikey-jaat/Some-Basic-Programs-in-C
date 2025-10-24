#include<stdio.h>
void main()
{
    int n,r,result=0,num;
    printf("Enter  a number:");
    scanf("%d", &num);
    n=num;
    while(n!=0)
    {
        r=n%10;
        result+=r*r*r;
        n/=10;
        
    }
    if(result==num)
    {
        printf("%d is an Armstrong number",num);
    }
    else
    {
        printf("%d is not an Armstrong number",num);
    }
    
}
