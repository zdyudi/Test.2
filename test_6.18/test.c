
#include<stdio.h>

//int main()
//{
//	printf("%d\n", __STDC__);
//	return 0;
//}

//#define MAX 100
//#define STR "hhe"
//
//#define do_forever for(;;)

//int main()
//{
	//int max = MAX;
	//printf("%d\n", max);
	//printf("%s\n", STR);

	//do_forever;
	//return 0;
//}

//#define SQUARE(X) (X)*(X)

//int main()
//{
	//int ret = SQUARE(5);//5*5
	//printf("ret=%d\n", ret);

	//int ret = SQUARE(5 + 1);
	//printf("ret=%d\n", ret);//5+1*5+1
	//return 0;
//}

//#define DOUBLE(X) ((X)+(X))

//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);//10*5+5
//	printf("%d\n", ret);
//	return 0;
//}

//void print(int a)
//{
//	printf("the value of a is %d\n", a);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("the value of a is %d\n", a);
//	print(a);
//    print(b);
//	return 0;
//}

//#define PRINT(X) printf("the value of "#X" is %d\n",X)

//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}

//#define CAT(X,Y) X##Y

//int main()
//{
//	int Class84 = 2019;
//	//printf("%d\n", class84);
//	printf("%d\n", CAT(Class, 84));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a + 1;//1  a=10
//	int b = ++a;//2   a=11
//	return 0;
//}

//#define MAX(X,Y) ((X)>(Y)?(X):(Y))

//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//	printf("%d\n", max);//12
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//	return 0;
//}

//函数
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//float Max2(float x, float y)
//{
//	return (x > y ? x : y);
//}

//宏
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	float c = 3.0f;
//	float d = 4.0f;
//
//	float max = Max2(c, d);
//	printf("%f\n", max);
//	max = MAX(c, d);
//	printf("%f\n", max);
//
//	/*int max = Max(a, b);
//	printf("%d\n", max);
//	max = MAX(a, b);
//	printf("%d\n", max);*/
//	return 0;
//}

//#define TEST(x,y) printf("test\n")
//#define SIZEOF(type) sizeof(type)

//int main()
//{
//	int ret = SIZEOF(int);
//	printf("%d\n", ret);
//	return 0;
//}

//#define DEBUG
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elif 2==2
//	printf("hehe\n");
//#else 
//	printf("www\n");
//#endif
//	return 0;
//}

// DEBUG

//int main()
//{
//#if  defined(DEBUG)
//#ifdef DEBUG	
//	printf("hehe\n");
//#endif

//#if !defined DEBUG
//#ifndef DEBUG
//	printf("hah\n");
//#endif
//	return 0;
//}

//int main()
//{
//	int ret = Add(2, 3);//  <>   "" 
//	printf("hehe\n");
//	return 0;
//}

//斐波那契数列
//1 1 2 3 5 8 13 21 34 55 ...

//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)//测试第3个斐波那契数的计算次数
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD--测试驱动开发
//	ret = Fib(n);
//	printf("%d\n", ret);
//	//printf("count =%d\n", count);
//	return 0;
//}

//#include<stddef.h>
//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)

//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//int main()
//{
	//struct S s;
//	printf("%d\n", OFFSETOF(struct S, c1));//0
//	printf("%d\n", OFFSETOF(struct S, a));//4
//	printf("%d\n", OFFSETOF(struct S, c2));//8
//	return 0;
//}

//union Un
//{
//	short s[7];
//	int n;
//};
//
//int main()
//{
//	printf("%zd\n", sizeof(union Un));
//	return 0;
//}

//int main()
//{
//	union
//	{
//		short k;
//		char i[2];
//	}*s,a;
//	s = &a;
//	s->i[0] = 0x39;
//	s->i[1] = 0x38;
//	printf("%x\n", a.k);
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,1,2,3,4,6 };
	int a = 0;
	int b = 0;
	int sum = 0;

	return 0;
}