#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


// getchar() �Ӽ��̶�ȡ�ַ� ����Ҫ���� ���������� int   ֻ�ܶ�ȡ�ַ�
//getchar() ���ص����ַ� ��ʵ���ص����ַ���ASCII��ֵ
// getchar()�ڶ�ȡ������ʧ�ܵ�ʱ�򣬻᷵�� EOF   EOF-end of file �� -1
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//�� getchar()��ȡ���ַ����� ch 
//		//��ȡ��ʱ��  CTRL+Z �Ͷ�ȡ������
//	{
//		putchar(ch);
//	}
//	return 0;
//}



//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", password);
//	printf("��ȷ������(Y/N): ");
//	getchar();//���¾Ͱѻ�����ʣ�µĶ��������� 
//	int tmp = 0;//��getchar ��õ��ַ�����tmp����
//	while ((tmp = getchar()) != '\n')	//������������ʱ������ abcd ef  ����ȷ��ʧ�� ���Ǵӻ�������ȡ 
//		//scanf��ȡ���ո�Ͳ����������һ�� getchar ֻ������һ���ַ� 
//	{
//		;//�������һֱ��ȡ�� \n 
//	}
//	int ch = getchar();//scanf getchar �����ĺ��� �ǴӼ��������ȡ����  �����ͼ���֮�仹��һ�λ�����
//	//������������� zbcdef\n ��Ϊ�лس�  scanf��ȡ���ǻس�ǰ�Ķ��� ���ԾͰ� abcdef ������password
//	//��������ʣ  \n   getchar �������������� \n  �Ͱ� \n ������ ��Ϊ�س�Ҳ��һ���ַ� 
//	//ֻ�л�����Ϊ�յ�ʱ�� getchar �Ż�ȴ���������  ���� getchar ��ȡ֮ǰ�ѻ�������վͺ���
//
//	
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}


//int main()
//{
//	char arr[20] = "XXXXXXX";
//	scanf("%s", arr);//ÿ�ζ���֮�� ���һ�� \0 
//	//gets ��ֱ�Ӷ�ȡһ��   scanf printf ��Щ���� û��Ҫ�����о�
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while (ch = getchar() != EOF)
//	{
//		if (ch < '0' || ch>'9')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}


//int test()
//{
//	int a = 10;
//	int b = 20;
//	return a, b;
//}
//int main()
//{
//	int ret = test();
//	printf("%d\n", ret);//20  ��Ϊreturn ֻ�ܴ�����һ��ֵ  �������һ�����ű��ʽ
//	return 0;
//}


// �β������鷵�������� �Ѻ����������Ķ������ݷ��ظ��������� 
//void test(int arr[])
//{
//	int a = 10;
//	int b = 20;
//	arr[0] = a;
//	arr[1] = b;
//}
//int main()
//{
//	int arr[2] = { 0 };
//	test(arr);
//	printf("%d %d\n", arr[0],arr[1]);//20  ��Ϊreturn ֻ�ܴ�����һ��ֵ  �������һ�����ű��ʽ
//	return 0;
//}


// �β�������ָ�� �Ѻ����������Ķ������ݷ��ظ���������
//void test(int* px,int* py)
//{
//	int a = 10;
//	int b = 20;
//	*px = a;
//	*py = b;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//
//	test(&x,&y);
//	printf("%d %d\n", x,y);//20  ��Ϊreturn ֻ�ܴ�����һ��ֵ  �������һ�����ű��ʽ
//	return 0;
//}



//������ȫ�ֱ������������� �Ѻ����������Ķ������ݷ��ظ���������
//int x = 0;
//int y = 0;
//void test()
//{
//	int a = 10;
//	int b = 20;
//	x = a;
//	y = b;
//}
//int main()
//{
//	test();
//	printf("%d %d\n", x, y);//20  ��Ϊreturn ֻ�ܴ�����һ��ֵ  �������һ�����ű��ʽ
//	return 0;
//}


//���ھ۵���� ����ÿ�����������Լ������� �����������˹������� ����������ƺ�����ʱ��ʹ��ȫ�ֱ���
//�����Ĳ������˹���  �������ε�ʱ�� ���Դ����� ���� ���ʽ


//��ӡ�˷��ھ���

//void print(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}



//�ݹ�ʵ���ַ�����������
//void reverse_string(char* arr)//�ǵݹ�ʵ��  ��ǰ��ͺ�����ַ���������
//{
//	int len = strlen(arr);//�ַ�������
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];// a
//		arr[right] = tmp;// f
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[20] = "abcdef";
//	//����������Ԫ�صĵ�ַ  ��Ԫ�ؾ��� char ����   char*
//	reverse_string(arr);
//	printf("%s\n", arr);//��������ǣ�fedcba
//	return 0;
//}

//�ݹ�ʵ��
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	//reverse ("abcdef")    ���� a f + reverse("bcde")   Ȼ��һ��һ��ȥ����
//	int len = my_strlen(arr);
//	char tmp = arr[0];
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr+1) >= 2)//����м���ַ����� 0 ����1 �Ͳ���Ҫ������ ֻ�д��ڵ���2 �ż�������
//		//��ΪbcdeҪ��Ҫ���� ���ǿ��м�bcde�ĳ��� ����Ҫ arr+1 arr+1��ָ��b ���Ծ��Ǵ�b��ʼ��
//	{
//		reverse_string(arr + 1);//�����b��ʼ���ַ��� arr + 1 ���ǵڶ����ַ���
//	}
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[20] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);//��������ǣ�fedcba
//	return 0;
//}



//����һ������ÿλ֮�� �Ǹ����� 
//int DigitSum(unsigned int num)
//{
//	//DigitSum(1234)    DigitSum(123)+4    DigitSum(12)+3+4   DigitSum(1)+2+3+4
//	//Ҳ���Ǵ���9 �����²�
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	unsigned int num = 1729;
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//}


//��n��k�η� �ݹ�ʵ��
double Pow(int n, int k)
{
	if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else if (k == 0)
	{
		return 1.0;
	}
	else
	{
		return 1.0 / Pow(n, -k);
	}
}
int main()
{
	int n = 2;
	int k = -3;
	double ret =  Pow(n, k);//�⺯����һ����n�η����� �� pow ��������Ӧ��д�Ĳ�һ��
	//�� k ����0��ʱ�� ��η�   k����0��ʱ�� ��1   kС��0��ʱ�� ����1.0��
	printf("%lf\n", ret);
	return 0;
}

//ʲô�Ǳ��˼ά
//��ʵ��ת��Ϊ�����˼ά - �������Ĳ��� - ����C�����﷨ȥʵ��
//��������ǰ�10����ת��Ϊ������