#include<stdio.h>
int main()
{
    int n,a,b,i=0;
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
        b=a%10;
    i+=b*b*b;
    a/=10;
    }
    if(i==n)
    {
        printf("%d is an armstrong number",n);
               }
               else
               {
                   printf("%d is not an armstrong number",n);
               }
               return 0;
}
 
