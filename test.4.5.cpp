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
//	printf("输入三个数:>");
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
//穷举法，比较a和b，将比较小的数赋值给c，将小于或等于c的每个值依次与a和b取模运算，如果刚好余数为0，即表示次数为a 和b的最大公因数，如果不是，则c值减1，
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
//	printf("输入两个数，求最大公约数:>");
//	scanf("%d%d", &a, &b);
//	int b=Function(a, b);
//	printf("%d\n", c);
//	return 0;
//}
////辗转相除法,将a和b相除， 得到的余数赋值给c，并判断是否为0，如果不为0，则将b赋值给a，将c赋值给a， 然后重复上述步骤直到c为0。
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
//	for (i = 100; i <= 200; i++)//素数只能整除1和它本身，去2至i的数整除是否为0；为0说明不是素数
//	{
//		for (j = 2; j <i; j++)//2-i-1之间的数
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
//		//判断i是否为素数
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