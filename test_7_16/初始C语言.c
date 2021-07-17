#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a = 0;
//	//scanf("%d", &a);//编译器会报错不安全   因为scanf会无线读入数据 而不管给了多少的内存
//	char arr[5] = { 0 };//创建数组 叫arr 里面放5个元素  char是字符类型  最多输入5个  如果多了5个的话 程序就会崩溃
//	scanf("%s", arr);// 输入字符串 所以是%s 
//	printf("%s", arr);
//	return 0;
//}

//作用域 限定变量的使用范围  
//void test()
//{
//	int b = 100;//b的作用域就在test这个范围内
//}
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);//能访问是因为 a和peintf是在同一个作用域
//	//作用域：从局部变量和全局变量来了解
//	//局部变量：就是局部变量所在的局部范围
//	return 0;
//}

//int a = 100;//这里的a就是全局变量  全局都能访问  作用域是整个工程
//void test()
//{
//	printf("全局变量打印a%d\n", a);
//}
//int main()
//{
//	test();
//	printf("%d\n", a);
//	return 0;
//}

//生命周期 
//变量的生命周期就是变量创建到变量销毁的时间
//局部变量：进入这个范围 生命周期开始   出了这个范围 生命周期结束
//全局变量：程序的生命周期和main函数的生命周期是一样的 所以全局变量的生命周期就是程序的生命周期
//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);//a的作用周期就是放a的这个大括号内
//	}
//	return 0;
//}

//常量：就是不变的量 
//C语言中的常量：1 字面常量   2 const修饰的常变量    3 #define 定义的标识符常量   4 枚举常量
#define MAX 100

//int main()
//{
//	////1 字面常量：
//	//3.14;//这就叫字面常量  直接写出来的常量
//	//100;
//	////2 const修饰的常变量  因为原来是变量 加了const之后 有了常属性
//	//const int num = 10;//如果在num前面加上const的话 就不能修改了 加上就具有了常属性 就不可以修改了 就变成了常变量
//	////num = 20;//对num赋值  可以把值改变 所以叫变量   加上const之后  就会报错 显示num是const修饰的 所以不可修改
//	//printf("%d\n", num);
//	//const int n = 10;
//	//int arr[n] = { 0 };//创建了数组 当数组大小用n来弄的话   因为n是常量 所以会报错  所以数组大小不能用变量来指定
//	////加了const还是不行 就说明n还是个变量  如果想用一个不变的值   还想要使用的话 const就不行了
//	//3 #define定义的标识符常量
//	//printf("%d\n", MAX);
//	//int arr[MAX] = { 0 };
//	//4 枚举常量 可以一一列举的  性别：男 女 保密    三原色：RGB   血型     所以可以创建枚举类型 把东西一一列举
//
//	return 0;
//}

//4 枚举常量 可以一一列举的  性别：男 女 保密    三原色：RGB   血型     所以可以创建枚举类型 把东西一一列举
//enum Sex//enum 枚举关键字    里面三个可能取值  所以叫常量
//{//在这里面可以对这个三个常量赋值
//	MALE,
//	FAMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = FAMALE;
//	//MALE = 5;//不能修改 是因为 MALE是一个常量
//	printf("%d\n", MALE);
//	printf("%d\n", FAMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}

//字符串 转义字符 注释   C语言没有字符串类型   由双引号引起的一串字符 就叫字符串
//int main()
//{
//	"adasfafa";//这就是一个字符串   字符串可以存放在字符数组当中
//	char arr[] = "abc";//arr这个是字符数组   数组创建时  如果后面初始化了 就可以不写[]里面的值
//	//在字符串最后面隐藏一个\0(也是一个字符)  看不到 但是存在   \0是字符串的结束标志
//	char arr2[] = { 'a','b','c','\0'};//当补了一个\0之后 打印出来就不会有乱码了  说明\0是字符串的结束标志
//	printf("%s\n", arr);
//	printf("%s\n", arr2);//如果不手动添加一个\0的话  就会一直往后检索 直到检索到\0 就会有乱码
//	return 0;
//}

