#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����ָ������








void menu()
{
	printf("*********************************\n");
	printf("****   1.add        2.sub    ****\n");
	printf("****   3.mul        4.div    ****\n");
	printf("****         0.exit          ****\n");
	printf("*********************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int main()//����ָ������ʹ�� ʵ�ּ�����
{
	int input = 0;
	int x = 0;
	int y = 0;
	printf("������\n");
	printf("\n");
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������������������");
			scanf("%d%d", &x, &y);
			printf("%d\n",Add(x,y));
			break;
		case 2:
			printf("������������������");
			scanf("%d%d", &x, &y);
			printf("%d\n", Sub(x, y));
			break;
		case 3:
			printf("������������������");
			scanf("%d%d", &x, &y);
			printf("%d\n", Mul(x, y));
			break;
		case 4:
			printf("������������������");
			scanf("%d%d", &x, &y);
			printf("%d\n", Div(x, y));
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
}

//char* my_strcpy(char* dest,const char*src)//1��дһ������ָ��pf������ָ��my_strcpy  2��дһ������ָ������pfArr���ܹ����4��my_strcpy�����ĵ�ַ
//1,char* (*pf)(char*,const char*)     2,char*(*pfArr[4])(char*,const char*)

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int* arr[5];//����ÿ��Ԫ�ض���ָ�� ������ָ������
//	//��Ҫһ�����飬���Դ��4�������ĵ�ַ�����������Ǻ���ָ�������
//	int(*pa)(int,int)=Add;//pa���Add�ĵ�ַ  �����⼸�������ĵ�ַһ������������Ҳ���Դ�� Sub Mul Div�ĵ�ַ
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//parr[4]������  �ĸ�Ԫ�� ������ָ�� �����Ǻ���ָ������;
//	//����ָ�������-��ַ��ͬ
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//parr[i]���ǵ�ַ  ÿ���±����һ��ָ��
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (pa)(2, 3));//Add����pa  ����paҲ��  pa�����Ž�ϵ����ȼ���
//	printf("%d\n", (*pa)(2, 3));//ָ������� �ҵ�ԭ���Ķ���
//	printf("%d\n", (**pa)(2, 3));
//	printf("%d\n", (***pa)(2, 3));//�����ͬ ˵��*�������Ӳ�û��ʲôЧ��  ���Խ�����  Ҳ���Բ�������
//
//	return 0;
//}

//(*(void(*)())0)();   void(*)()�Ǹ�����ָ������ ǿ������ת���ɺ���ָ������  0����ĳ������ַ  ��ǰ������÷���void�������޲ε�  ���ú�����Cȱ�ݺ����塷
//����ָ�����Իῼ