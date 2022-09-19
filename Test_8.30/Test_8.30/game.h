#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

// ³õÊ¼»¯¼üÅÌ
void init_board(char board[ROW][COLS], int rows, int cols, char set);

// ´òÓ¡¼üÅÌ
void display_board(char board[ROW][COLS], int row, int col);

// ²¼ÖÃÀ×
void set_mine(char mine[ROWS][COLS], int row, int col);

// ÅÅÀ×
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
