#ifndef MY_WORLD
#define MY_WORLD

#define NUM_ROOMS 11 //total number of rooms
#define NUM_EXITS 20 //total number of exits

class Room;
class Player;
class Exit;

class World
{
public:
	Exit* exits;
	Room* rooms;
	Player* player;

	World();
	
	~World();
	
	const void createworld();
	const void worldintro();
	const bool inputs();

};

#endif