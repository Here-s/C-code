#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//数组初始化，在创建时给数组的内容一些合理初始值（初始化）
//二维数组是顺序存储的

int main() //二维数组的创建
{
	//int arr[3][4];//这里是三行四列的元素
	//char ch[5][6];
	//int arr[3][4] = { 1,2,3,4,5 };//二维数组不完全初始化的时候，剩下的也是0
	//int arr[3][4] = { {1,2,3},{4,5} };//将123放在第一行 45放在第二行
	//int arr[][] = { 1,2,3,4,5,6,7,8 };//这样不对，因为缺少下标  行可以省略 列一定不能省略，不能都空着
	//int arr[2][4] = { {1,2,3,4},{5,6,7,8} };
	int arr[3][4] = { {1,2,3},{4,5} };
	int i = 0;
	for (i = 0; i < 3; i++)//行的下标是i
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]=%p\n",i,j &arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}

//int main()//一维数组在内存中的存储  数组在内存中是连续存放的
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);//打印地址 %p
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "zxcvbn";//[z][x][c][v][b][n][\0]
//	//printf("%c\n", arr[3]);%c打印字符  %d是数字
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//15 是随机值，因为要找到\0
//
//}
//
//int main()//数组是一组相同类型元素的集合
////type_t是指元素类型， arr_name是指数组名，  [const_n]是一个常量表达式，用来指定数组大小
//{
//	//创建应该数组存放10个整形
//	int arr[10] = { 1,2,3 };//这种是不完全初始化  剩下的元素 默认初始化为0
//	char arr2[5];//char 用来存放字符  【】里面放的是常量，不能是变量
//	char arr3[] = "dsfcds";//未指定大小 必须初始化 最后一个字符就是\0
//	printf("%d\n", sizeof(arr3));//sizeof 计算 数组 变量 类型的大小，单位是自己
//	printf("%d\n", strlen(arr3));//strlen只跟字符串有关 库函数 要引头文件
//	return 0;
//}
