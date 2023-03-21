#include<stdio.h>
main()
{
	int N;
	
    printf("Enter a number-> ");
    scanf("%d",&N);
    
    (N % 2 == 0)? printf("%d is Even",N) : printf("%d is Odd",N);
}
