#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>;

//��� �ַֺŸ�������һ�����  ֻҪ��һ���ֺž���һ�����
//��֧��� 

//if���
//int main()
//{
//	int age = 28;
//	//if (age >= 18)//�ж�Ϊ�� �ʹ�ӡ
//	//{
//	//	printf("����\n");
//	//}//�����Լ�else if �ٴ��ж�  �Ӷ�ʵ�ֶ��֧
//	//else//��ָ������� 
//	//{
//	//	printf("δ����\n");
//	//}
//	if (age < 18)
//	{
//		printf("δ����\n");
//	}
//	else if(age>=18 && age<30)//���ﲻ��д��ѧ���ʽ
//	{
//		printf("����\n");
//	}
//	else if (age >= 30 && age < 55)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("����");
//	}
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	if (age >= 18)//һ�������ž���һ�������
//	{
//		printf("����\n");
//		printf("����̸����\n");
//	}
//	else
//	{
//		printf("δ����\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)//ʲôҲ����ӡ  ��Ϊ�����if��else��ƥ���  else���������Ŀ���ƥ���ifƥ��
//		//���� ������if else �������if�����ִ�г���  ���� Ҫ�Ƚ������if  �������if���ж�����Ϊ��
//		//���Ծͽ��������if  ���Ծ�ʲôҲ����ӡ
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}

//��д�����ʱ�� Ҫ���ϴ�����  �γɺõĴ�����  ����ά��  Ҫ��л�ո�
//int test()
//{
//	int a = 10;
//	if (a)
//	{
//		return 1;//return�������Ľ���
//	}
//	return 2;
//
//}
//int main()//�Ƽ�һ���顶������C/C++���    Ҫ���»��� ���߰�ÿ�����ʵ�һ����д 
//{
//	int ret = test();
//	printf("%d\n", ret);//���������������  ��֪�����ص���1����2 ��ʵ�����if�������else��
//	//��Ϊ���벻�淶 ���ԾͿ��ܲ�������  һ��Ҫע�������
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	if (a == 5)//����д���װѵ���д�ɸ�ֵ �����ͳ�bug��  ����Ӧ��д�� 5 == a �����Ͳ������bug��
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//�ж�һ�����ǲ�������
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}

//���1-100֮�������
//int main()
//{
//	int i = 1;
//	while (i<=100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//	i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i+=2;//��Ϊi�տ�ʼ����1  ����iÿ�μ�2 ��������
//	}
//
//	return 0;
//}


//switch���   Ҳ��һ�ַ�֧��� �������ڶ��֧
//���� ����1  �������1   ����2  �������2   ����3  ���ѧ��3
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	//if (1 == day)
//	//{
//	//	printf("����һ\n");
//	//}
//	//else if (2 == day)
//	//{
//	//	printf("���ڶ�\n");
//	//}
//	//else if (3 == day)
//	//{
//	//	printf("������\n");
//	//}
//
//	//����������д��������switch������
//
//	switch (day)//day �����˷�֧�����   case�Ƿ�֧�����  day���������ͱ��ʽ
//	{
//	case 1://������������
//		printf("����һ\n");
//		break;//һ��Ҫ��break ��Ȼ�����ִ���������е�case ���  break��������ǰ�ķ�֧
//	case 2://case������������ͳ������ʽ
//		printf("���ڶ�\n");
//		break;//ֻҪ�ߵ�break ��������ǰѭ����
//	case 3:
//		printf("������\n");
//		break;//��break ʹ�ô�����Ϻ�    
//	}
//	return 0;
//}


// ����1 -5 ��ʾweekday   6-7 ���weekend   ����Ϳ�������д ������ÿ��break���涼��break;
//��Ҫ������֧ �ͼ���break  ����Ҫ���� �Ͳ���break
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default://���ʽ��ֵ ��caseֵ����ƥ��Ļ� ��ʹ��default  case��ƥ��ſ���default
//		//��Щ���Բ��ð�˳��д  �����Դ���˳��д  ���Ǿ�����Ҫ��д
//		printf("�������  ������1-7\n");
//		break;
//	}
//	return 0;
//}

//һ��Ҫע��  case��break ��������    switchû��if����õ���ô��
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:
//        m++;
//    case 2:
//        n++;
//    case 3:
//        switch (n)
//        {//switch����Ƕ��ʹ��
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break;
//        }
//        //��Ϊcase 3 ֮��û��break s���м�������ִ�� case 4
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);//�� 5 3
//    return 0;
//}


//ѭ�����
//while     for     do while

//whileѭ��
//int main()
//{
//	int a = 10;
//	while (a)
//	{
//		printf("hehe\n");//a���ı� ����һֱΪ��  ������ѭ����
//	}
//	return 0;
//}

//��ӡ1-10��
//int main()
//{
//	int i = 1;
//	while (i<=10)//�����i<= 10 ���ж�����   i��ѭ������
//	{//�����Ų����� ������˵Ļ� whileҲֻ�ܿ���һ����� ����������ѭ����
//		//if (5 == i)
//		//{
//		//	break;//��ֹ����ѭ��  ����Ƕ��Ƕ�׵Ļ�  �����������ѭ��
//		//}
//		if (5 == i)
//		{
//			continue;//continue����������ѭ��continue����Ĵ��룬ֱ��ȥwhileѭ�����жϲ��� ������ֹ����ѭ��
//			//��continue�Ļ� ��ֻ��ӡ1 2 3 4  Ȼ�����ѭ����  ��Ϊ i ������ i û��++ ����һֱ��ѭ��
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//forѭ��  ��whileѭ����������  ��Ϊ���whileѭ������� i ���ı���  ��ôwhileѭ���Ĵ����ͱ���
//���Ծ��õ�forѭ�� ����ʼ�� �ж� ���� ����һ��   forѭ���õ����

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)//ʹ�� break Ҳ������forѭ��  �÷���whileѭ��һ��
//	{
//		if (5 == i)
//		{
//			continue;//�����Ļ� ����ӡ5  ��Ϊcontinue֮�� �������������� for�ĵ�����������ִ��
//			//�Ͳ��������ѭ��
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

