#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<math.h>


//�����������в�ͬ�Ķ�����λ
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n1 >> i) & 1) != ((n2 >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//��������д
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = a ^ b;//���Ľ�� ����ͬΪ 1 
//	int d = 1;
//	int count = 0;
//	int e = 32;
//	while (e)
//	{
//		if (c & d == 1)
//		{
//			count++;
//		}
//		c >>= 1;
//		e--;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//���һ�����Ķ����Ƶ�����λ��ż��λ
//�����ƶ�����λ ��λ��1 �����õ��������ż��λ ���λ��ż��λ���ƶ�31 λ  
//����λ�����λ���ƶ�30 λ
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}


//�ж�һ������Ԫ�����Ǹ���  ��������
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		//��������ж� �����Ƕ�ȡ�ַ�
//		//�������û�������
//		if (ch == '\n' || ch == ' ')
//		{
//			continue;
//		}
//		if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I'
//			|| ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
//		{
//			printf("Vowel\n");
//		}
//		else
//		{
//			printf("Consonant\n");
//		}
//		getchar();//�����������
//	}
//	return 0;
//}

//�������������ж�
//int main()
//{
//	int ch = 0;
//	char vowel[] = "aeiouAEIOU";
//	while ((ch = getchar()) != EOF)
//	{
//		//��ȡ����ĸ���Ƚ�д�õ�ԭ����������
//		int i = 0;
//		int flag = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == vowel[i])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("Vowel\n");
//		}
//		else
//		{
//			printf("Consonant\n");
//		}
//		getchar();
//	}
//	return 0;
//}


//ͨ����ά�������ж����������Ƿ����
//int main()
//{
//	int arr1[10][10] = { 0 };
//	int arr2[10][10] = { 0 };
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	int flag = 1;//Ĭ�Ͼ�����ͬ
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			if (arr1[i][j] != arr2[i][j])//Ҳ����������ڶ�����ʱ�� ֱ���ж�
//			{
//				flag = 0;
//				break;
//			}
//		}
//	}
//	if (flag = 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}


//��һn��m�еľ��󻻳�m��n�����
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);//��Ϊ��n��m�� ��������д
//		}
//	}
//	return 0;
//}


//�������Ľ����
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;//�� arr����ĵ�ַ���� p 
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;//ÿ������2���ֽ� ��Ϊp��short����
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);//00345
//    }
//    return 0;
//}


//�����������Ľ����
//int main()
//{
//    int a = 0x11223344;//���ڴ浱���ǵ��Ŵ�ŵ�   �͵�ַ 44 33 22 11 �ߵ�ַ
//    char* pc = (char*)&a;//ָ�� 44 
//    *pc = 0;//�� 44 �ĳ���0
//    printf("%x\n", a);//���Ծ��� 11223300
//    //%d ��10���� 
//    //%o �ǰ˽���
//    //%x ��ʮ������
//    return 0;
//}


//����������������
//int i;
//int main()
//{
//    i--;//-1
//    if (i > sizeof(i))//sizeof���ص����޷�������
//        //�Ƚϵ�ʱ�� �ᷢ������ת��  -1�����޷��������Ļ� ��û����λ�� ���Ծͺܴ�
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}


//дһ��������ӡ���������
//void print(const int* p, int sz)
//{
//	assert(p);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}


//��Sn=a+aa+aaa+aaaa+aaaaa��ǰn��֮�ͣ�����a��һ������
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int k = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//���0��100000֮������С�ˮ�ɻ�����
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//�ж��Ƿ���ˮ�ɻ���
		//�ȼ��� i ��λ��    �ڼ���ÿһλ��n�η�֮��     ����ж�
		//���ж���λ ��10�ͺ���
		int tmp = i;
		int sum = 0;
		int cnt = 1;//һ����Ĭ����1λ
		while (tmp /= 10)
		{
			cnt++;
		}
		//����ÿһλ��n�η�֮��  Ҫ����ÿһλ
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, cnt);
			tmp /= 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	} 
	return 0;
}


