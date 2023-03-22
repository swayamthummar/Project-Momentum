#include<stdio.h>
main ()
{
	int unit;
	float amount,surcharge;
	printf("Enter Electricity Unti->");
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
    amount += surcharge;
    
    printf("Total Electricity Amount is-> Rs.%.2f",amount);
		
}
