#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

int main()
{
	std::ifstream fin;

	fin.open("bar.csv", std::ios::in);

	std::ofstream fout;

	fout.open("newbar.csv", std::ios::out);

	std::string line, word;

	int i = 1;
	int j = 1;

	while(std::getline(fin, line))
	{

		fout << "line" << i << std::endl;

		std::stringstream s(line);

		while (std::getline(s, word, ','))
		{
			fout << "word" << j << word << std::endl;
			j++;
		}

		i++;
	}

}
