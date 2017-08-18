#include<stdio.h>
int main()
{
int f=1,a,i;
printf("Enter the number");
scanf("\n%d",&a);
for(i=1;i<=a;++i)
{
f=f*i;
}
printf("%d",f);
return 0;
}
