#include <stdio.h>
#include <stdlib.h>
#include "Room.h"
#include "World.h"
#include "Exit.h"
#include "Player.h"




int main()
{
	World* world = new World;
	world->createworld();
	world->worldintro();
	
	do
	{ 
	world->inputs();
	} while (1);

	getchar();

	delete world;

	return 0;
}