#include<stdio.h>
#include<conio.h>
void main()
{
int n,r=0,temp.a;
printf("enter the number");
scanf("%d",&n);
int a=n
while(n!=0)
{
temp=n%10;
r=r*10+temp;
n=n/10;
}
if(a=r)
{
printf("the given string is palindrom");
}
else
{
printf("the given string is not palindrom");
}
getch();
