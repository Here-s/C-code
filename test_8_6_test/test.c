#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<math.h>


//求两个数当中不同的二进制位
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n1 >> i) & 1) != ((n2 >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//还能这样写
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = a ^ b;//异或的结果 不相同为 1 
//	int d = 1;
//	int count = 0;
//	int e = 32;
//	while (e)
//	{
//		if (c & d == 1)
//		{
//			count++;
//		}
//		c >>= 1;
//		e--;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//输出一个数的二进制的奇数位和偶数位
//向右移动奇数位 按位与1 就是拿到这个数的偶数位 最高位的偶数位是移动31 位  
//奇数位的最高位是移动30 位
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}


//判断一个数是元音还是辅音  多组输入
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		//这里进行判断 上面是读取字符
//		//这里是用或来做题
//		if (ch == '\n' || ch == ' ')
//		{
//			continue;
//		}
//		if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I'
//			|| ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
//		{
//			printf("Vowel\n");
//		}
//		else
//		{
//			printf("Consonant\n");
//		}
//		getchar();//清理掉缓冲区
//	}
//	return 0;
//}

//还可以这样来判断
//int main()
//{
//	int ch = 0;
//	char vowel[] = "aeiouAEIOU";
//	while ((ch = getchar()) != EOF)
//	{
//		//获取的字母来比较写好的原因字面数组
//		int i = 0;
//		int flag = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == vowel[i])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("Vowel\n");
//		}
//		else
//		{
//			printf("Consonant\n");
//		}
//		getchar();
//	}
//	return 0;
//}


//通过二维数组来判断两个矩阵是否相等
//int main()
//{
//	int arr1[10][10] = { 0 };
//	int arr2[10][10] = { 0 };
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	int flag = 1;//默认矩阵相同
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			if (arr1[i][j] != arr2[i][j])//也可以在输入第二个的时候 直接判断
//			{
//				flag = 0;
//				break;
//			}
//		}
//	}
//	if (flag = 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}


//将一n行m列的矩阵换成m行n列输出
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);//因为是n行m列 所以这样写
//		}
//	}
//	return 0;
//}


//下面代码的结果是
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;//把 arr数组的地址赋给 p 
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;//每次跳过2个字节 因为p是short类型
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);//00345
//    }
//    return 0;
//}


//下面代码输出的结果是
//int main()
//{
//    int a = 0x11223344;//在内存当中是倒着存放的   低地址 44 33 22 11 高地址
//    char* pc = (char*)&a;//指向 44 
//    *pc = 0;//把 44 改成了0
//    printf("%x\n", a);//所以就是 11223300
//    //%d 是10进制 
//    //%o 是八进制
//    //%x 是十六进制
//    return 0;
//}


//下面代码的输出结果是
//int i;
//int main()
//{
//    i--;//-1
//    if (i > sizeof(i))//sizeof返回的是无符号整数
//        //比较的时候 会发生算术转换  -1当作无符号数看的话 就没符号位了 所以就很大
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}


//写一个函数打印数组的内容
//void print(const int* p, int sz)
//{
//	assert(p);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}


//求Sn=a+aa+aaa+aaaa+aaaaa的前n项之和，其中a是一个数字
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int k = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//求出0～100000之间的所有“水仙花数”
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//判断是否是水仙花数
		//先计算 i 的位数    在计算每一位的n次方之和     最后判断
		//算有多少位 除10就好了
		int tmp = i;
		int sum = 0;
		int cnt = 1;//一个数默认是1位
		while (tmp /= 10)
		{
			cnt++;
		}
		//再算每一位的n次方之和  要拿上每一位
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, cnt);
			tmp /= 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	} 
	return 0;
}


