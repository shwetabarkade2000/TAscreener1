#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"main.h"
#include"struct.h"


/********************************************************************************
*This is loadStockData function. This is used to load records from Stock Data.
*This function is developed by: Kanchan Shinde.
*Date: 09/12/2022.
********************************************************************************/

void loadStockData(FILE** fptr, candle** head) 
{
    char lineBuffer[LINEBUFFER];
    const char* seperator = "," ;
    char* token = NULL ;
	int lineCount = 0;
	while(fgets(lineBuffer, LINEBUFFER, *fptr) != NULL)
    {
		
		candle *node = (candle*)malloc(sizeof(candle));

		token = strtok (lineBuffer, seperator);
		if ( token != NULL)
			strncpy(node -> date, token, DATELEN - 1);
   
		token = strtok (NULL, seperator);
		if ( token != NULL)	 
			node -> open = atof(token); 

		token = strtok (NULL, seperator);
		if ( token != NULL)
			node -> high = atof(token);

		token = strtok (NULL, seperator);
		if ( token != NULL)
			node -> low = atof(token);

		token = strtok (NULL, seperator);
		if ( token != NULL)
			node -> close = atof(token);

		token = strtok (NULL, seperator);
		if ( token != NULL)
			node -> adjClose = atof(token);

		token = strtok (NULL, seperator);
		if ( token != NULL)
	 		node -> volume = atol(token);

	  	node -> next = *head;
	        *head = node;
		lineCount++;
	}
	
}



/********************************************************************************
*This is printStockList function. This is used to print stock data..
*This function is developed by: Krita Patel.
*Date: 09/12/2022.
********************************************************************************/

void printStockList(candle *head)
{

	printf("Date\t\tOpen\t\tHigh\t\tLow\t\tClose\t\tAdj Close\t\tVolume\n\n");
	while(head!=NULL)
	{
		printf("%s\t%f\t%f\t%f\t%f\t%f\t%ld\n",head->date,head->open,head->high,head->low,head->close,head->adjClose,head->volume);
      
		head = head->next;
	}

}


