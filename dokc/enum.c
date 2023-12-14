#include <stdio.h>

enum ACTION { MOVE, JUMP, ATTACK };
typedef enum COLOR { RED = 100, GREEN, BLUE} COLOR;

void DoAction(enum ACTION act)
{
	switch (act)
	{
	case MOVE:
		puts("Move!");
		break;
	case JUMP:
		puts("Jump!");
		break;
	case ATTACK:
		puts("Attack!");
		break;
	default:
		break;
	}
}

int main(void)
{
	enum ACTION act = MOVE;
	COLOR color = GREEN;
	printf("Action: %d, Color: %d\n", act, color);
	DoAction(act);

	return 0;
}