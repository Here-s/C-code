#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>

//����   ��Ϊ���ࣺ1 �⺯��(Ƶ��Ҫ�õĺ���)    2 �Զ��庯��

//�⺯��
//IO���� input output ����������� scanf  printf   getchar   putchar
//�ַ������������� strlen  strcmp  strcpy   strcat
//�ַ���������   tolower תСд   toupper ת��д
//�ڴ��������   memcpy   memset    memmove   memcmp
//ʱ�� ���ں���   time
//��ѧ����    sqrt  abs(�����ֵ)  fabs(�����ֵ)   pow (��ƽ��)

//��������һ���ӳ��� ��һ�����ͳ����е�ĳ���ִ��룬��һ������������
//����һ�������뺯���ͷ���ֵ  �ṩ�Թ��̵ķ�װ��ϸ�ڵ�����

//strcpy ����
//int main()
//{
//	char arr1[20] = "xxxxxxx";//Ŀ��ռ�  һ��Ҫ��֤�ܷ��¿����ĺ���  ����֮�� Ҳ��\0����ȥ��
//	char arr2[] = "hello";
//	char * ret = strcpy(arr1, arr2);//��һ��������Ҫ���������ַ�����  �ڶ����������ַ������Դͷ
//	//����ֵ���Խ���  Ҳ���Բ�����   \0 ��ռ���� ����ռ�ռ�
//	printf("%s\n", arr1);
//	printf("%s\n", ret);//strcpy �ķ���ֵ ���ǿ���������
//	return 0;
//}


//memset  �����ڴ�  �������� ��һ���� Ҫָ�������ڴ��  �ڶ������޸ĳ�ʲô�ַ�  �������� �����޸ĵĴ�С   
//����ֵ�� ��һ������   һ������ռ��������   void* ָ��  ���Խ����������͵�ָ��  ����ָ��
//int main() 
//{
//	char arr[] = "hello offer";//��ǰ����ַ��ĳ� xxxxx 
//	char* ret = (char*)memset(arr, 'x', 5);//����ǰ�arr����ȥ ���ַ��ĳ� x  �޸�ǰ���  ��С��λ��1���ֽ�
//	//һ��Ҫǿ������ת��  �����Ƚϰ�ȫ
//	printf("%s\n", arr);
//	return 0;
//}

//ʹ�ÿ⺯�� һ��Ҫ��ͷ�ļ�
//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr,1,5*sizeof(int));// �����Ļ� һ�������� 4 ���ֽ� �������Ļ�  ����Ҫһ���ֽ�һ���ֽڵ�����
//	//���ǰ�һ�����������ÿ���ֽڶ������1  ���Ծ���01010101  ��Ϊ�ĸ��ֽڼ������������
//	printf("%s\n", arr);
//	return 0;
//}

//һ��Ҫѧ��Ӣ��


//�Զ��庯��  �Լ������캯��   ����Ҫ�к����� �������� ��������
//int Max(int x,int y)//������յ�x y ����ʽ����
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d %d", &a, &b);
//	//���������Ľϴ�ֵ
//	max = Max(a,b);//��a b ��ֵ����ȥ Ȼ���������Ľϴ�ֵ  ���ﴫ��a b ��ʵ�ʲ���
//	printf("%d\n", max);
//	return 0;
//}


//����������
//Swap(int x,int y)//���ʵ�κ��βε�ַ����ͬ�Ļ� ��˵���ж����Ŀռ� ˵�����ǲ���ͬһ���ڴ�
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	printf("����ǰ a=%d b=%d\n", a, b);
//	Swap(a, b);//Ҫ����ַ ��Ϊʵ�δ����βε�ʱ�� �β���ʵ�ε�һ����ʱ���� 
//	//���Ըı��βα����ǲ���Ӱ��ʵ�ε�
//	printf("������ a=%d b=%d\n", a, b);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa�����ҵ�a  ��Ϊ��ͬһ���ַ �����ǲ���ͬһ���ڴ�
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}


//Swap(int* px,int* py)//�����������ָ�����ı�ֵ  ��ָ��������ͬһ���ڴ� 
////�����ı�ʵ��   �����ڲ�Ҫ�ı亯���ⲿ������ֵ ���Ծ�Ҫ����ַ��ȥ
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	printf("����ǰ a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("������ a=%d b=%d\n", a, b);
//	return 0;
//}


//int Max(int x,int y)//�����β��Ǻ��������ź���Ĳ���  ��Ϊֻ�е��ú�����ʱ�� �ŻῪ���ڴ�
////��ʹ���꺯��֮�� �βδ��������������������� 
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d %d", &a, &b);
//	//���������Ľϴ�ֵ
//	max = Max(a,b);//�������ο��Դ����� ���ʽ ����  
//	printf("%d\n", max);
//	return 0;
//}


//��������
//Swap1(int x,int y)//
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//Swap(int* px,int* py)//
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	printf("����ǰ a=%d b=%d\n", a, b);
//	Swap1(a, b);// �����Ǳ�����ֵ ���Խ�ֵ����  ���βε��޸Ĳ���Ӱ��ʵ��
//	Swap2(&a, &b);// �����Ǳ����ĵ�ַ ���Խе�ַ����   ���ִ��η�ʽ �޸��βλ�ı�ʵ��
//	printf("������ a=%d b=%d\n", a, b);
//	return 0;
//}


//��ӡ100-200֮�������  ͨ����������

//��������� is_prime ����1 ����������� ���� 0 
//int is_prime(int n)
//{
//	//�ж��Ƿ�Ϊ���� ���Գ���
//	//  2-sqrt(n)
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)//�ܱ����� ˵����������
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//дһ������ �ж��Ƿ�Ϊ����
//int is_leap_year(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//�ж� y �Ƿ�Ϊ����
//		//����  ����� ����1  ���� ����0
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}



//дһ������ ʵ�ֶ��ֲ���      TDD˼�� ����������Ĺ��� Ȼ��ȥʵ��
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//			break;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�ҵ� �����±�   �Ҳ��� ����-1
//	int ret = binary_search(arr, k, sz);
//
//	if (ret == -1)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��� %d \n",ret);
//	}
//	return 0;
//}


//���Ϊ���±� 5-9 ����
//int binary_search(int arr[], int k, int left,int right)
//{
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//			break;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�ҵ� �����±�   �Ҳ��� ����-1
//	int ret = binary_search(arr, k, 5, 9);//���±�5-9���в���
//
//	if (ret == -1)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��� %d \n", ret);
//	}
//	return 0;
//}


//дһ������  ����ÿ����һ�� num�ͼ�1
//void Add(int* p)
//{
//	*p += 1;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//������Ƕ�׵���  ���ǲ���Ƕ�׶���

//void test()
//{
//	printf("��������\n");
//}
//int main()
//{
//	test();
//	return 0;
//}

int main()
{
	printf("%d", printf("%d", printf("%d", 43)));// �ȴ�ӡ��43 ����ֵ��2 Ȼ��2 ����һ���ַ� �����ִ�ӡ1
	//���������� 4321
	//printf�����ķ���ֵ�Ǵ�ӡ����Ļ�ϵ��ַ��ĸ���
	//�����������(���Ƕ�ȡ����)�ͷ��ظ���

	//scanf �ķ���ֵ ���Ƕ������ַ��ĸ���
	return 0;
}