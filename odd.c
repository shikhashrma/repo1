#include<stdio.h>
void main()
{
	int i,f,n;
	printf("enter the range");
	scanf("%d\n%d",&i,&f);
	for(n=i;n<=f;n++)
	{
		if(n%2==1)
		printf("%d ",n);
		
	}
}
