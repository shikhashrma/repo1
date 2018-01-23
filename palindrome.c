#include<stdio.h>
int main()
{
	
	int s=0, n,r,p=0;
	printf("enter the no.");
	scanf("%d",&n);
	s=n;
	if(n<=1000&&n>0)
	{
		while(n>0)
		{
			r=n%10;
			p=p*10+r;
			n=n/10;
		}
	}
	/*else
	{
	return 0;}*/
	
	if(s==p)
{
		printf("yes");}
	else
	{
	printf("not");
}}
