#include<stdio.h>
int main()
{
	int term = 0, time, i, prenum = 1, postnum = 2;
	scanf_s("%d", &time);
	switch (time)
	{
	case(1):
		{
			printf("0");
			break;
		}
	case(2):
		{
			printf("1");
			break;
		}
	case(3):
		{
			printf("1");
			break;
		}
	case(4):
		{
			printf("2");
			break;
		}
	default:
		{
			for(i = 5; i <= time; i++)
			{
				term = prenum + postnum;
				prenum = postnum;
				postnum = term;
			}
			printf("%d", term);
			break;
		}
	}
	return 0;
}