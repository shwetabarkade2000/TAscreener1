#include<stdio.h>
#include"main.h"
#include"struct.h"


/*********************************************************************************************
                                TASCREENER 1

*This is the main function. All functions are called into this function.
*Team members: Shweta Moralwar, Krita Patel, Kanchan Shinde, Shruti Shrinath, Shweta Barkade
*This function is edited by all members.
 *********************************************************************************************/
int main()
{  
    
	candle *head=NULL;

    FILE * fp=NULL;  // gest memeory allocation at some location 

    selectChoice(&fp);
    

    
   loadStockData(&fp, &head);
   printStockList(head);
   showMovingAverage(head);
   freeLinkedList(head);


    return 0;
}

