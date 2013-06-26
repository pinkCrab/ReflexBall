#ifndef _levels_h_
#define _levels_h_

#include <eZ8.h>             // special encore constants, macros and flash routines
#include <sio.h>             // special encore serial i/o routines
#include "reflexball.h"

unsigned char rom levels[6][BRICK_TABLE_HEIGHT][BRICK_TABLE_WIDTH] = {
	{ // Bier
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1 },
		{ 0, 3, 0, 2, 0, 3, 0, 2, 0, 3, 0, 2, 0, 3 },
		{ 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1 },
		{ 0, 3, 0, 2, 0, 3, 0, 2, 0, 3, 0, 2, 0, 3 },		
		{ 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1 },
		{ 0, 3, 0, 2, 0, 3, 0, 2, 0, 3, 0, 2, 0, 3 },
		{ 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1 },		
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	},
	{ // Basic
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 },
		{ 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 },
		{ 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0 },
		{ 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0 },
		{ 0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	},	
	{ // Cirkel
		{ 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0 },
		{ 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0 },
		{ 0, 0, 1, 1, 0, 0, 2, 2, 0, 0, 1, 1, 0, 0 },
		{ 0, 0, 1, 0, 0, 2, 2, 2, 2, 0, 0, 1, 0, 0 },
		{ 0, 1, 0, 0, 2, 2, 0, 0, 2, 2, 0, 0, 1, 0 },
		{ 0, 1, 0, 2, 2, 0, 0, 0, 0, 2, 2, 0, 1, 0 },
		{ 0, 1, 0, 2, 0, 0, 4, 4, 0, 0, 2, 0, 1, 0 },
		{ 0, 1, 0, 2, 0, 0, 4, 4, 0, 0, 2, 0, 1, 0 },
		{ 0, 1, 0, 2, 2, 0, 0, 0, 0, 2, 2, 0, 1, 0 },
		{ 0, 1, 0, 0, 2, 2, 0, 0, 2, 2, 0, 0, 1, 0 },
		{ 0, 0, 1, 0, 0, 2, 2, 2, 2, 0, 0, 1, 0, 0 },
		{ 0, 0, 1, 1, 0, 0, 2, 2, 0, 0, 1, 1, 0, 0 },
		{ 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0 },
		{ 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	},
	{ // Blokke
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 0, 2, 2, 0, 1, 1, 0, 2, 2, 0, 1, 1, 0 },
		{ 2, 0, 1, 1, 0, 2, 2, 0, 1, 1, 0, 2, 2, 0 },
		{ 1, 0, 2, 2, 0, 1, 1, 0, 2, 2, 0, 1, 1, 0 },
		{ 2, 0, 1, 1, 0, 2, 2, 0, 1, 1, 0, 2, 2, 0 },
		{ 1, 0, 2, 2, 0, 1, 1, 0, 2, 2, 0, 1, 1, 0 },
		{ 2, 0, 1, 1, 0, 2, 2, 0, 1, 1, 0, 2, 2, 0 },
		{ 1, 0, 2, 2, 0, 1, 1, 0, 2, 2, 0, 1, 1, 0 },
		{ 2, 0, 1, 1, 0, 2, 2, 0, 1, 1, 0, 2, 2, 0 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	},
	{ // Batman
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1 },
		{ 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0 },
		{ 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0 },
		{ 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0 },
		{ 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0 },
		{ 0, 2, 2, 0, 0, 1, 1, 1, 1, 0, 0, 2, 2, 0 },
		{ 0, 0, 2, 2, 0, 0, 1, 1, 0, 0, 2, 2, 0, 0 },
		{ 0, 0, 0, 2, 2, 0, 0, 0, 0, 2, 2, 0, 0, 0 },
		{ 0, 0, 0, 0, 2, 2, 0, 0, 2, 2, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 2, 2, 2, 2, 0, 0, 0, 0, 0 },
		{ 0, 0, 1, 1, 0, 0, 2, 2, 0, 0, 1, 1, 0, 0 },
		{ 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0 },
		{ 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	},	
	{ // Usynlig
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	},
};

#endif
