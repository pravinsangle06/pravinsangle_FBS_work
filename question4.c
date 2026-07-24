#include<stdio.h>
void main()
{
	char ch;
	
	printf("enter a chsracter: ");
	
	scanf("%c",&ch);
	
	ch = toupper(ch);//convert to uppercase for easy checking
	if(ch == '0')
	{
		printf("%c is oval character",ch);
		
	}
	else if (ch =='c')
	{
		printf("%c is a consonant",ch);
	}
	else
	{
		printf("%c is neither oval '0' nor consonant 'c'",ch);
	}
}