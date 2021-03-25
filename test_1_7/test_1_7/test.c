#include<stdio.h>
#include<string.h>
//int main()
/*{
	int ch = 0;
	while ((ch = getchar()) != EOF)//end of file  ctrl+z
	{
		putchar(ch);
			}
	return 0;
}*/
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);//输入密码123456，并存放在数组password中，
//	//后面还有一个\n放在了缓冲区
//	//读取一下'\n'
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认（Y/N）:>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}
//////{
//////	int i = 0;
//////	for ( i = 1; i <=10; i++)
//////	{
//////		printf("%d\n", i);
//////	}
//////	return 0;
//////}
//////////////////////////{
	//////////////////////int n, m = 1, pro = 1;//pro,即product,乘积

	//////////////////////printf("Input n:");

	//////////////////////scanf("%d", &n);

	//////////////////////for (; m <= n; ++m)

	//////////////////////	pro = pro * m;

	//////////////////////printf("%d!=%d\n", n, pro);
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//
//	printf("%d的阶乘：%d",n,ret);
//	return 0;
//}
	//////////int i = 0;
	//////////int n = 0;
	//////////int ret = 1;
	//////////int sum = 0;
	///////////*scanf_s("%d", &n);*/
	//////////for (n = 1; n<=3; n++)
	//////////{
	//////////	ret = 1;
	//////////	for (i = 1; i <= n; i++)
	//////////	{
	//////////		ret = ret * i;
	//////////	}
	//////////	sum = sum + ret;
	//////////}
	//////////printf("sum=%d\n", sum);
	//////////return 0;
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码都错误，退出程序\n");
//	}
//	return 0;
//}
	/*{
		int m = 8;
		int n = 19;
		int r = 0;
		while (m%n)
		{
			r = m % n;
			m = n;
			n = r;
		}
		printf("%d\n", n);
		return 0;
	}*/
	////{
	////	int n = 10;
	////	char* pc = (char*)&n;
	////	int* pi = &n;
	////	printf("%p\n", &n);
	////	printf("%p\n", pi);
	////	printf("%p\n", pc);
	////	printf("%p\n", pc+1);
	////	return 0;
	////}
//{
//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//printf("%p\n", arr);
//printf("%p\n", &arr[1]);
//printf("%d\n", sizeof(arr));
//printf("%d\n", sizeof(arr+0));//数组指针访问4个字节
//}
//////int is_prime(int n)//构建素数函数
//////{
//////	int j = 0;
//////	for (j = 2; j < n; j++)
//////	{
//////		if (n % j == 0)
//////			return 0;
//////	}
//////	return 1;//当j=n时
//////}
//////int main()
//////{
//////int i = 0;
//////for (i = 1; i <= 200; i++)
//////{
//////	if (is_prime(i) == 1)
//////		printf("%d ", i);
//////}
//////
//////return 0;
//////}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 123)));
//	return 0;
//}
////////void print(int n)
////////{
////////	if (n > 9)
////////	{
////////		print(n / 10);
////////	}
////////	printf("%d ", n % 10);
////////}
////////int main()
////////{
////////	int num = 1234;
////////	print(num);
////////	return 0;
////////}
////int main()
////{
////	char arr[] = "abcdef";
////	printf("%d\n", sizeof(arr));
////	printf("%d", strlen(arr));
////	return 0;
////}