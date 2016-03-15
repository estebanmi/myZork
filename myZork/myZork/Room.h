#ifndef MY_ROOM
#define MY_ROOM

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Room.h"
#include "World.h"
#include "Exit.h"
#include "Player.h"

class Exit;
class Player;

class Room
{
public:

	char name[30];
	char description[250];
	
	Room();
	~Room();
};

#endif