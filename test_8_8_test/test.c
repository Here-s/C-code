#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//在屏幕上输出杨辉三角
//int main()
//{
//	int arr[30][30] = { 1 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i < n; i++)
//	{
//		arr[i][0] = 1;
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

int main()
{
    int i = 0;// 1 2 3 4   分别代表 A B C D 
    for (i = 1; i <= 4; i++)
    {
        if ((i != 1) + (i == 3) + (i == 4) + (i != 4) == 3)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}