//forѭ����ѭ������
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)//������forѭ���ڸı�forѭ������ ��Ȼ�ᵼ����ѭ��
//	{
//		printf("%d ", i);//ѭ�������ĵ������������i++   
//		//i = 5;//������ �ͻᵼ����ѭ��  ��Ϊÿ�ζ��� i ��� 5 �� 
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };//�ѵ�һ��Ԫ�س�ʼ��Ϊ0 ���������ʣ�µ�Ԫ�س�ʼ��Ϊ 0
//	int i = 0;
//	for (i = 0; i < 10; i++)//����д��ǰ�պ󿪵�д��  ��Ϊ�����Ļ� д10�Ļ� ����ѭ��10��
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//forѭ���ı���
//int main()
//{
//	//int a = 0;
//	//for (;;)//forѭ���ĳ�ʼ�� �ж� �������������ǿ���ʡ�Ե�  ���ǻᵼ����ѭ��
//	//	//�жϲ������ʡ�� ��ζ���ж�������Ϊ��  ����ѭ����
//	//	//���鲻Ҫ����ʡ��
//	//{
//	//	printf("haha\n");
//	//}
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("haha\n");//������ӡ�ľ���100�� ����ѳ�ʼ������ʡ�ԵĻ�   j ��ֵ�Ͳ������� j�ͱ��10�� 
//			//����i���´�ѭ��������ʱ�� j�ͻ���10 �Ͳ���ִ����
//		}
//	}
//
//	return 0;
//}


//һ��������
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//����ѭ��0�� ��Ϊ�ж������� ��0����k �ж�Ϊ�� ���Բ�ѭ��
//	{
//		k++;
//	}
//	return 0;
//}


//do whileѭ��  �õ�����  do ѭ����� while(���ʽ)  ������ִ��һ�� Ȼ�����ж�ѭ��
//do whileѭ�� ���ٱ�ִ��һ�� 
//int main()
//{
//	//��ӡ1-10
//	int i = 1;
//	do 
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}



//����n�Ľ׳�
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//����1��+2��+    +n!  
//int main()
//{
//	int n = 10;
//	//scanf("%d", &n);
//	int i = 1;
//	int sum = 1;
//	int ret = 0;
//	for (n = 1; n <= 4; n++)
//	{
//		sum = 1;//ÿ�ζ�Ӧ�ð�sum����Ϊ1 ��Ȼsum�ͻᱣ��ԭ����ֵ �ͻ��������
//		for (i = 1; i <= n; i++)
//		{
//			sum *= i;//��Ϊÿ�ζ���n�Ľ׳�������� ����ֻҪ�Ӹ��������������		
//		}
//		ret += sum;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//Ҳ������д
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int sum = 1;
//	int ret = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//		ret += sum;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//��ĳ�����������в���ĳ������  ��7
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//��ָ�������С ���ǳ�ʼ����  �������������С��10
//	//����7   �±���0-9  ����0-sz-1
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int flag = 0;//û���ҵ�
//	for (i = 0; i < sz; i++)
//	{
//		if (7 == arr[i])
//		{
//			flag = 1;
//			break;
//		}
//	}//������Ϊһ���������� ���������Ǻ��˷�ʱ���  
//	if (flag == 1)
//	{
//		printf("�ҵ��� �±��� %d", i);
//	}
//	else
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}  


//��������Ϳ��԰�������  һ��һ�����  ���Ƕ��ֲ���  ǰ������������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	int k = 7;//Ҫ���ҵ�Ԫ��
//	int flag = 0;//Ĭ���Ҳ���
//
//	
//	while (left <= right)//��ʹ�� left + right Ҳ��һ��Ԫ��Ҫ����
//	{
//		//���м�Ԫ���±�
//		mid = (left + right) / 2;//ÿһ�ζ��ֲ��� ��Ҫ����м�Ԫ�ص��±� 
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else//���elseû��ƥ��Ļ� ��˵��������������  �����Ǽ��˷ֺ�
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag = 1)
//	{
//		printf("�ҵ��� �±��� %d\n", mid);
//	}
//	else
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}


//�ô�����ʾ����ַ��������ƶ����м���
//����Ļ�����ӡ welcome to vs 2019  �տ�ʼȫ��# Ȼ�������Ĵ�ӡ���ַ�
//int main()
//{
//	char arr1[] = "welcome to bit !!!";
//	char arr2[] = "                  ";
//	int sz = strlen(arr1);
//
//	int left = 0;
//	int right = sz - 1;
//	printf("%s\n", arr2);
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		Sleep(1000);//Sleep���� ��λ�Ǻ��� ���Ծ���ͣ1��
//		//system("cls");//������Ļ
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	return 0;
//}


//��д���� ģ���û���¼ ����������������ȷ ����ʾ��¼�ɹ� ���������� ��������½ʧ��
int main()
{
	int i = 0;
	//�����������ַ���"123456"
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:> ");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//�Ƚ�2���ַ��� ��strcmp ������Ⱦͷ���0
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("����������\n");
		}
	}
	if (i == 3)
	{
		printf("����������󣬵�¼ʧ��\n");
	}
	return 0;
}