#include <stdio.h>

int main()
{
	int i, dan=0;

	printf("Input Dan : ");
	scanf("%d", &dan);

	if(dan < 2)
	{
		printf("Miniman dan is 2\n");
		return -1;
	}

	for(i=1; i<9; i++)
	{
		printf("[%d]*[%d] = [%d]\n",dan, i, dan*i);
	}

	return 0;
}
