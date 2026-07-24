#include<stdio.h>
void main()
{
	int num,original,reverse,first,second,third;
	printf("enter a three digit: ");
	scanf("%d",&num);
	original = num;
	first = num;
	first = num/100;
	second = (num/10);
	third= num % 10;
	reverse = (third * 100) + (second*10) + first;
	if(original == reverse)
	printf("palindrome number");
	

	
}