#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>;

//语句 又分号隔开就是一条语句  只要有一个分号就是一个语句
//分支语句 

//if语句
//int main()
//{
//	int age = 28;
//	//if (age >= 18)//判断为真 就打印
//	//{
//	//	printf("成年\n");
//	//}//还可以加else if 再次判断  从而实现多分支
//	//else//是指其它情况 
//	//{
//	//	printf("未成年\n");
//	//}
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//	else if(age>=18 && age<30)//这里不能写数学表达式
//	{
//		printf("青年\n");
//	}
//	else if (age >= 30 && age < 55)
//	{
//		printf("中年\n");
//	}
//	else
//	{
//		printf("老年");
//	}
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	if (age >= 18)//一个大括号就是一个代码块
//	{
//		printf("成年\n");
//		printf("可以谈恋爱\n");
//	}
//	else
//	{
//		printf("未成年\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)//什么也不打印  因为下面的if和else是匹配的  else和离得最近的可以匹配的if匹配
//		//所以 下面这if else 是在这个if下面的执行程序  所以 要先进入这个if  但是这个if的判断条件为假
//		//所以就进不了这个if  所以就什么也不打印
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}

//在写代码的时候 要加上大括号  形成好的代码风格  方便维护  要多谢空格
//int test()
//{
//	int a = 10;
//	if (a)
//	{
//		return 1;//return代表函数的结束
//	}
//	return 2;
//
//}
//int main()//推荐一本书《高质量C/C++风格》    要加下划线 或者把每个单词第一个大写 
//{
//	int ret = test();
//	printf("%d\n", ret);//这里就有了歧义了  不知道返回的是1还是2 其实这里的if外面就是else了
//	//因为代码不规范 所以就可能产生歧义  一定要注意代码风格
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	if (a == 5)//这样写容易把等于写成赋值 这样就出bug了  所以应该写成 5 == a 这样就不会产生bug了
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//判断一个数是不是奇数
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//	{
//		printf("是奇数\n");
//	}
//	else
//	{
//		printf("不是奇数\n");
//	}
//	return 0;
//}

//输出1-100之间的奇数
//int main()
//{
//	int i = 1;
//	while (i<=100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//	i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i+=2;//因为i刚开始就是1  所以i每次加2 还是奇数
//	}
//
//	return 0;
//}


//switch语句   也是一种分支语句 常常由于多分支
//比如 输入1  输出星期1   输入2  输出星期2   输入3  输出学期3
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	//if (1 == day)
//	//{
//	//	printf("星期一\n");
//	//}
//	//else if (2 == day)
//	//{
//	//	printf("星期二\n");
//	//}
//	//else if (3 == day)
//	//{
//	//	printf("星期三\n");
//	//}
//
//	//这样繁琐的写法就能用switch语句替代
//
//	switch (day)//day 决定了分支的入口   case是分支的入口  day必须是整型表达式
//	{
//	case 1://这里就是语句项
//		printf("星期一\n");
//		break;//一定要有break 不然会继续执行下面所有的case 语句  break是跳出当前的分支
//	case 2://case后面必须是整型常量表达式
//		printf("星期二\n");
//		break;//只要走到break 就跳出当前循环了
//	case 3:
//		printf("星期三\n");
//		break;//加break 使得代码风格较好    
//	}
//	return 0;
//}


// 输入1 -5 显示weekday   6-7 输出weekend   这里就可以这样写 并不是每个break后面都有break;
//需要跳出分支 就加上break  不需要跳出 就不加break
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default://表达式的值 与case值都不匹配的话 就使用default  case不匹配才考虑default
//		//这些可以不用按顺序写  都可以打乱顺序写  但是尽量不要乱写
//		printf("输入错误  请输入1-7\n");
//		break;
//	}
//	return 0;
//}

//一定要注意  case有break 才能跳出    switch没有if语句用的那么多
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:
//        m++;
//    case 2:
//        n++;
//    case 3:
//        switch (n)
//        {//switch允许嵌套使用
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break;
//        }
//        //因为case 3 之后没有break s所有继续往下执行 case 4
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);//是 5 3
//    return 0;
//}


//循环语句
//while     for     do while

//while循环
//int main()
//{
//	int a = 10;
//	while (a)
//	{
//		printf("hehe\n");//a不改变 所以一直为真  就是死循环了
//	}
//	return 0;
//}

