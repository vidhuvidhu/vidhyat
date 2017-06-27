#include<stdio.h>
int main()
{
int rev,org,n,i=0;
scanf("%d",&n);
org=n;
  while(n!=0)
  {
rev=n%10;
i=i*10+r;
n/=10;
  }
if(i==org)
{
printf("%d is palindrome",org);
}
else
{
printf("%d is not a palindrome",org);
}
return 0;
}
