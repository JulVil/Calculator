#include <iostream>
#include <iomanip>
#include <math.h>
#include "Arithmetic.h"

int add(double num1, double num2, double sum)
{
	
	std::cout << "Two number addition\n";
	std::cout << "Input number 1: ";
	std::cin >> num1;
	std::cout << "Input number 2: ";
	std::cin >> num2;

	sum = num1 + num2;

	std::cout << "The result is: " << sum << std::endl;
	system("pause");
	return sum;
}

int substract(double num1, double num2, double minus)
{
	std::cout << "Two number substraction\n";
	std::cout << "Input number 1: ";
	std::cin >> num1;
	std::cout << "Input number 2: ";
	std::cin >> num2;

	minus = num1 - num2;

	std::cout << "The result is: " << minus << std::endl;
	system("pause");
	return minus;
}

int multiply(double num1, double num2, double mult)
{
	std::cout << "Two number multiplication\n";
	std::cout << "Input number 1: ";
	std::cin >> num1;
	std::cout << "Input number 2: ";
	std::cin >> num2;

	mult = num1 * num2;

	std::cout << "The result is: " << mult << std::endl;
	system("pause");
	return mult;
}

int divide(double num1, double num2, double divi)
{
	std::cout << "Two number division\n";
	std::cout << "Input number 1: ";
	std::cin >> num1;
	std::cout << "Input number 2: ";
	std::cin >> num2;

	divi = num1 / num2;

	std::cout << "The result is: " << divi << std::endl;
	system("pause");
	return divi;
}

int squareroot(double num1, double square)
{
	std::cout << "Square root of a number\n";
	std::cout << "Input number: ";
	std::cin >> num1;

	square = sqrt(num1);

	std::cout << "The square root of " << std::setprecision(3) << num1 << " is: " << square << std::endl;
	system("pause");
	return square;
}

int power(double base, double exponent, double product, double negative)
{
	std::cout << "Base number to the exponent number\n";
	std::cout << "Input base number: ";
	std::cin >> base;
	std::cout << "Input the exponent number: ";
	std::cin >> exponent;

	product = 1;
	if (exponent == 0)
	{
		product;
		std::cout << "The product of " << base << " to the " << exponent << " is: " << product << std::endl;
	}
	else if (exponent < 0)
	{
		exponent = fabs(exponent);
		for (int i = 0; i < exponent; i++)
		{
			product = product * base;
			negative = 1 / product;
		}
		exponent *= -1;
		std::cout << "The product of " << base << " to the " << exponent << " is: " << negative << std::endl;
	}
	else
	{
		for (int i = 0; i < exponent; i++)
			product = product * base;
		std::cout << "The product of " << base << " to the " << exponent << " is: " << product << std::endl;
	}
	system("pause");
	return product;
}