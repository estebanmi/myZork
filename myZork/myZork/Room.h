#ifndef MY_ROOM
#define MY_ROOM

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