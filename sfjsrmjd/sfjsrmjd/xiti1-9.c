#include<stdio.h>
#include<string.h>
//int main()
//{
//	if()
//	{
//	
//	}
//	else if()
//	{
//		printf("no");
//	}
//	else
//	{
//		printf("not a triangle.");
//	}
//	return 0;
//}
//

int main()
{
	int i;
	char a[11] ="1234567890";
	strncpy(a, a, 3);
	for (i = 0; i < 11; i++)
	{
		printf("%c", a[i]);
	}

}