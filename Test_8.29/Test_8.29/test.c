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
	// ����Ϸ
	while (1)
	{
		// �������
		player_move(board, ROW, COL);
		display_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'c')
			break;

		// ��������
		computer_move(board, ROW, COL);
		display_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'c')
			break;
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else if (ret == 'q')
	{
		printf("ƽ��\n");
	}
	display_board(board, ROW, COL);
}

int main()
{
	int input = 0;
	// ���������
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}