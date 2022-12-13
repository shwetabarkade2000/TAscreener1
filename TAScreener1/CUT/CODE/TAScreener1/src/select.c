#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"main.h"
#include"struct.h"

/********************************************************************************
*This is selectChoice function. This is used to select the stocks from menu.
*This function is developed by: Shweta Moralwar.
*Date: 08/12/2022.
********************************************************************************/
void selectChoice(FILE** fptr)
{
	while(1)
	{
		system("clear");  
		fflush(stdin);
		int choice;

		printf("\nList of stocks\n\n1.ADANIENT\n2.ASIANPAINT\n3.CAP\n4.PNB\n5.TATAMOTORS\n6.ZOMATO\n7.Exit\n\n");
		printf("select your choice \n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("\nADANIENT\n\n");
				*fptr = fopen("/mnt/c/aa/TAScreener1/data/ADANIENT.NS.csv", "r");
			        return;
			case 2:
				printf("\nASIANPAINT\n\n");
				*fptr = fopen("/mnt/c/aa/TAScreener1/data/ASIANPAINT.NS.csv", "r");
				return;
			case 3:
				printf("\nCAP\n\n");
				*fptr = fopen("/mnt/c/aa/TAScreener1/data/CAP.PA.csv", "r");
				return;
			case 4:
				printf("\nPNB\n\n");
				*fptr = fopen("/mnt/c/aa/TAScreener1/data/PNB.NS.csv", "r");
				return;
			case 5:
				printf("\nTATAMOTORS\n\n");
				*fptr = fopen("/mnt/c/aa/TAScreener1/data/TATAMOTORS.NS.csv", "r");
				return;
			case 6:
				printf("\nZOMATO\n\n");
				*fptr = fopen("/mnt/c/aa/TAScreener1/data/ZOMATO.NS.csv", "r");
				return;
			case 7:
				exit(0);
			default:
				printf("Invalid Selection");
				break;
		}
	}
}
