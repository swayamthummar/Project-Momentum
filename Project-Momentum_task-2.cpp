#include<stdio.h>
main()
{
	int NU;
	
    printf("Enter a number-> ");
    scanf("%d",&NU);
    
    (NU % 2==0)? printf("%d is Even",NU) : printf("%d is Odd",NU);
}
