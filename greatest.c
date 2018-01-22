#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the no.s");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(b>c)
		printf("%d",a);
		else if(c>a)
		printf("%d",c);
		
	}
	else
	printf("%d",b);
}
