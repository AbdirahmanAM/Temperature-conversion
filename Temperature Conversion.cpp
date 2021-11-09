// Temperature Conversion.cpp : This file contains the 'main' function. Program execution begins and ends there.

//CAT1 Question 2
//Abdirahman Gedi
//Student number 137748

#include <iostream>
using namespace std;

double fahrenheitToCelcius(double fahrenheit)
{
    double celcius;

    celcius = 5.0/9.0 * (fahrenheit - 32.0);

    return celcius;
}


int main()
{
    double fahrenheit;

    std::cout << "...This is the conversion of fahrenheit to celcius..." << endl;
    std::cout << "\n";

   std::cout << "Enter temperature in fahrenheit (in degrees) ";
   std::cin >> fahrenheit;
   std::cout << "\n";
   std::cout << "Temperature in Celcius (in degrees) is: " << fahrenheitToCelcius(fahrenheit) << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
