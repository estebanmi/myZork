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
	
	
	world->inputs();

	getchar();

	delete world;

	return 0;
}