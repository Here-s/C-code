#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
//二维数组可以省略行 不能省略列   一维数组可以把个数省略掉

void menu()
{
	printf("***************************\n");
	printf("******1.play   0.exit******\n");
	printf("***************************\n");

}

void game()
{   //先布置雷，再排查雷   两个数组 一个存放雷的信息 另一个提供给玩家排查出来的雷的消息（只将另一个展示出来）
    //为了更好的表示，可以弄成11*11的数组，还是中间 9个放雷 放11是为了好显示周围的雷
    //将有雷的放成1 无雷的放成0 实现雷的放置
    //1。布置好的雷的信息
    char mine[ROWS][COLS] = { 0 };//数组初始化

    //2.排查出的雷的信息
    char show[ROWS][COLS] = { 0 };//这个数组是要给用户打印
	InitBoard(mine, ROWS, COLS,'0');//初始化数组   为了避免初始化成一样  所以把要初始化的内容也传过去
	InitBoard(show, ROWS, COLS,'*');
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);//改成show也能把*打印出来
	//先布置雷 
	SetMine(mine,ROW,COL);//布置雷就是把雷放到Mine数组里面  而且是随机找一个坐标进去  这里不是ROWS是因为要设置雷的数组是9*9的所以这里传过去的是9*9的
	//然后扫雷
	//DisplayBoard(mine, ROW, COL);//mine是雷的信息 所以不打印
	FindMine(mine,show,ROW,COL);//查找雷  mine数组找到信息放到show数组里面去  因为最后是在show数组里面操作 所以穿ROW COL
}

void test()//测试游戏
{
	int input = 0;
	srand((unsigned int)time(NULL));//拿time函数的返回值作为生成起点
	do
	{
		menu();
		printf("请选择:");
			scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);//放input是因为当input为0时为假 所以跳出循环，其他数字为真 继续循环
}
int main()
{
	test();
	return 0;
}