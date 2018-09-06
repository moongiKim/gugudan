#include <stdio.h>

int main()
{
	int i, dan=0;

	printf("Input Dan : ");
	scanf("%d", &dan);

	if(dan < 2 || dan > 9)
	{
		printf("Miniman dan is 2 and Maximan dan is 9\n");
		return -1;
	}

	for(i=1; i<9; i++)
	{
		printf("[%d]*[%d] = [%d]\n",dan, i, dan*i);
	}

	return 0;
}
