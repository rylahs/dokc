#include <stdio.h>

typedef enum ACTION { MOVE, JUMP, ATTACK, QUIT } ACTION;

int DoMove(int nParam)
{
	puts("Do Move");
	return 0;
}
int DoJump(int nParam)
{
	puts("Do Jump");
	return 0;
}
int DoAttack(int nParam)
{
	puts("Do Attack");
	return 0;
}

int main(void)
{
	int (*functionArray[3])(int) = {
		DoMove, DoJump, DoAttack
	};

	ACTION act = 0;

	//while ((act == GetInputFromClient()) != QUIT)
	//{
	//	switch (act)
	//	{
	//	case MOVE:
	//		functionArray[MOVE](0);
	//		break;
	//	case JUMP:
	//		functionArray[JUMP](0);
	//		break;
	//	case ATTACK:
	//		functionArray[ATTACK](0);
	//		break;
	//	default:
	//		break;
	//	}
	//}
	while ((act = GetInputFromClient()) != QUIT)
	{
		functionArray[act](0);
	}
}

ACTION GetInputFromClient()
{
	// TO-DO
	return MOVE;
}