#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//�ַ�ָ��
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	*p = 'b';
//	const char* str = "abcdef";//str �����a 
//	return 0;
//}


//ָ������   Ҫ��֤�Ǹ�����
//int main()
//{
//	int* arr[10];//������10��Ԫ�� ÿ��Ԫ�������� int* 
//	char* arr2[4];//Ҳ��ָ������
//	return 0;
//}


//����ָ��   Ҫ��֤�Ǹ�ָ��
//int main()
//{
//	int(*arr)[5];//��* �Ⱥ�arr��� ����ָ�� һ��ָ��������� ��5��Ԫ�� ÿ��Ԫ�ص�������int 
//	int* (*p)[5];//* ��p��� ��ָ�� Ȼ�ͺ������������   ���������� int* 
//	return 0;
//}


//���������ָ�����

// һά���鴫��
//void test(int arr[])//��������ʹ�� ��Ϊ���������� ����������������û����
//{}
//void test(int arr[10])//Ҳ��������д�����10 �Ǹ����� ��ʵ����д д��дЧ����һ��
//{}
//void test(int* arr)//Ҳ��������д ��Ϊ������������Ԫ�ص�ַ��������ָ�������վͿ��� 
////��Ϊ�����͵�ַ ������ int* ������
//{}
//void test2(int* arr[20])//��������д ��Ϊ�������� ����ÿ��Ԫ���� int* ���� ��int* ������ 20����ʡ�Ե�
//{}
//void test2(int** arr)//��������д ��Ϊ�����ǵ�ַ ÿ��Ԫ�ص������� int* ������ int** ������
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}


//��ά���鴫��
//void test(int arr[3][5])//û���� ���������� ������������� 
//{}
//void test(int arr[][5])//�п���ʡ��  �в�����ʡ�� ��Ϊʡ���еĻ����Ͳ�֪���ж�������
//{}
////�к��ж�ʡ�ԵĻ� ���Ǵ����д��
//void test(int (*p)[5])//��Ϊ�ǵ�һ�� ������5��Ԫ�� ���� [5] 
//{}
//void test(int** p)//�� ������Ϊ�Ƕ�ά�����д�ɶ���ָ��  ���������һ��ָ������ĵ�ַ�Ļ� �����ö���ָ��
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//���鴫�� ��������Ԫ�صĵ�ַ  ��������һά���� 3�о�������Ԫ�� ÿ��Ԫ����������5��Ԫ��
//				//�����Ļ� ��Ԫ�ؾ��ǵ�һ��һά����ĵ�ַ  ������ָ�������ָ�������
//	return 0;
//}


//һ��ָ�봫��
//void print(int* p, int sz)//������һ��ָ�� ������һ��ָ�������վ�û����  д��������ʽҲû����
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);//��һ��ָ�봫��ȥ
//	return 0;
//}


//void test(int* p)//�Ѿ��涨�˽��յĲ���
//{}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int arr[10] = { 0 };
//	//test(&a);
//	test(arr);
//	test(p);//��Ϊp �Ѿ���һ��ָ���� ���Դ�p ������
//	return 0;
//}


//time ���� ���ص���ʱ��� 


//����ָ�봫��
//void test(int** ppa)//��Ϊ�����Ƕ���ָ�� �����ö���ָ������
//{}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	int* arr[5];//ָ������ 
//	test(ppa);
//	test(&pa);
//	test(arr);//ָ�������������  ��Ϊ������ָ������ ���԰ѵ�ַ����ȥ �Ϳ����ö���ָ����������
//	return 0;
//}



//����ָ��
//�ַ�ָ��
//����ָ��
//����ָ����� - ��ź����ĵ�ַ

//������ - ������Ԫ�صĵ�ַ
//&������ - ����ĵ�ַ

//������ &������  ���������õ������ĵ�ַ
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("%p\n", &Add);//�������õ��˺����ĵ�ַ
//	printf("%p\n", Add);
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;//ȥ�����־�������  ���Ծ�������
//
//	int arr[10] = { 0 };//ȥ������ �������� ����  int[10]
//
//	//����ָ������ int(*)[10]
//	int(*parr)[10] = &arr;//parr��������ָ��
//
//	//����ָ������ int(*)(int,int)
//	int(*pf)(int, int) = &Add;//pf ��������ź����ĵ�ַ�� - pf���Ǻ���ָ�����    ����ָ���������ź�����ַ
//		//pf�Ǻ���ָ�� �����Ⱥ�*��� ����һ���Ǻ��� ����������(int , int) ����ֵ�� int  
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//int(*pf)(int, int) = &Add;
//	int(*pf)(int, int) = Add;//��Ϊ������Ҳ�Ǻ����ĵ�ַ ����д������Ҳ����  ��Add���� pf û���� ˵��Add��pf��һ����
//	//��Ϊ��һ���� ����ʹ�ú���ָ���ʱ�� �Ϳ��Բ��ý�����
//
//	int ret = Add(2, 3);
//	printf("%d\n", ret);
//	//ret = (*pf)(4, 5);//���� 4��5    �й��оص�д��   д* ��Ϊ�˸��õ����
//	ret = pf(4, 5);//��ΪAdd ��pf��һ���� ���Կ�������д   д�ܶ��* Ҳû����
//	printf("%d\n", ret);//ͨ������ָ��ȥ�����������
//	return 0;
//}


