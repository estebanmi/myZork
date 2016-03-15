#ifndef MY_EXIT
#define MY_EXIT

enum dir
{
	North,
	South,
	East,
	West,
	Up,
	Down
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