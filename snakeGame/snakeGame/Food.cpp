#include "Food.h"

Food::Food()
{
	gen_food();

}

void Food::gen_food()
{
	pos.X = (rand() % WIDTH - 3) + 3;
	pos.Y = (rand() % HEIGHT - 3) + 1;
}

COORD Food::get_pos() { return pos; }