//typedef void(* pfun_t)(int);
//int main()
//{
//	//����1
//	(*(void (*)())0)();//void (*)() ��һ������ָ������ ��0���ֵ����ǿ������ת�� ת��Ϊһ�ֺ���ָ������
//			//0 �ͱ�����һ�ֵ�ַ��  �ŵ���һ���޲ε� ��������Ϊ void �ĺ���   ǰ��*���ǽ����� �ҵ��Ǹ�����
//			//�ҵ�����֮�� ��ȥ���ú��� ����û���� 
//			// �ܵ���˵�� ������һ�κ������� �����а�0ǿ������ת��Ϊ����Ϊvoid (*)()�ĺ����ĵĵ�ַ��
//			// *(void (*)())0  ͨ��0 ��ַ ������ȥ�ҵ��������ȥ����0��ַ���ĺ��� 
//			// �����õĺ������޲� ���������� void 
//	//����2
//	void (*signal(int, void(*)(int)))(int);//���ں�����˵signal �ܺ����Ž�� ˵����һ������ int�����Ĳ���
//			// void(*)(int) ������һ������ ��������Ǻ���ָ������ ȥ���������� void (*)(int);���Ǹ���������
//			// ����signal ������һ�κ�������  �����ĺ�������signal 
//			// signal�������������� ��һ����int���ͣ��ڶ�����void(*)(int)�ĺ���ָ������
//			// signal�����ķ���������Ȼ��  void(*)(int) �ĺ���ָ������ ��������� int ���������� signal
//			
//	//����ͨ��typedef �ض���һ�� ����д
//	pfun_t signal(int, pfun_t);//�����ͺ������
//	return 0;
//}


//int Add(int x, int y)//int (*)(int,int)
//{
//	return x + y;
//}
//int Sub(int x, int y)//int (*)(int,int)
//{
//	return x - y;
//}
//int Mul(int x, int y)//int (*)(int,int)
//{
//	return x - y;
//}
//int Div(int x, int y)//int (*)(int,int)
//{
//	return x - y;
//}
//int main()
//{
//	int* arr[10];//����ָ������
//	//����ָ������� - ��ź���ָ�������
//
//	//������Щ̫������ ���Կ��Դ���һ������ָ������� 
//	//int(*pf1)(int, int) = Add;
//	//int(*pf2)(int, int) = Sub;
//	//int(*pf3)(int, int) = Mul;
//	//int(*pf4)(int, int) = Div;
//
//	//pfArr ����һ������ָ������     ��Ϊ��Щ�����Ĳ��� ����ֵ����ͬ
//	int(*pfArr[4])(int, int) = { Add,Sub,Mul,Div };//�Ⱥͷ����� ˵�������� int(*)(int, int) ����Ǻ���ָ��
//			//������Щ����һ������ָ������
//	return 0;
//}


//ʵ�ּӼ��˳�����
//void menu()
//{
//	printf("**************************************\n");
//	printf("*******1.add      2.sub     **********\n");
//	printf("*******3.mul      4.div     **********\n");
//	printf("*******       0 exit        **********\n");
//	printf("**************************************\n");
//}
//int Add(int x, int y)//int (*)(int,int)
//{
//	return x + y;
//}
//int Sub(int x, int y)//int (*)(int,int)
//{
//	return x - y;
//}
//int Mul(int x, int y)//int (*)(int,int)
//{
//	return x * y;
//}
//int Div(int x, int y)//int (*)(int,int)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		//��������д�Ļ� ����̫�鷳�� ���Ҫ����������ܵĻ� ����ͻ��ӷ�� ����Խ��Խ��
//		//��Ϊ��������һ�� ���Ĳ���Ҳһ�� ���Ծ����������
//		switch (input)
//		{
//		case 1:
//			printf("������������������");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n",ret);
//			break;
//		case 2:
//			printf("������������������");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("������������������");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("������������������");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//����������
//int main()
//{
//	int input = 0;
//	do
//	{
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//
//		//������������ֽ�ת�Ʊ� - ��C��ָ�롷
//		int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };//ÿ��Ԫ�ض��Ǻ���ָ��  �����Ļ� ���ܶ��� ����Ҳ����̫��
//		if (input == 0)
//		{
//			printf("�˳�������\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("������������������");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);//ͨ�������ĵ�ַ�����ú��� 
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}

//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("������������������");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);//���õ���pfָ��ָ��ĺ��� Ҳ��ͨ����ַȥ�����������
//	//���ָ����õ��˻ص�����  �ص�������ʵ�� �����õ�����ָ��
//	printf("ret = %d\n", ret);
//}
//���߻�������
//int main()
//{
//	int input = 0;
//	do
//	{
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//
//		//�������װΪ����
//		switch (input)
//		{
//		case 1:
//			Calc(Add);//�����Ǻ����ĵ�ַ
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
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//ָ����ָ�������ָ��
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int arr[10];
	int(*p)[10] = &arr;//p��һ��ָ�����������ָ��
	int* arr[10];//����ָ�������
	&arr;//ȡ��������ָ������ĵ�ַ
	int* (*p)[10] = &arr;//p��ָ������ָ�������ָ�� ÿ��Ԫ���� int* 

	//����������ŵ��Ǻ���ָ�� ��ôp����ָ����ָ�������ָ�� 
	int(*pf)(int, int) = Add;//pf���Ǻ���ָ�� 
	int(*pfArr[5])(int, int) = Add;//pfArr �Ⱥ�5��� ˵��������  ������5��Ԫ��    
	//����pfArr ��һ������ָ������� 
	int(*(*ppfArr)[5])(int, int) = &pfArr;//ppfArr����һ��ָ���������ָ�� 
	// ppfArr�Ⱥ�* ���  ��˵����һ��ָ��  �ٽ��[5] ˵��ָ�����һ������ �����Ԫ����һ������ָ������
	return 0;
}