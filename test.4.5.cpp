#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int max(int a, int b, int c)
//{
//	int d = a;
//	if (a > b)
//		d = a;
//	else
//		d = b;
//	if (d > c)
//		d = d;
//	return d;
//}
//int main()
//	else
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("����������:>");
//	scanf("%d%d%d", &a, &b, &c);
//	int d = max(a, b, c);
//	printf("%d\n", d);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i%3==0)
//		printf("%d ", i);
//	}
//
//	return 0;
//
//��ٷ����Ƚ�a��b�����Ƚ�С������ֵ��c����С�ڻ����c��ÿ��ֵ������a��bȡģ���㣬����պ�����Ϊ0������ʾ����Ϊa ��b�����������������ǣ���cֵ��1��
//int QJF_Function(int a, int b)
//{
//	int c = b;
//	while (a%c != 0 || b%c != 0)
//		c--;
//	return c;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("�����������������Լ��:>");
//	scanf("%d%d", &a, &b);
//	int b=Function(a, b);
//	printf("%d\n", c);
//	return 0;
//}
////շת�����,��a��b����� �õ���������ֵ��c�����ж��Ƿ�Ϊ0�������Ϊ0����b��ֵ��a����c��ֵ��a�� Ȼ���ظ���������ֱ��cΪ0��
//int Function(int a, int b)
//{
//	int c = 0;
//	while (a%b)
//	{
//		a = b;
//		b = c;
//	}
//	return b;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)//����ֻ������1��������ȥ2��i���������Ƿ�Ϊ0��Ϊ0˵����������
//	{
//		for (j = 2; j <i; j++)//2-i-1֮�����
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i== j)
//		{
//			printf("%d ", i);
//		}		
//	}
//	return 0;
//}
/*#include <math.h>*/ 
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//
//	for (i = 101; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2->i-1
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		//...
//		if (j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//
//
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}