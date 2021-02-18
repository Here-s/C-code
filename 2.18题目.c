#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



void print_table(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <=i; j++)
		{
			printf("%d*%d=%d-3d ", i, j, i * j);//-3d 是为了让乘法表对齐
		}
		printf("\n");
	}
}
int main()//实现乘法表  多种数字乘法表 
{
	int n = 0;
	scanf("%d",  &n);
	print_table(n);
	return 0;
}

//int Fun(int n)//根据下面函数 调用函数Fun(2）返回值是多少  递归考点
//{//调用 传进去的是2
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);//这里是2* Fun(n + 1)的值返回去 所以继续算  Fun(n + 1) 传的是3 继续执行 直到传进去的是5 然后一直返回 最后答案是16
//}

//void print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));//解引用 得到元素 加的i 刚好是整数 四个字节
//	}
//}
//int main()//使用指针打印数组的内容 不能用下标
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);//打印数组所以传的时候也要把元素个数传过去
//	return 0;
//}

//void print(int m)
//{
//	int i = 0;
//	printf("奇数位\n");
//	for (i = 30; i >=0; i -= 2)//先把最左边的移动  开始是从左往右数的第31位   >=0  是因为从右往左第一位不用移
//	{
//		printf("%d ",(m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位\n");
//	for (i = 31; i >=1; i -= 2)//先把最左边的移动  开始是从左往右数的第31位
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//
//}
//int main()//获取一个整数二进制序列中的奇数位和偶数位 分别打印出二进制序列
////可以求得各二进制位，然后按位与1 打印   打印的时候每个奇数位右移到最后一位
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}

//int get_diff_bit(int m,int n)//二进制序列 所以是int
//{
//	int tmp = m^n;//要异或  用异或 二进制相同为0 相异为1 所以异或一下 结果有几个1 就有几个位不同
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()//求两个整数表达式中 有多少个二进制位不同  用异或 二进制相同为0 相异为1 所以异或一下 结果有几个1 就有几个位不同
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count=get_diff_bit(m, n);
//	printf("count=%d\n", count);
//	return 0;
//}

//int count_bit_one(int n)//
////方法3
////n  n=13  二进制1101  n-1=1100       n=n&(n-1)结果是1100  再赋值  1011  再次按位与 结果是1000 再减一次  0111  再次按位与 0000
////这样每进行 n=n&(n-1) 一次之后 就会让最右边的1消失 变成0的时候就没有1了 所以能执行几次 就说明有几个1
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//高效的算法
//		count++;
//	}
//	return count;
//}

//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i=0;i<32;i++)
//	{
//		if (((n >> i) & 1) == 1)//按位一次得到一个二进制位
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int count_bit_one(unsigned int n)//unsigned 按无符号数处理  就能弄-1了
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//
//		}
//		n = n / 2;
//	}
//	return count;
//}


//int count_bit_one( int n)//int n 来接收a   
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int main()//统计二进制数字中1的个数   以前谷歌的笔试题
////不能是-1  如果是-1的话 上面函数那里 输出0  -1除2不够除 count未变化 所以是商0  如果把-1当作无符号数处理就行了
////还能一下一下的求二进制数字按位与0001  前面都是0  都是1 按位与结果是1  有一个1 结果是0 所以与1按位与求得最低位  一次完了之后左边倒数第二位往右移一位
////第一个数移31位
//{
//	int a = 0;
//	scanf("%d", &a);
//	//写一个函数求a的二进制（补码）表示中有几个1
//	int count=count_bit_one(a);
//
//	//13    最后四位是1101 13模2 商6 余1得到的是最后一个1 然后去掉最后一位 继续模2除2去掉最后一位
//	printf("count=%d\n", count);
//	return 0;
//}
