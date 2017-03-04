#include <iostream>
#include <string>
#include <fstream>

// prototype function
std::string translate(std::string aWord);          // function translation
void print(std::string aWord, std::string answer); // function output screen

const std::string line = "____________________________________";
std::string answer, aWord, rWord;

int main()
{
	setlocale(LC_ALL, "Rus");

	std::cout << "Welcome to my cattranslat!" << std::endl;
	print(aWord, answer);

	system("Pause");
	return 0;
}

std::string translate(std::string aWord)
{
	std::ifstream inFile("C:\\Users\\cat.txt");

	while (inFile >> rWord)
	{
		if (rWord == aWord)
		{
			getline(inFile, rWord);

			std::cout << line << std::endl << std::endl;
			std::cout << "Translate:" << rWord << std::endl;
			std::cout << line << std::endl << std::endl;

			break;
		}
		getline(inFile, rWord);
	}
	return rWord;
}

void print(std::string aWord, std::string answer)
{
	do
	{
		std::cout << line << std::endl << std::endl;
		std::cout << "Type the word you want to translate: ";

		std::cin >> aWord;

		translate(aWord);

		std::cout << "Сontinue?  yes/no : ";
		std::cin >> answer;

	} while (answer == "yes");
}
