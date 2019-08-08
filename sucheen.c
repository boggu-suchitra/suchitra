#include<stdio.h>
int main()
{
int n,temp,c=0;
float s;
scanf("%d %d",&n,&s);
while(n>=1)
{
c=c+n;
temp=n*(s/100);
if(temp==0)
break;
n=n-temp;
}
printf("%d",c);
return 0;
}