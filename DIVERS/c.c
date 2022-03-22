#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	print(char *n)
{
	write(1, &n, 1);
}



int	main(int argc, char **argv)
{
	int	j;
	int	i;

	while (argc)
		j++;
	i = 0;
	while (argv[j])
	{
		print(argv[j][i]);
		i++;
	}	
	return (0);
}


