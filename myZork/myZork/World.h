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

	void createworld()
	{
		// ROOMS NAMES   /////////////////////////////////

		// FLOOR -2 (start)
		strcopy((rooms + 0)->name,"main corridor(-2)");
		strcopy((rooms + 1)->name, "lab");
		strcopy((rooms + 2)->name, "samples room");
		strcopy((rooms + 3)->name, "power supply room");

		// FLOOR -1 
		strcopy((rooms + 4)->name, "main corridor(-1)");
		strcopy((rooms + 5)->name, "barracks");
		strcopy((rooms + 6)->name, "kitchen");
		strcopy((rooms + 7)->name, "store");

		// FLOOR 0
		strcopy((rooms + 8)->name, "main corridor(0)");
		strcopy((rooms + 9)->name, "detox room");
		strcopy((rooms + 10)->name, "elevator");

		// ROOMS DESCRIPTIONS  ///////////////////////////

		// FLOOR -2 (start)
		strcopy((rooms + 0)->description, "It is a large corridor with a big -2 that looks great on the wall. Here there was a shooting. A lot of corpses lies in the ground, you met some of them but...  you hadn't friends here. You can see an elevator and two opened doors.");
		strcopy((rooms + 1)->description, "This is the laboratory where biological weapons were created, you made horrible human experiments that you would like to forget. You can see two doors.");
		strcopy((rooms + 2)->description, "A light green mist surrounds this claustrophobic place. You are in the samples room. The main toxins and documents were stored here... There's only a door to get back.");
		strcopy((rooms + 3)->description, "You're in the power supply room. The static electricity makes your hair stand on end... Here the energy is generated for the entire base. There's only a door to get back.");

		// FLOOR -1 
		strcopy((rooms + 4)->description, "You are in a main corridor with a large -1 on the wall. This is the middle plant of the base. There's blood over the walls, but no bodies near. You can see an elevator and two opened doors. ");
		strcopy((rooms + 5)->description, "This is the barracks. Here you used to keep your stuff. Everything is scrambled. There is only a door to get back.");
		strcopy((rooms + 6)->description, "You are in the kitchen. It looks like a space complex. A mixture of food and dead twistes your stomach. There are two doors.");
		strcopy((rooms + 7)->description, "This is the store. Here all the cook stuff are stored and some food. There's only a door, back to the kitchen.");

		// FLOOR 0
		strcopy((rooms + 8)->description, "You are in the main corridor in the top plant. A big zero looks in the wall. There is an elevator, and an armored door.");
		strcopy((rooms + 9)->description, "This is the detox room. It looks like a tunnel... It does not make you feel too safe. There are two amored doors. ");
		strcopy((rooms + 10)->description, "You are in the elevator room. It takes you out of the base through the water. There is the elevator and the armored door to get back.");
		
	}

};

#endif