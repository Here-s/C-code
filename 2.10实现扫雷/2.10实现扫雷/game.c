#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)//��ʼ������ֻ�ܳ�ʼ����һ������
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;//ָ�����set ����ʱ���0 �������0
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0; i <= col; i++)//0��ʼ����Ϊ��ӡ���������иոպ�
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)//i=1����Ϊ��ӡ������������9*9��
	{
		printf("%d ", i);//
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col)//�������̣�Ҳ���ǲ�����
{
	int count = EASY_COUNT;//��ʾ10����  �����׵�ʱ�򣬲���һ���ף�count-1
	while (count)//��Ϊ����һ�ξ��ܲ������ ������whileѭ��
	{
		int x = rand() % row + 1;//��Ϊ������9*9�ķ�����е� row=9 ����ʣ�µ�Ϊ0-8  +1�պ��Ƿ��׵�λ��
		int y = rand() % col + 1;//ʹ��rand��������Ҫ����srand����  ��Ϊֻ����һ�� ������ʵ��ɨ��.c���������
		if (board[x][y] == '0')//��0�ж�����Ϊ��ʼ����ʱ��Ž�ȥ����0
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	//��Ϊ��Χ�����ַ� ����-0  �õ�������
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

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)//��Ϊ��ʵ�����д���Сд�������ˣ����Ժ���Ҳ��Сд
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("�������Ų��׵����� ��������1-9   ");
		scanf("%d%d", &x, &y);//�������1-9
		if (x >= 1 && x <= row && y >= 1 && y <= col)//&&���ҵ���˼
		{
			//˵���������
			//1.����
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine,row,col);
				break;
			}
			else//������
			{
				//������Χ�м�����
				int count= get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("��������겻��������������");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�");
		DisplayBoard(mine, row, col);
	}
}
//չ������  �õ��ݹ