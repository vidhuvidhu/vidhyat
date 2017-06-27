#include<stdio.h>
int main()
{
    int temp,i,n;
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        temp=temp/10;
        i++;
    }
    printf("The digit is %d",i);
    return 0;
}
