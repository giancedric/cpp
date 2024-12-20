#ifndef SNAKE_H
#define SNAKE_H

#define WIDTH 50
#define HEIGHT 25


#include <windows.h>
#include <vector>

using namespace std;

class Snake
{
private:
	COORD pos;
	int len;
	int vel;
	char direction;
	vector<COORD> body;

public:
	Snake(COORD pos, int vel);
	void change_dir(char dir);
	void move_snake();
	COORD get_pos();

	bool eaten(COORD food_pos);
	vector<COORD> get_body();

	void grow();
	bool collided();
};
#endif
