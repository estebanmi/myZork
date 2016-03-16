#include <stdio.h>
#include <stdlib.h>
#include "Room.h"
#include "World.h"
#include "Exit.h"
#include "Player.h"




int main()
{
	bool ans = true;
	World* world = new World;
	world->createworld();
	world->worldintro();
	
	do
	{ 
	ans = world->inputs();
	} while (ans == true);

	delete world;

	return 0;
}