#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

// 初始化键盘
void init_board(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

// 打印棋盘
void display_board(char board[ROW][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	// 打印行号
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

// 布置雷
void set_mine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

// 排雷
char get_mine(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y - 1] + mine[x - 1][y]
		+ mine[x - 1][y + 1] + mine[x][y - 1]
		+ mine[x][y + 1] + mine[x + 1][y - 1]
		+ mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0');
}


void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;

	while (win < row * col - EASY_COUNT)
	{
		printf("请输入要排查雷的坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] = '*')
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被炸死了\n");
					display_board(mine, ROW, COL);
					break;
				}
				else
				{
					int count = get_mine(mine, x, y);
					show[x][y] = '0' + count;
					display_board(show, ROW, COL);
					win++;
				}
			}
			else
			{
				printf("改坐标已被排查过了\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入!\n");
		}

	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		display_board(mine, ROW, COL);
	}
}

