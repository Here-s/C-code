#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>




//double Pow(int n, int k)//д1.0������С��  ������double
//{//˼·  n��k�η� ����n*n^(k-1)  n����n��k-1�η�
//	if (k <0)//����Ǹ����� 
//	{
//		return (1.0 / (Pow(n, -k)));//д1.0������С��
//	}
//	else if(k==0)
//	{
//		return 1;
//	}
//	else
//		return n * Pow(n, k - 1);
//}
//int main()//��дһ��������ʵ��n��k�η���ʹ�õݹ�ʵ��
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret=Pow(n,k);//Pow����ʾn��k�η� ������double��������double����
//	printf("ret=%lf\n",ret);
//	return 0;
//}

//int DigitSum(unsigned int num)//����1729  Ҫ������ ��Ҫ��ÿһλ�������� ���һλģʮ���ܵõ� ���Կ��������172�ĺ� �ټ�9
////���������� DigitSum(172) +1729%10   �Դ�����  ��ֻʣ1��ʱ��Ͳ��ò���
//{
//	if (num > 9)//ʮ�������� 
//	{
//		return DigitSum(num / 10) + num % 10; //��10���������İ����һλ������  ģ10����  ��ÿһλ�������� ���һλģʮ���ܵõ�
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()//дһ���ݹ麯��DigitSum(n),����һ���Ǹ����������������������ÿλ�ĺ� ����132  ���غ���6
//{
//	unsigned int num = 0;//unsigned ʹ����ɷǸ�����
//	scanf("%d", &num);
//	int ret=DigitSum(num);
//	printf("ret=%d\n",ret);
//	return 0;
//}

//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str !='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0]=arr[len - 1];//��f�ŵ�a��λ��
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)//�������˼�� ��������Ԫ�زŽ��� ��Ϊ��������Ԫ�ز��ܽ��� 
//	{
//		reverse_string(arr + 1);//�ѵڶ���Ԫ�ش���ȥ
//	}
//	arr[len - 1] = tmp;
//}
//int main()//��дһ������ reverse_string(char*string) (�ݹ�ʵ��) �������ַ������ַ��������У�����  ����ʹ��c�⺯���е��ַ�����������
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//ֻҪִ���� ��ô�ַ������ݾ���fedcba  
//	
//  //���� abcdef ��Ϊ���� 1 ����af 2 ����bcde
//  //Ū������ reverse_string("abcdef")  1 ����af  2 ����reverse_string("bcde") ���ڶ���������������ȥ���� һֱ���е�cd
//	//���岽��Ϊ�Ȱ�aŲ���� �ٰ�fŲ��a��λ�� ��fŲ�ߵĿ�λ�÷�һ��\0  ������bcde����һ�� Ȼ���ٰ�a�ŵ�\0
//	printf("%s\n", arr);//%s��ӡ�ַ���
//	return 0;
//}

//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str !='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr)-1;//strlen ���ַ�������  ����ʹ�ÿ⺯�� ������ my_strlen
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()//��дһ������ reverse_string(char*string) (�ݹ�ʵ��) �������ַ������ַ��������У�����  ����ʹ��c�⺯���е��ַ�����������
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//ֻҪִ���� ��ô�ַ������ݾ���fedcba  ֻҪ�Ѷ�Ӧ��һ��һ�齻��һ�¾�����
//	//ȡ��ַ����
//  //���� abcdef ��Ϊ���� 1 ����af 2 ����bcde
//  //Ū������ reverse_string("abcdef")  1 ����af  2 ����reverse_string("bcde") ���ڶ���������������ȥ���� һֱ���е�cd
//	printf("%s\n", arr);//%s��ӡ�ַ���
//	return 0;
//}