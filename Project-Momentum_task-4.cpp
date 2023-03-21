#include <stdio.h>

 main() 
{
    char days;
    
    printf("Enter The First Letter Of The Day (M,T,W,t,F,S,s)-> ");
    scanf(" %c", &days);

    switch (days) 
	{
        case 'M':
        case 'm':
            printf("Monday");
            break;
            
        case 'T':
            printf("Tuesday");
            break;
            
        case 'W':
        case 'w':
            printf("Wednesday");
            break;
            
        case 't':
            printf("Thursday");
            break;
		    
        case 'F':
        case 'f':
            printf("Friday");
            break;
		    
        case 'S':
        case 's':
            printf("Saturday or Sunday");
            break;
            
        default:
            printf("Invalid Character\n");
            
        printf("*       *\n");
	printf("  *   *\n");	
	printf("    *\n");
	printf("  *   *\n");
	printf("*       *\n");
    }
}
