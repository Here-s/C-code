#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




//void BubbleSort(int arr[],int sz)
//{
//
//}
////qsort-ʲô���͵����ݶ�������
//int main()//ð��������  ֻ��������������
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	return 0;
//}

//�ص����� ͨ������ָ����õĺ��� ��ָ�뱻������������ָ��ĺ����ǣ����ǻص�����
//void print(char* str)//��ε���print����  ���ǻص�����
//{
//	printf("byte:%s", str);
//}
//void test(void(*p)(char*))//�����ָ�� ���Խ��յ�ַ  ��test�ڲ����ú���
//{
//	printf("test\n");
//	p("dance");
//}
//int main()
//{
//
//	test(print);
//
//	return 0;
//}

//ָ����ָ�������ָ��
//int Add(int x,int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10]=&arr;//ȡ����ĵ�ַ
//	int(*pf)(int, int);//����ָ��
//	int (*pfArr[4])(int, int);//pfArr��һ������-����ָ�������
//	int (*(*ppfArr)[4])(int, int) =&pfArr;//ppfArr��һ������ָ�� ָ��ָ����������ĸ�Ԫ��  ��һ��ָ����ָ�������ָ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int,int)
//	return 0;
//}

//�ص�������ͨ������ָ����ú���
//ͨ���ص��������������ֶ��
//void menu()
//{
//	printf("*********************************\n");
//	printf("****   1.add        2.sub    ****\n");
//	printf("****   3.mul        4.div    ****\n");
//	printf("****   5.Xor      0.exit     ****\n");
//	printf("*********************************\n");
//}
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
//int Xor(int x, int y)//������˼
//{
//	return x ^ y;
//}
//void Calc(int(*pf)(int ,int ))//pf���Ǽ��ֺ����ĵ�ַ  Calc �ص�����
//{
//	int x = 0;
//	int y = 0;
//	printf("������������������");
//	scanf("%d%d", & x, & y);
//	printf("%d\n", pf(x, y));
//}
//int main()//ͨ���ص��������������ֶ��
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	printf("������\n");
//	printf("\n");
//	do//
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)//��ô����� ÿ���������͵��ú�����һ��
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(Xor);
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//}

//����ָ������ʵ�ּ�����(ת�Ʊ�)
//void menu()
//{
//	printf("*********************************\n");
//	printf("****   1.add        2.sub    ****\n");
//	printf("****   3.mul        4.div    ****\n");
//	printf("****   5.Xor      0.exit     ****\n");
//	printf("*********************************\n");
//}
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
//int Xor(int x, int y)//������˼
//{
//	return x ^ y;
//}
//int main()//����ָ������ʹ�� ʵ�ּ�����
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	printf("������\n");
//	printf("\n");
//	int (*pfArr[6])(int, int) = { 0,Add,Sub,Mul,Div,Xor };//��pfArr����ָ��������������ĸ���������   ��Ϊ֮ǰ�������1 2 3 4 �����±��ʾ��Ӧ������
//	do//���Կ�����������  ��������Ļ� �ӱ������Ҳ����
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("����������������");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����������ѡ��\n");
//		}
//	} while (input);
//}

//int main()//����ָ������ʹ�� ʵ�ּ�����
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	printf("������\n");
//	printf("\n");
//	do//����д����ᷱ�� ԽдԽ��  ��Ϊcase���ﶼ����������  ���Կ��Ը���
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//}
