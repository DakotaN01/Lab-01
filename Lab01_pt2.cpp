#include <iostream>
#include <string>
int main() {
	double meal;
	double percentage;
	double tax = 0.075;

	std::string meal_cost;
	std::string tip;

	std::cout << " Please Input Meal Cost Here:  ";
	std::cin >> meal;
std::cout << "\n";
std::cout << " Please Input Tip Percentage Here:  ";
std::cin >> percentage;
std::cout << "\n";
std::cout << " Resturant Bill \n";
std::cout << " ================== \n";
std::cout << "Subtotal: $" << meal << ".00 \n";
std::cout << "Taxes: $" << meal * tax << " \n";
std::cout << "Tip: $" << meal * (percentage / 100) << "\n";
std::cout << " ================== \n";
std::cout << " Total:$" << meal + (meal * tax) + (meal * (percentage / 100));
std::cout << "\n";
std::cout << "\n";


return 0;
}