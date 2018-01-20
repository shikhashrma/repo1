#include<stdio.h>
void main()
{
	int i;
	printf("enter the number");
	scanf("%d",&i);
	if(i<0)
	printf("negative");
	else if(i>0&&i<100000)
	printf("positive");
	else if(i==0)
	printf("zero");
	else
	printf("out of range");
	

}
