#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("**********************************************\n");
	printf("*******************1.Play*********************\n");
	printf("*******************0.Exit*********************\n");
	printf("**********************************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	int ret = 0;
	init_board(board, ROW, COL);
	display_board(board, ROW, COL);
	// 玩游戏
	while (1)
	{
		// 玩家下棋
		player_move(board, ROW, COL);
		display_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'c')
			break;

		// 电脑下棋
		computer_move(board, ROW, COL);
		display_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'c')
			break;
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if (ret == 'q')
	{
		printf("平局\n");
	}
	display_board(board, ROW, COL);
}

int main()
{
	int input = 0;
	// 生成随机数
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择！\n");
			break;
		}
	} while (input);

	return 0;
}