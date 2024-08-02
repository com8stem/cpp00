#include <cctype>
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string str = argv[i];
			for (size_t j = 0; j < str.size(); j++)
			{
				std::cout << (char)std::toupper(str[j]);
			}
			if (i < argc - 1)
			{
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
