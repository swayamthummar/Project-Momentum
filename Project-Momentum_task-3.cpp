#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter the value for A->");
	scanf("%d",&a);
	printf("Enter the value for B->");
	scanf("%d",&b);
	printf("Enter the value for C->");
	scanf("%d",&c);
	printf("Enter the value for D->");
	scanf("%d",&d);
	
    if(a>b)
    {
      if(a>c)
      {
      	if(a>d)
      	{
      		printf("A is MAX");
	    }
	    else
	    {
	    	printf("D is MAX");
		}
	  }
	  else
	  {
	  	if(c>d)
	  	{
	  	 printf("C is MAX");	
		}
		else
		{
		 printf("D is MAX");
		}
	  }
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
			  printf("B is MAX");
			}
			else
			{
			  printf("D is MAX");
			}
		}
		else
		{
			if(c>d)
			{
			  printf("C is MAX");
			}
			else
			{
			  printf("D is MAX");
			}
		}
	}
}
