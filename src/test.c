
int test_de_vic(int cursor, int size)
{
	int tmp;
	int	i;

	i = 1;
	while (cursor > i * size)
		i++;
	tmp = i * size;
	return(tmp);
}

#include <stdio.h>

int main(int argc, const char *argv[])
{
	printf("%d\n" ,test_de_vic(9, 8));
	return 0;
}
