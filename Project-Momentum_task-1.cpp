#include<stdio.h>
main()
{
	char ch;
	printf("Enter any character ->");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z')
	{
		printf("%c is Aphabet",ch);
	}
    else if(ch>='A' && ch<='Z')
	{
		printf("%c is Aphabet",ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("%c is Digit",ch);
	}
	else
	{
		printf("%c is Special Character",ch);
	}
}
