#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//���г���ε�������Ϊ
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;//pulPtrָ������ĵ�һ��Ԫ�� 
//	*(pulPtr + 3) += 3;//�������õ�����9 Ȼ��+=3 �õ�����12
//	printf("% d  % d\n", *pulPtr, *(pulPtr + 3));//��� 6 12
//	return 0;
//}


//���г������������
//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//void fun(struct stu* p)
//{
//    printf(" % s\n", (*p).name);//wang �ǵڶ�����name
//    return;
//}
//int main()
//{
//    struct stu students[3] = { {9801,"zhang",20},{9802,"wang",19},{9803,"zhao",18}};
//    fun(students + 1);//��Ϊָ��+1 ָ��дһ���ṹ������ ���Դ����ǵڶ����ṹ��
//    return 0;
//}


//����ָ��Ҳ��ָ�� ��СҲ��4��8���ֽ�
//����ָ����������һ��ָ��ĵ�ַ
//ָ�� - ָ�� �õ�����ָ���ָ��֮����ֽڸ���


//int main()
//{
//	int* arr1[10];//��һ��ָ������ ��Ϊ��һ������ ��ŵ���int* ָ��
//	int(*arr4)[10];//��һ������ָ��  *arr˵��arr��һ��ָ�� ʣ�µľ���������
//	//��Ϊ��һ��ָ�������ָ��
//	return 0;
//}


//gets �Ƕ�ȡһ���ַ���  �����ַ��� ���˺���Ҳ������strlen�󳤶�


//��ӡ����ͼ��  ÿ�ε�* ����һ�ж�2 ����2
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)//n ��
//	{
//		int j = 0;
//		for (j = 0; j < n - i - 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)// *2 ÿ�ζ��ӡһ��
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (n - i - 1) - 1; j++)//ÿ���ٴ�ӡ���� ������ -1
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//n����ƿ
//	int count = n;
//	int bottle = 0;//����Ŀ�ƿ
//	while (n > 1)
//	{
//		bottle = n % 2;
//		n /= 2;
//		count += n;
//		n += bottle;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//Ҳ������д
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	if (money >= 1)
//	{
//		total = 2 * money - 1;
//	}
//	else
//	{
//		total = 0;
//	}
//	printf("%d\n", total);
//	return 0;
//}


//��������ʹ����ȫ����λ��ż��ǰ��
//�����ȱ���һ�� ������ ż�� ���ŵ�һ���µ�����  Ȼ���ٰ��µ����鿽��ȥ
//�õķ��� ��ǰ�������һ�� ����������Ļ� �ͺͺ����ż������һ��

void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<right)
	{
		while ((left < right) && arr[left] % 2 == 1)//��ǰ�����ҵ���ż��
		{
			left++;
		}
		while ((right > left) && arr[right] % 2 == 0)//�Ӻ���ǰ�ҵ�������
		{
			right--;
		}
		//����
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	//ȫΪ����  ȫΪż��  ��ż����
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}