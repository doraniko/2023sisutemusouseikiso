#include <stdio.h>

int main(void)
{
	int max = 10000;

	for (int i = 1; i <= max; i++)
	{
		if (i % 221 == 0)
		{
			printf("%12d\n", i);
		}
		else if (i % 17 == 0)
		{
			printf("%8d\n", i);
		}
		else if (i % 13 == 0)
                {
	                printf("%d\n", i);
                }
    }

	return 0;
}
