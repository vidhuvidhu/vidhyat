#include<stdio.h>
int main()
{
    int a,c,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            c++;
        }      
    }
    if(c==2)
    {
        printf("%d is a prime ",a);
    }
    else 
    {
        printf("%d in not a prime number",a);
    }
    return 0;
}
