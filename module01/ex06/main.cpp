
#include "Harl.hpp"

int	Harl_translate(char *argv)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (levels[i] == argv)
			return (i);
	return (-1);
}

void	Harl_switch(char *argv, Harl & k)
{
	switch (Harl_translate(argv))
	{
		case 0:
			k.complain("DEBUG");
			// fall through
		case 1:
			k.complain("INFO");
			// fall through
		case 2:
			k.complain("WARNING");
			// fall through
		case 3:
			k.complain("ERROR");
			break ;
		default:
			std::cout << "I don't know what she complaning about nor do I care" << std::endl;
	}
}

int	main(int argc, char **argv)
{
	Harl k;

	if (argc != 2)
		std::cout << "I don't know what she complaning about nor do I care" << std::endl;
	else
		Harl_switch(argv[1], k);
	return (0);
}