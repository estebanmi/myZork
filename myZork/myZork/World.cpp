#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "World.h"
#include "Room.h"
#include "Exit.h"
#include "Player.h"

World::World()
{
	exits = new Exit[NUM_EXITS];
	rooms = new Room[NUM_ROOMS];
	player = new Player;
};
World::~World()
{
	delete[] exits;
	delete[] rooms;
	delete player;
};

void World::createworld()
{
	// STARTING ROOM /////////////////////////////////
	player->Plocation = (rooms + 1);


	// ROOMS NAMES   /////////////////////////////////

	// FLOOR -2 (start)
	strcpy_s(rooms[0].name, "main corridor(-2)");
	strcpy_s((rooms + 1)->name, "lab");
	strcpy_s((rooms + 2)->name, "samples room");
	strcpy_s((rooms + 3)->name, "power supply room");

	// FLOOR -1 
	strcpy_s((rooms + 4)->name, "main corridor(-1)");
	strcpy_s((rooms + 5)->name, "barracks");
	strcpy_s((rooms + 6)->name, "kitchen");
	strcpy_s((rooms + 7)->name, "store");

	// FLOOR 0
	strcpy_s((rooms + 8)->name, "main corridor(0)");
	strcpy_s((rooms + 9)->name, "detox room");
	strcpy_s((rooms + 10)->name, "elevator");

	// ROOMS DESCRIPTIONS  ///////////////////////////

	// FLOOR -2 (start)
	strcpy_s((rooms + 0)->description, "It is a large corridor with a big -2 that looks great on the wall. Here there was a shooting. A lot of corpses lies in the ground, you met some of them but...  you hadn't friends here. You can see an elevator and two opened doors.");
	strcpy_s((rooms + 1)->description, "This is the laboratory where biological weapons were created, you made horrible human experiments that you would like to forget. You can see two doors.");
	strcpy_s((rooms + 2)->description, "A light green mist surrounds this claustrophobic place. You are in the samples room. The main toxins and documents were stored here... There's only a door to get back.");
	strcpy_s((rooms + 3)->description, "You're in the power supply room. The static electricity makes your hair stand on end... Here the energy is generated for the entire base. There's only a door to get back.");

	// FLOOR -1 
	strcpy_s((rooms + 4)->description, "You are in a main corridor with a large -1 on the wall. This is the middle plant of the base. There's blood over the walls, but no bodies near. You can see an elevator and two opened doors. ");
	strcpy_s((rooms + 5)->description, "This is the barracks. Here you used to keep your stuff. Everything is scrambled. There is only a door to get back.");
	strcpy_s((rooms + 6)->description, "You are in the kitchen. It looks like a space complex. A mixture of food and dead twistes your stomach. There are two doors.");
	strcpy_s((rooms + 7)->description, "This is the store. Here all the cook stuff are stored and some food. There's only a door, back to the kitchen.");

	// FLOOR 0
	strcpy_s((rooms + 8)->description, "You are in the main corridor in the top plant. A big zero looks in the wall. There is an elevator, and an armored door.");
	strcpy_s((rooms + 9)->description, "This is the detox room. It looks like a tunnel... It does not make you feel too safe. There are two amored doors. ");
	strcpy_s((rooms + 10)->description, "You are in the elevator room. It takes you out of the base through the water. There is the elevator and the armored door to get back.");


	// EXITS     /////////////////////////////////////////////

	// FLOOR -2 (start)////////////////////

	// main corridor -2 to lab
	strcpy_s(exits[0].name, "mc-2lab");
	strcpy_s(exits[0].description, "mc-2lab");
	(exits + 0)->origin = &rooms[0];
	(exits + 0)->destiny = &rooms[1];
	(exits + 0)->open = true;
	(exits + 0)->direction = East;

	// lab to main corridor -2
	strcpy_s(exits[1].name, "labmc-2");
	strcpy_s(exits[1].description, "labmc-2");
	(exits + 1)->origin = &rooms[1];
	(exits + 1)->destiny = &rooms[0];
	(exits + 1)->open = true;
	(exits + 1)->direction = West;

	// main corridor -2 to power supply room
	strcpy_s(exits[2].name, "mc-2psr");
	strcpy_s(exits[2].description, "mc-2psr");
	(exits + 2)->origin = &rooms[0];
	(exits + 2)->destiny = &rooms[3];
	(exits + 2)->open = true;
	(exits + 2)->direction = South;

	// power supply room to main corridor -2
	strcpy_s(exits[3].name, "psrmc-2");
	strcpy_s(exits[3].description, "psrmc-2");
	(exits + 3)->origin = &rooms[3];
	(exits + 3)->destiny = &rooms[0];
	(exits + 3)->open = true;
	(exits + 3)->direction = North;

	// lab to samples room
	strcpy_s(exits[4].name, "labsr");
	strcpy_s(exits[4].description, "labsr");
	(exits + 4)->origin = &rooms[1];
	(exits + 4)->destiny = &rooms[2];
	(exits + 4)->open = true;
	(exits + 4)->direction = South;

	// samples room to lab
	strcpy_s(exits[5].name, "srlab");
	strcpy_s(exits[5].description, "srlab");
	(exits + 5)->origin = &rooms[2];
	(exits + 5)->destiny = &rooms[1];
	(exits + 5)->open = true;
	(exits + 5)->direction = North;

	//elevator -2 to -1

	// main corridor -2 to main corridor -1
	strcpy_s(exits[6].name, "mc-2mc-1");
	strcpy_s(exits[6].description, "mc-2mc-1");
	(exits + 6)->origin = &rooms[0];
	(exits + 6)->destiny = &rooms[4];
	(exits + 6)->open = true;
	(exits + 6)->direction = Up;

	// main corridor -1 to main corridor -2
	strcpy_s(exits[7].name, "mc-1mc-2");
	strcpy_s(exits[7].description, "mc-1mc-2");
	(exits + 7)->origin = &rooms[4];
	(exits + 7)->destiny = &rooms[0];
	(exits + 7)->open = true;
	(exits + 7)->direction = Down;

	// FLOOR -1 ///////////////////////////////

	// main corridor -1 to barracks
	strcpy_s(exits[8].name, "mc-1bar");
	strcpy_s(exits[8].description, "mc-1bar");
	(exits + 8)->origin = &rooms[4];
	(exits + 8)->destiny = &rooms[5];
	(exits + 8)->open = true;
	(exits + 8)->direction = East;

	// barracks to main corridor -1 
	strcpy_s(exits[9].name, "barmc-1");
	strcpy_s(exits[9].description, "barmc-1");
	(exits + 9)->origin = &rooms[5];
	(exits + 9)->destiny = &rooms[4];
	(exits + 9)->open = true;
	(exits + 9)->direction = West;

	// main corridor -1 to kitchen
	strcpy_s(exits[10].name, "mc-1kit");
	strcpy_s(exits[10].description, "mc-1kit");
	(exits + 10)->origin = &rooms[4];
	(exits + 10)->destiny = &rooms[6];
	(exits + 10)->open = true;
	(exits + 10)->direction = South;

	// kitchen to main corridor -1
	strcpy_s(exits[11].name, "kitmc-1");
	strcpy_s(exits[11].description, "kitmc-1");
	(exits + 11)->origin = &rooms[6];
	(exits + 11)->destiny = &rooms[4];
	(exits + 11)->open = true;
	(exits + 11)->direction = North;

	// kitchen to storage
	strcpy_s(exits[12].name, "kitsto");
	strcpy_s(exits[12].description, "kitsto");
	(exits + 12)->origin = &rooms[6];
	(exits + 12)->destiny = &rooms[7];
	(exits + 12)->open = true;
	(exits + 12)->direction = East;

	// storage to kitchen 
	strcpy_s(exits[13].name, "stokit");
	strcpy_s(exits[13].description, "stokit");
	(exits + 13)->origin = &rooms[7];
	(exits + 13)->destiny = &rooms[6];
	(exits + 13)->open = true;
	(exits + 13)->direction = West;

	//elevator -1 to 0

	// main corridor -1 to main corridor 0
	strcpy_s(exits[14].name, "mc-1mc0");
	strcpy_s(exits[14].description, "mc-1mc0");
	(exits + 14)->origin = &rooms[4];
	(exits + 14)->destiny = &rooms[8];
	(exits + 14)->open = true;
	(exits + 14)->direction = Up;

	// main corridor 0 to main corridor -1
	strcpy_s(exits[15].name, "mc0mc-1");
	strcpy_s(exits[15].description, "mc0mc-1");
	(exits + 15)->origin = &rooms[8];
	(exits + 15)->destiny = &rooms[4];
	(exits + 15)->open = true;
	(exits + 15)->direction = Down;

	// FLOOR 0 ////////////////////////////////

	// main corridor 0 to detox room
	strcpy_s(exits[16].name, "mc0det");
	strcpy_s(exits[16].description, "mc0det");
	(exits + 16)->origin = &rooms[8];
	(exits + 16)->destiny = &rooms[9];
	(exits + 16)->open = true;
	(exits + 16)->direction = East;

	// detox room to main corridor 0 
	strcpy_s(exits[17].name, "detmc0");
	strcpy_s(exits[17].description, "detmc0");
	(exits + 17)->origin = &rooms[9];
	(exits + 17)->destiny = &rooms[8];
	(exits + 17)->open = true;
	(exits + 17)->direction = West;

	// detox room to elevator 
	strcpy_s(exits[18].name, "detele");
	strcpy_s(exits[18].description, "detele");
	(exits + 18)->origin = &rooms[9];
	(exits + 18)->destiny = &rooms[10];
	(exits + 18)->open = true;
	(exits + 18)->direction = South;

	// elevator to detox room 
	strcpy_s(exits[18].name, "eledet");
	strcpy_s(exits[18].description, "eledet");
	(exits + 18)->origin = &rooms[10];
	(exits + 18)->destiny = &rooms[9];
	(exits + 18)->open = true;
	(exits + 18)->direction = North;

}

