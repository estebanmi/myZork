#ifndef MY_EXIT
#define MY_EXIT

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Room.h"
#include "World.h"
#include "Exit.h"
#include "Player.h"

enum dir
{
	North,
	South,
	East,
	West
};

class Room;
class Player;

class Exit
{
public:

	char name[30];
	char description[250];
	Room* origin;
	Room* destiny;
	bool open;
	dir direction;

};

#endif