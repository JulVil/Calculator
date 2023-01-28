#include <iostream>
#include "Arithmetic.h"

int menu()
{
	int option;

	std::cout << "-----------------\n";
	std::cout << "Simple calculator\n";
	std::cout << "-----------------\n";

	std::cout << "1. Add " << std::endl;
	std::cout << "2. Substract " << std::endl;
	std::cout << "3. Multiply " << std::endl;
	std::cout << "4. Divide " << std::endl;
	std::cout << "5. Square root " << std::endl;
	std::cout << "6. Exponent " << std::endl;
	std::cout << "7. Exit " << std::endl;

	std::cout << "Chose an option: ";
	std::cin >> option;

	return option;
}

int main()
{
	int option;
	double num1=0, num2=0, result=0, neg=0;

	menu:
	option = menu();

	switch (option)
	{
	case 1:
		system("cls");
		add(num1, num2, result);
		break;
	case 2:
		system("cls");
		substract(num1, num2, result);
		break;
	case 3:
		system("cls");
		multiply(num1, num2, result);
		break;
	case 4:
		system("cls");
		divide(num1, num2, result);
		break;
	case 5:
		system("cls");
		squareroot(num1, result);
		break;
	case 6:
		system("cls");
		power(num1, num2, result, neg);
		break;
	case 7:
		system("cls");
		exit(7);
	default:
		std::cout << "Wrong option! Chose from 1 to 7." << std::endl;
		system("pause");
	}

	system("cls");
	goto menu;
}