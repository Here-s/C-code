#include<stdio.h>
int main()
{
	double d = 3.14;
	double * pd =&d;
	*pd = 5.5;
	printf("%lf\n", d);//double类型打印用%lf
	printf("%lf\n",*pd);//和 printf("%lf\n", d); 的结果一样
	return 0;
}
//int main()
//{
//	char ch = 'w';
//	char *pc =& ch;//因为ch是char类型的
//	printf("%d\n", sizeof(pc));//pc的大小  4个字节
//	*pc = 'a';//把ch里的字符改成a
//	printf("%c\n", ch);//打印字符用%c
//	return 0;
//}
//int main()
////生活中是通过地址找到房间
////如何产生地址  32位是指有32根地址线/数据线
////设正电为1负电为0  由32个0变成32个1，有这么多空间，2的32次方个
////将2的32次方的每一个空间作为内存编号，每个编号对应一个地址，一个空间对应一个字节
//{
//	int a = 10;//4个字节,32位里面指针也是4个字节，因为是32个比特位的二进制序列。所以64位的就是8个字节
//	//printf("%p\n", a);//%p是打印地址
//	int* p = &a;  //把a的地址存到p里面，p就是指针变量m  p的类型是int*
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p =20;//通过*p把a的值改成20。。*p就是这里的a
//	printf("%d\n", a);//%d 打印a的值
//	//*-解引用操作符
//	//有一种变量就是用来存放地址的-指针变量
//	//&a;//取出a的地址
////&取地址操作符
//	return 0;
//}