void World::worldintro()
{
	printf("Welcome to my Zork\n");

}

bool World::inputs(){

	char i, j;
	char help[] = {"\n-----HELP-----\nYou can move by:\nn/s/e/w or north/south/east/west or go + north/south/east/west\n\nYou can look by:\nlook + north/south/east/west\n\nYou can open or close doors by:\nopen door/close door\n\nYou can quit the game by:\nq/quit\n\n "};
	char action[16];
	printf("\nAction: ");
	scanf_s("%s",&action);

	//HELP ACTION ///////////////////////////////////

	if (strcmp(action, "help") == 0)
	{
		printf("%s",help);
	}

	// GO ACTION ////////////////////////////////////

	else if ((strcmp(action, "n") == 0) || (strcmp(action, "north") == 0) || (strcmp(action, "go north") == 0))
	{
		for (i = 0; i < NUM_EXITS;i++)
		{
			if ((exits + i)->origin == player->Plocation)
			{
				if ((exits + i)->direction == North)
					{
						if ((exits + i)->open == true)
						{
							player->Plocation = (exits + i)->destiny;
							printf("%s\n", (exits + i)->destiny->description);
						}
						else
						{
							printf("The door is closed.\n");
						}
					}
				else
				{
					printf("You can't go that way.\n"); 
				}
			}
		}
	}

	else if ((strcmp(action, "s") == 0) || (strcmp(action, "south") == 0) || (strcmp(action, "go south") == 0))
	{
		for (i = 0; i < NUM_EXITS; i++)
		{
			if ((exits + i)->origin == player->Plocation)
			{
				if ((exits + i)->open == true)
				{
					if ((exits + i)->direction == South)
					{
						player->Plocation = (exits + i)->destiny;
						printf("%s", (exits + i)->destiny->description);
					}
					else
					{
						printf("You can't go that way.\n");
					}
				}
				else
				{
					printf("The door is closed.\n");
				}
			}
		}
	}

	else if ((strcmp(action, "e") == 0) || (strcmp(action, "east") == 0) || (strcmp(action, "go east") == 0))
	{
		for (i = 0; i < NUM_EXITS; i++)
		{
			if ((exits + i)->origin == player->Plocation)
			{
				if ((exits + i)->open == true)
				{
					if ((exits + i)->direction == East)
					{
						player->Plocation = (exits + i)->destiny;
						printf("%s", (exits + i)->destiny->description);
					}
					else
					{
						printf("You can't go that way.\n");
					}
				}
				else
				{
					printf("The door is closed.\n");
				}
			}
		}
	}

	else if ((strcmp(action, "w") == 0) || (strcmp(action, "west") == 0) || (strcmp(action, "go west") == 0))
	{
		for (i = 0; i < NUM_EXITS; i++)
		{
			if ((exits + i)->origin == player->Plocation)
			{
				if ((exits + i)->open == true)
				{
					if ((exits + i)->direction == West)
					{
						player->Plocation = (exits + i)->destiny;
						printf("%s", (exits + i)->destiny->description);
					}
					else
					{
						printf("You can't go that way.\n");
					}
				}
				else
				{
					printf("The door is closed.\n");
				}
			}
		}
	}

	else if ((strcmp(action, "u") == 0) || (strcmp(action, "up") == 0) || (strcmp(action, "go up") == 0))
	{
		for (i = 0; i < NUM_EXITS; i++)
		{
			if ((exits + i)->origin == player->Plocation)
			{
				if ((exits + i)->open == true)
				{
					if ((exits + i)->direction == Up)
					{
						player->Plocation = (exits + i)->destiny;
						printf("%s", (exits + i)->destiny->description);
					}
					else
					{
						printf("You can't go that way.\n");
					}
				}
				else
				{
					printf("The elevator don't works.\n");
				}
			}
		}
	}

	else if ((strcmp(action, "d") == 0) || (strcmp(action, "down") == 0) || (strcmp(action, "go down") == 0))
	{
		for (i = 0; i < NUM_EXITS; i++)
		{
			if ((exits + i)->origin == player->Plocation)
			{
				if ((exits + i)->open == true)
				{
					if ((exits + i)->direction == Down)
					{
						player->Plocation = (exits + i)->destiny;
						printf("%s", (exits + i)->destiny->description);
					}
					else
					{
						printf("You can't go that way.\n");
					}
				}
				else
				{
					printf("The elevator don't works.\n");
				}
			}
		}
	}
	
	// LOOK ACTION //////////////////////////////////

	else if (strcmp(action, "look north") == 0)
	{

	}

	else if (strcmp(action, "look south") == 0)
	{

	}

	else if (strcmp(action, "look east") == 0)
	{

	}

	else if (strcmp(action, "look west") == 0)
	{

	}

	// OPEN/CLOSE ACTION ////////////////////////////

	else if (strcmp(action, "open") == 0)
	{

	}

	else if (strcmp(action, "close") == 0)
	{

	}

	// QUIT ACTION /////////////////////////////////

	else if ((strcmp(action, "q") == 0) || (strcmp(action, "quit") == 0))
	{
		return false;
	}

	else
	{
		printf("Wrong input, type help for HELP.\n");
	}
	
	return true;
}
