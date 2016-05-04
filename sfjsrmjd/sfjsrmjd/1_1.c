//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double r, h;
//	scanf("%lf%lf", &r, &h);
//	printf("Area = %lf\n", 3.14159 * r * r * 2 + 2 * 3.14159 * r * h );
//	return 0;
//}


#include<stdio.h>
#include<math.h>
int main(void)
{
	int a;
	scanf("%d", &a);
	printf("%d%d%d", a % 10, a / 10 % 10, a / 100);
	return 0;
}