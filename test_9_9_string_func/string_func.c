#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//void left_move(char* arr, int k)
//{
//	int len = strlen(arr);
//	assert(arr);
//	for (int i = 0; i < k; i++) {
//		//左旋第一个字符
//		//1. 保存第一个字符
//		char tmp = *arr;//数组名解引用 拿到首元素
//		//2. 把后续的字符依次往前移动
//		for (int j = 0; j < len - 1; j++) {
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3. 把保存好的第一个字符放到最后
//		*(arr + len - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}


//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//就是写一个 a 看看是不是另外一个 b 转化来的

//判断arr2 是否是 arr1 旋转得到
//int is_left_move(char arr1[], char arr2[]) {
//	int len = strlen(arr1);
//	for (int i = 0; i < len; i++) {
//		left_mova(arr1, 1);
//		if (strcmp(arr1, arr2) == 0) {
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "AABCD";
//	char arr2[] = "BCDAA";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1) {
//		printf("相等\n");
//	}
//	else {
//		printf("不相等\n");
//	}
//	return 0;
//}


//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N) 
//find_k(int arr[3][3], int k, int* px, int* py) {
//	//先定位右上角的坐标
//	int x = 0;
//	int y = *py - 1;
//	while (x < *px && y >= 0) {
//		if (arr[x][y] < k) {
//			x++;
//		}
//		else if (arr[x][y] > k) {
//			y--;
//		}
//		else {
//			
//			*px = x;
//			*py = y;
//			return;
//		}
//	}
//	*px = -1;
//	*py = -1;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	//如果是 n*n 的数组  那么时间复杂度就是 O(n^2)
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	find_k(arr, k, &x, &y);
//	if (x == -1 && y == -1) {
//		printf("没找到");
//	}
//	else {
//		printf("找到了 下标是 %d %d\n", x, y);
//	}
//	return 0;
//}


//strlen 函数 原型是 size_t strlen(const char* str)//加上const 使得str不可被修改
// size_t 是 unsigned int 
//int main() {
//	size_t a = strlen("abcdef");
//	printf("%u\n", a);
//	return 0;
//}

//int main() {
//	if (strlen("abc") - strlen("abcdef") > 0) {
//		printf("hehe\n");//输出这个  因为是无符号数 所以被理解为正数
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//模拟实现 strlen


//strcpy  字符串拷贝函数 拷贝的时候 会把 '\0' 拷过去
//int main() {
//	char arr1[] = "XXXXXXXXXXXXXX";
//	char arr2[] = "hello";
//	strcpy(arr1, arr2);//拷贝的时候 字符串如果没 \0 就会出错  目标字符数组一定要比拷贝的数组要大
//	//而且目标空间可修改    因为strcpy函数不会考虑目标空间的大小
//	printf("%s\n", arr1);
//	return 0;
//}


char* my_strcpy(char* arr1, const char* arr2)
{
	assert(arr2);
	char* ret = arr1;
	while(*arr1++ = *arr2++)
	{
		;
	}
	*arr1 = '\0';
	return ret;
}
int main()
{
	char arr1[] = "xxxxxxxxxx";
	char arr2[] = "abc";
	char* ret = my_strcpy(arr1, arr2);
	printf("%s\n", ret);
	return 0;
}