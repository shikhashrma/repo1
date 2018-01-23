#include<stdio.h>
void main()
{
	int i,f,n,c=0,l;
	printf("enter the range");
	scanf("%d %d",&i,&f);
	for(l=i+1;l<f;l++)
	{
		for(n=2;n<l;n++)
		{
			if(l%n==0)
			c++;
		}
		if(c>0)
		printf("%d ",l);
	}
}
