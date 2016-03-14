#ifndef MY_WORLD
#define MY_WORLD

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Room.h"
#include "World.h"
#include "Exit.h"
#include "Player.h"

#define NUM_ROOMS 11 //total number of rooms
#define NUM_EXITS 18 //total number of exits

class Room;
class Player;
class Exit;

class World
{
public:
	Exit* exits;
	Room* rooms;

	World()
	{
		exits = new Exit[NUM_ROOMS];
		rooms = new Room[NUM_EXITS];
	};
	~World()
	{
		delete [] exits;
		delete [] rooms;
	};
};

#endif