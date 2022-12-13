#pragma once

#define DATELEN 16
#define LINEBUFFER 256

typedef struct _candle_
{

	char date[DATELEN];
	float open;
	float high;
	float low;
	float close;
	float adjClose;
	unsigned long volume;
	struct _candle_ *next;
} candle;
