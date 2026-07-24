#include<stdio.h>
void main()
{
	int age=16;
	printf("enter your age");
	scanf("%d",&age);
	
	printf("you have entered %d as your age\n",age);	
	
	if (age>=18)
	{
		printf("eligible");
	}
	else
	{
		printf("not eligible");
	}
	
}
	
