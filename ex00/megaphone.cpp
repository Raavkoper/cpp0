#include <iostream>

int main(int argc, char **argv)
{
	int i = 1;
	int j;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			std::cout << (char)toupper(argv[i][j]);
			j++;
		}
		if (argv[i + 1] == NULL)
			std::cout << std::endl;
		else
			std::cout << ' ';
		i++;
	}
}