#include<stdio.h>
main ()
{
	int unit;
	float amount,surcharge;
	printf("enter electricity unti->");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		amount=unit*0.50;
	}
	else if (unit<=150)
	{
		amount=(unit-50)*0.75+25;
	}
	else if (unit<=250)
	{
		amount=(unit-150)*1.20+100;
    }
    else
    {
    	amount=(unit-250)*1.50+220;
	}
	surcharge=amount * 0.20;
   t amount += surcharge;
    
    printf("Total Electricity amount is-> Rs.%.2f",amount);
		
}