#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"main.h"
#include"struct.h"


/********************************************************************************
*This is showMovingAverage function. This is used to calculate moving average.
*This function recommends user to Buy, Sell or Hoald the perticular stock.
*This function is developed by: Shweta Barkade.
*Date: 11/12/2022 
********************************************************************************/

void showMovingAverage(candle *head)
{
	int i;
	int a=20;
	int b=50;

	float sum20, sum50;
	float mavg20, mavg50;


	for(i=0; i<a && head->next != NULL; i++)
	{

        sum20 += head->adjClose;
	head = head->next;
	}

	for(i=0; i<b && head->next != NULL; i++)
	{	
	sum50 += head->adjClose;
        head = head->next; 
	}


	mavg20 = sum20/a;
	printf("\nMoving avarage for 20 is = %f\n", mavg20);

	mavg50 = sum50/b;
	printf("Moving average for 50 is = %f\n\n", mavg50);

	if(mavg20>mavg50)
	{
		printf("Moving average 20 is greater than moving average 50\n\n");
		printf("Buy this stock\n\n");
	}
	else if(mavg20<mavg50)
	{
		printf("Moving average 20 is less than moving average 50\n\n");
		printf("Sell this stock\n\n");
	}
	else
	{
		printf("Moving average 20 is equal to moving average 50\n\n");
		printf("Hold this stock\n\n");
	}
}



/********************************************************************************
*This is freeLinkedList function. This is used to freed records from linkedlist.
*This function is developed by: Shruti Shrinath.
*Date: 11/12/2022
********************************************************************************/

void freeLinkedList(candle* head)
{
   
   // Following code block frees the dynamically memory allocated 
   while ( head != NULL )
   {
   candle* temp = head;
 	  head = head -> next;
       	  if (temp != NULL)
       	{
        free (temp);
  
        	}
        }
	
	printf("Record freed from the linkedlist\n\n");
}	  	
