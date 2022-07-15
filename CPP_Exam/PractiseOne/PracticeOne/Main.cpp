#include <iostream>
#include <string>

int harmonicCount;
double result;

const std::string Greetings = "Enter the harmonic number pls";

int main()
{
	std::cout << Greetings << "\n";
	std::cin >> harmonicCount;

	for (int i = 1; i < harmonicCount; i++)
		result += pow(i, -1);
}