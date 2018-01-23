#include<stdio.h>
#include<math.h>
void main()
{
	int i,n,s,c=0;
	printf("enter the no.");
	scanf("%d",&i);
	s=sqrt(i);
	for(n=2;n<s;n++)
	{
		if(i%n==0)
		c++;
	}
	if(c>0)
	printf("no");
	else
	printf("yes");
}
