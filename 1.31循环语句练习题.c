#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//引用strlen函数的头文件
#include<windows.h>//引用sleep函数的头文件
#include<stdlib.h>//引用system函数的头文件

int main()//模拟代码实现，模拟用户登录情景，并且只能登陆三次。（只允许输入三次密码，如果密码正确则提示登陆成，如果三次均输入错误，则退出程序
//因为输入三次，所以循环三次
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i<3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);
		if (strcmp(password, "123456")==0)//==不能用来比较两个字符串是否相同，应该用一个库函数-strcmp
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
		printf("三次密码均错误，退出程序\n");
	return 0;
}

//int main()//编写代码，演示多个字符从两端移动，向中间汇聚
//{
//	//从电脑上打印这样的一句话，welcome to bit ，要打印就得有原话，所以原话不能少
//   // ################
//	//w##############r
//	//we############er   按这样打印
//	char arr1[] = "welcome to bit";//首先得有一个这样的字符--原话
//	char arr2[] = "##############";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//-2是因为数组元素里面还有\0
//	//int right =strlen(arr1)-1;//strlen求元素个数，不包括\0，所以-1 
//	//可以把arr1的元素赋值到arr2的元素当中，下面这样
//	while (left<=right)//这样就全部结束了，否则会打印出反向的
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//这里表示休息1000毫秒，，即1秒
//		system("cls");// 这个函数是执行系统命令   休息1秒后，清空屏幕，再打印    cls 是清空屏幕的意思
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);//因为上面那样循环完不打印，这样是再打印出来
//	return 0;
//}

//int main()//二分法算法  也得有序数组
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//用二分法，即下标的平均值，左下标+右下标然后除2
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元数个数
//	int left = 0;//左下标
//	int right = sz - 1;  //10的下标是9 ，也就是元素个数-1=右下标
//	while (left<=right)//因为左边大于右边的时候就没找到，和下面没找到意思一样，所以这里是<=
//	{
//		int mid = (left + right) / 2;//这里是中间元素下标   这里到最后一个找到是一个循环体 所以while循环
//		if (arr[mid] > k)
//		{
//			right = mid - 1;//因为中间元素下标比右下标大，所以右下标又设为中间元素下标-1
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);//因为最后会调到中间值>k,那么再调右边，调到相等就对了
//			break;//不存在两个相同的，打印两个结果，因为找到一个就跳出循环
//		}
//	}
//	if (left > right)//因为最后会调到中间值，但是如果还大的话，还会调，造成左>右，说明没找到
//	{
//		printf("找不到");
//	}
//	return 0;
//}

//int main()//在有序数组中找到具体的某个数字n    这样一个一个找，效率还是低，可以采用二分法
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 37;
//	//写一个代码在arr数组（一定是有序数组）中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}

//int main()//优化算法
//{
//	int i = 0;
//	int n = 0;
//	int ret= 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//
//	return 0;
//}


//int main()//计算1的阶乘加到10的阶乘的和    这里麻烦，可以优化，
//{
//	int i = 0;
//	int n = 0;
//	int ret= 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)//这样的话n=1时，下面算出的就是1的阶乘
//	{
//		ret = 1;//将ret赋值为1，也是重置的意思
//		for (i = 1; i <= n; i++)
//		{
//			
//			ret = ret * i;//因为没重置，所以每次的ret都把上次的ret加上   这里算的是每个数的阶乘
//		}//这里是n的阶乘
//		sum = sum + ret;//将每次循环的阶乘加起来
//	}
//	printf("sum=%d\n", sum);
//
//	return 0;
//}

//int main()//计算n的阶乘   1*2*3*4*5....*n   不考虑溢出的情况 
//{
//	int i = 0;//先把n的数字弄出来
//	int n = 0;
//	int ret= 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;//把每个i乘起来,这里的意思是每次循环着去乘，在上一次的基础上再乘一个数，就是阶乘的意思
//	}
//	printf("%d\n", ret);
//	return 0;
//}
