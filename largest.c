#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
printf("The largest number is %d",&a);
}
 else if(b>c)
{
printf("the largest number is %d",&b);
}
else
{
printf("The largest number is %d",&c);
}
getch();
}
