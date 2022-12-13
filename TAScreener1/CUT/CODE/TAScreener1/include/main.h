#pragma once 
#include<stdlib.h>
#include"struct.h"

extern void selectChoice(FILE** fptr);
extern void loadStockData(FILE** fptr, candle** head);
extern void freeLinkedList(candle* head);
extern void printStockList(candle *head);
extern void showMovingAverage(candle *head);
