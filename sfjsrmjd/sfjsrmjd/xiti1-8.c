#include<stdio.h>
#include<math.h>
int main(int argv, char * argc[])
{
	double a;
	scanf("%lf", &a);
	printf("%.2lf", fabs(a));
	return 0;
}