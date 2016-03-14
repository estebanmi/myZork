#ifndef MY_ROOMS
#define MY_ROOMS

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "Rooms.h";
#include "World.h";
#include "Exits.h";
#include "Players.h";




class Rooms
{
public:
	char name[20];
	char desc[250];
	enum exits {north,south,east,west};
};

#endif