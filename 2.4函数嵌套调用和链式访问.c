#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>



//�����������붨��  ����ӷ���ʵ����һ������ģ�飬��ô����˵������ͷ�ļ� ���� .h  �����Լ�д��ͷ�ļ���#include"XXXX"��������ʵ�ַ���.c�ļ���
//����˵��  int Add(int x,int y);
//int Add(int x, int y)   ������ʵ��
//{
//	int z = x + y;
//	return z;
//}
//�ӷ� add  ���� sub  �˷� mul ���� div


int Add(int x, int y)//�ŵ�ǰ�����Ͳ�������
{
	int z = x + y;
	return z;
}
int main()//�����������붨��
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);//Addδ��������Ϊ�����Ǵ�������ɨ�裬���Ի���ʾ����������
	printf("%d\n", sum);
	return 0;

}


//int main()
//{
//	printf("%d", printf("%d", printf("%d",43)));
//	return 0;
//}
//int main()
//{
//	//��ʽ���ʣ���һ�������ķ���ֵ��Ϊ����һ�������Ĳ���
//	//��1
//	//int len = 0;
//	//len=strlen("abc");//strlen���ַ�������
//
//	printf("%d\n", len);
//	//��2
//	printf("%d\n", strlen("abc"));//��������֮���ӡ������Ҫ��strlen����len�����ٴ�ӡlen
//	return 0;
//}
