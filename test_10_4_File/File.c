#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//文件操作

//把文件放在硬盘当中 这样就把数据持久化，放到文件当中
//把信息写在文件当中 就实现了数据持久化

//test.c  test.h  test.exe  这些都是程序文件
//假设把一个文件写到 data.txt 这个就是数据文件（用来存放文件，也可能是程序运行起来需要读取的文件）
//printf 是打印到屏幕上去   scanf 是从键盘上面输入
//文件标识通常被称为文件名

//文件指针：文件类型指针
//每个被使用的文件都在内存当中开辟了相应的文件信息区

//打开文件的时候 就会生成一个文件信息区（struct FILE f;）记录文件的信息都会存在这里

//打开文件：fopen 只能打开当前路径的文件
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");//r 表示是以读的形式打开  pf 指向的是这个文件信息区的起始地址
//	//把 r 改成 w 的话 就是写文件 如果文件不存在的话，会新建一个文件
//
//	FILE* pf = fopen("D:\\wxchat\\1\\2\\data.txt", "r");//这样就能根据路径打开其它地方的文件了  是绝对路径方式
//
//	//打开成功会返回文件信息区起始地址，如果失败的话，就返回空指针 NULL 
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//打开成功  读文件
//
//	//关闭文件  fclose 关闭文件  只要把文件指针传过来就好了
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//文件读写的时候有 随机读写 和 顺序读写
//顺序读写：fgetc：输入函数（从文件读入内存种）   fputc：输出字符（从内存写入文件中 适用于所有文件）

//顺序读写
//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//写文件
//	fputc('b', pf);
//	fputc('u', pf);
//	//显示文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//流：高度抽象概念  包括：（文件 屏幕 网络 光盘 软盘）这些外部数据
//在外部设备的基础上面 有了流的概念  C语言已经封装好了  我们只要把数据放到流里面就行了
//流会自己去弄好
//就像打开文件的指针 pf 指向的就是一个文件流 
//C语言程序运行起来，就默认打开了三个流：标准输出流（stdout）  标准输入流（stdin）  
//标准错误流（stderr）   这三个流都是 FILE*

//int main()
//{
//	//stdout 标准输出流
//	fputc('L', stdout);//这里是直接写在输出的屏幕上面  操作系统的流自己来弄
//	fputc('o', stdout);
//	fputc('c', stdout);
//	fputc('k', stdout);
//	fputc('e', stdout);
//	fputc('y', stdout);
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("data.txt", "r");//r 是读文件
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//读文件
//	int ch = fgetc(pf);//文件标识的位置就是第一个字符 文件指针每读一次就往后移动一次
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//fgetc 既可以从文件读数据  也可以从键盘读数据
//int main()
//{
//	//从标准键盘去读
//	int ch = fgetc(stdin);
//	printf("%c\n", ch);
//
//	ch = fgetc(stdin);
//	printf("%c\n", ch);
//
//	ch = fgetc(stdin);
//	printf("%c\n", ch);
//	return 0;
//}


//文本行输入函数 fgets
//文本行输出函数 fputs

//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//写文件  写一行数据
//	fputs("Lockey\n", pf);//\n 依然是换行的意思
//
//	fputs("Lockey", pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//读文件
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//读文件
//	char arr[20] = { 0 };//读一行数据 只会读一行
//	fgets(arr, 5, pf);//这里是最多读 4 个 因为最后一个放 \0 
//	//如果写的很多的时候  读完这行之后 就不读了
//	printf("%s\n", arr);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//格式化输入和输出函数  fscanf  fprintf
//struct S
//{
//	int n;
//	double d;
//};
//int main()
//{
//	struct S s = { 100, 12.5 };
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//写文件  
//	fprintf(pf, "%d %lf\n", s.n, s.d);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//再读出来
//struct S
//{
//	int n;
//	double d;
//};
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//读文件  
//	fscanf(pf, "%d %lf\n", &(s.n), &(s.d));
//
//	printf("%d %lf\n", s.n, s.d);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//上面这些文件都是 文本文件读写


//二进制输入输出： fwrite（写）  fread（读）

//struct S
//{
//	int n;
//	double d;
//	char name[10];
//};
//int main()
//{
//	struct S s = { 100, 3.14, "Lockey" };
//	FILE* pf = fopen("data.txt", "wb");//wb 以二进制形式来写文件
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//写文件  以二进制的形式来写 所以应该用二进制的形式来读
//	fwrite(&s, sizeof(s), 1, pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//以二进制形式来读
//struct S
//{
//	int n;
//	double d;
//	char name[10];
//};
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("data.txt", "rb");//wb 以二进制形式来写文件
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//写文件  以二进制的形式来写 所以应该用二进制的形式来读
//	fread(&s, sizeof(struct S), 1, pf);
//
//	printf("%d %lf %s\n", s.n, s.d, s.name);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//面试题：对比一下 scanf fscanf sscanf 函数
// scanf：从标准输入读取格式化的数据（就是键盘输入）
// fscanf：从所有的输入流上读取格式化的数据（磁盘 光盘 U盘） 包含 scanf 功能
// sscanf：从一个字符串中读格式化的数据（把字符串转化为格式化的数据）

		//对比一下 printf fprintf sprintf
// printf：打印格式化的数据到屏幕上（就是标准输出）
// fprintf：把格式化的数据输出到所有输出流上（屏幕 文件）
// sprintf：写一个格式化的数据到一个字符串当中（就是把格式化的数据转化为字符串）

struct S
{
	int n;
	double d;
	char name[10];
};
int main()
{
	char arr[100] = { 0 };
	struct S tmp = { 0 };
	struct S s = { 100, 3.14, "Lockey" };
	//把一个格式化的数据转化为一个字符串
	sprintf(arr,"%d %lf %s", s.n, s.d, s.name);//以字符串的方式打印

	//打印
	printf("%s\n", arr);

	//sscanf  从 arr 的字符串当中 提取格式化的数据
	sscanf(arr, "%d %lf %s", &(tmp.n), &(tmp.d), tmp.name);
	//打印
	printf("%d %lf %s\n", tmp.n, tmp.d, tmp.name);//以格式化的数据打印
	return 0;
}