//打印1-10；
//int main()
//{
//	int i = 1;
//	while (i<=10)//这里的i<= 10 是判断条件   i是循环变量
//	{//大括号不能少 如果少了的话 while也只能控制一条语句 就是无限死循环了
//		//if (5 == i)
//		//{
//		//	break;//终止整个循环  如果是多层嵌套的话  就跳出最近的循环
//		//}
//		if (5 == i)
//		{
//			continue;//continue是跳过本次循环continue后面的代码，直接去while循环的判断部分 就是终止本次循环
//			//有continue的话 就只打印1 2 3 4  然后就死循环了  因为 i 不变了 i 没法++ 所以一直死循环
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//for循环  比while循环更有优势  因为如果while循环里面的 i 被改变了  那么while循环的次数就变了
//所以就用到for循环 将初始化 判断 调整 放在一起   for循环用的最多

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)//使用 break 也会跳出for循环  用法和while循环一样
//	{
//		if (5 == i)
//		{
//			continue;//这样的话 不打印5  因为continue之后 会来到调整部分 for的调整条件还会执行
//			//就不会造成死循环
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

//for循环的循环控制
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)//不可在for循环内改变for循环变量 不然会导致死循环
//	{
//		printf("%d ", i);//循环变量的调整是在上面的i++   
//		//i = 5;//像这样 就会导致死循环  因为每次都把 i 变成 5 了 
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };//把第一个元素初始化为0 编译器会把剩下的元素初始化为 0
//	int i = 0;
//	for (i = 0; i < 10; i++)//尽量写成前闭后开的写法  因为这样的话 写10的话 就是循环10次
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//for循环的变种
//int main()
//{
//	//int a = 0;
//	//for (;;)//for循环的初始化 判断 调整三个部分是可以省略的  但是会导致死循环
//	//	//判断部分如果省略 意味着判断条件恒为真  就死循环了
//	//	//建议不要轻易省略
//	//{
//	//	printf("haha\n");
//	//}
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("haha\n");//这样打印的就是100次 如果把初始化条件省略的话   j 的值就不会重置 j就变成10了 
//			//所以i的下次循环再来的时候 j就还是10 就不会执行了
//		}
//	}
//
//	return 0;
//}


//一道笔试题
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//这里循环0次 因为判断条件是 把0赋给k 判断为假 所以不循环
//	{
//		k++;
//	}
//	return 0;
//}


//do while循环  用的最少  do 循环语句 while(表达式)  上来先执行一次 然后在判断循环
//do while循环 至少被执行一次 
//int main()
//{
//	//打印1-10
//	int i = 1;
//	do 
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}



//计算n的阶乘
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//计算1！+2！+    +n!  
//int main()
//{
//	int n = 10;
//	//scanf("%d", &n);
//	int i = 1;
//	int sum = 1;
//	int ret = 0;
//	for (n = 1; n <= 4; n++)
//	{
//		sum = 1;//每次都应该把sum重置为1 不然sum就会保留原来的值 就会出问题了
//		for (i = 1; i <= n; i++)
//		{
//			sum *= i;//因为每次都把n的阶乘算出来了 所以只要加个变量保存就行了		
//		}
//		ret += sum;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//也能这样写
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int sum = 1;
//	int ret = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//		ret += sum;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//在某个有序数组中查找某个数字  找7
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//不指定数组大小 但是初始化了  所以这里数组大小是10
//	//查找7   下标是0-9  就是0-sz-1
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int flag = 0;//没有找到
//	for (i = 0; i < sz; i++)
//	{
//		if (7 == arr[i])
//		{
//			flag = 1;
//			break;
//		}
//	}//但是作为一个有序数组 这样遍历是很浪费时间的  
//	if (flag == 1)
//	{
//		printf("找到了 下表是 %d", i);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}  


//所以这里就可以按区间找  一半一半的找  就是二分查找  前提是有序数组
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	int k = 7;//要查找的元素
//	int flag = 0;//默认找不到
//
//	
//	while (left <= right)//即使是 left + right 也有一个元素要查找
//	{
//		//求中间元素下标
//		mid = (left + right) / 2;//每一次二分查找 都要求出中间元素的下标 
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else//如果else没有匹配的话 就说明上面有问题了  可能是加了分号
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag = 1)
//	{
//		printf("找到了 下标是 %d\n", mid);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}


//用代码演示多个字符从两边移动往中间汇聚
//在屏幕上面打印 welcome to vs 2019  刚开始全是# 然后慢慢的打印出字符
//int main()
//{
//	char arr1[] = "welcome to bit !!!";
//	char arr2[] = "                  ";
//	int sz = strlen(arr1);
//
//	int left = 0;
//	int right = sz - 1;
//	printf("%s\n", arr2);
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		Sleep(1000);//Sleep函数 单位是号秒 所以就是停1秒
//		//system("cls");//清理屏幕
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	return 0;
//}


//编写程序 模拟用户登录 三次内输入密码正确 就提示登录成功 如果输错三次 就提升登陆失败
int main()
{
	int i = 0;
	//假设密码是字符串"123456"
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:> ");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//比较2个字符串 用strcmp 两个相等就返回0
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误错误\n");
		}
	}
	if (i == 3)
	{
		printf("三次密码错误，登录失败\n");
	}
	return 0;
}