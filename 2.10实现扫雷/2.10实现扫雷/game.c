#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)//初始化数组只能初始化成一个样子
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;//指针给的set 调的时候给0 这里就是0
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= col; i++)//0开始是因为打印出来的行列刚刚好
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)//i=1是因为打印出来的棋盘是9*9的
	{
		printf("%d ", i);//
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col)//设置棋盘，也就是布置雷
{
	int count = EASY_COUNT;//表示10个雷  布置雷的时候，布置一个雷，count-1
	while (count)//因为不是一次就能布置完的 所以是while循环
	{
		int x = rand() % row + 1;//因为雷是在9*9的方块儿中的 row=9 所以剩下的为0-8  +1刚好是放雷的位置
		int y = rand() % col + 1;//使用rand函数必须要调用srand函数  因为只调用一次 所以在实现扫雷.c里面就行了
		if (board[x][y] == '0')//拿0判断是因为初始化的时候放进去的是0
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	//因为周围都是字符 所以-0  得到几个雷
	return 
	    mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x+1][y-1]+
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)//因为真实的行列传到小写的里面了，所以后面也是小写
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("请输入排查雷的坐标 横竖都是1-9   ");
		scanf("%d%d", &x, &y);//输入的是1-9
		if (x >= 1 && x <= row && y >= 1 && y <= col)//&&并且的意思
		{
			//说明坐标合理
			//1.踩雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine,row,col);
				break;
			}
			else//不是雷
			{
				//计算周围有几个雷
				int count= get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("输入的坐标不合理，请重新输入");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功");
		DisplayBoard(mine, row, col);
	}
}
//展开功能  用到递归