//int main()
//{
//	char arr[] = "abc";//arr这个是字符数组   数组创建时  如果后面初始化了 就可以不写[]里面的值
//	char arr2[] = { 'a','b','c'};//当补了一个\0之后 打印出来就不会有乱码了  说明\0是字符串的结束标志
//	//库函数  strlen 求字符串长度 
//	int len1 = strlen(arr);
//	int len2 = strlen(arr2);
//	printf("%d\n", len1);
//	printf("%d\n", len2);//15 因为没补\0  c的后面完全不知道 所以一直往后找\0  所以数到15才数到\0   如果自己补\0 就是3
//	return 0;
//}

//转义字符：转变原来的意思  \0就是转义字符   在一个字符前面加一个\就能转义
//int main()
//{
//	printf("\0");//是个转义字符 所以啥也打印不出来
//	printf("asaf\naff");//n前面加了\ 所以后面的n就被转变意思了 就是换行
//	printf("c:\\code\\test\n");//因为\是转义字符 所以这样就能打印出c:\code\test了
//	return 0;
//}

//int main()
//{
//	
//	//printf("%c\n",'a');
//	//printf("%c\n", '\'');//想打印出单引号 就在想打印的单引号前面加个\ 
//	//printf("%s\n", "\"");//打印双引号 和单引号一样    \t是水平制表符    \r是回车   
//	//printf("\a\a\a\a\a\n");//\a 是触发电脑的报警声音
//	printf("%c\n",'\162');//代表162是八进制数字   打印出是r  因为ACSII码值是r   65是A的ASCII码值
//	//162是8进制 转化为就是8^2+6*8^1+2=114; 
//	printf("%c\n", '071');
//	printf("%c\n", '\x51');//有x说明是十进制   
//	//十六进制 由 0-9 a b c d e f 这就是1-15 
//	printf("%c\n", 'x5a');
//	//0 是数字0    \0是一个转义字符 ASCII码值是0  '0'是字符0的意思ACSII码值是48  
//	//"abc0de"//这里的0 就是字符0
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("abcdef"));//是6 因为strlen 统计的是 长度 与\0无关 不统计\0  只统计\0前面的
//	return 0;
//}

//int main()//一道考题  
//{
//	printf("%d\n", strlen("c:\test\328\test.c"));//这个字符串长度是14 因为\t算一个转义字符 \32是一个字符 因为\后面跟八进制数字 所以8不算
//	//所以8又是一个字符 所以这样算下来之后是14
//	return 0;
//}

//选择语句   分支语句还有switch
//int main()
//{
//	int num = 0;
//	//好好学习 选1  不好好学习选0
//	printf("加入bit\n");
//	printf("你要好好学习吗 选1或者0\n");
//	scanf("%d", &num);
//	if (num == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("回家种田\n");
//	}
//	return 0;
//}

//循环 for   while    do.while()
//int main()
//{
//	int line = 0;
//	while (line <= 40000)
//	{
//		printf("写代码 ");
//		line++;
//		printf(" 写了%d\n", line);
//	}
//	if (line > 40000)
//	{
//		printf("好offer\n");
//	}
//	return 0;
//}


//函数
//int ADD(int x,int y)
//{
//	return x + y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d %d", &num1, &num2);
//	//求和 使用函数求
//	sum = ADD(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}

//数组   下标从0开始  数组是以下标来访问
int main()
{
	//通过数组来保存一批数字
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };//这个数组里面 可以放十个整型元素  如果只对前5个赋值的话  那么后五个没初始化 就全是0
	int i = 0;
	//计算数组的元素个数
	int sz = sizeof(arr)/sizeof(arr[0]);//这样算的就是数组元素个数
	while(i<sz)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
}
