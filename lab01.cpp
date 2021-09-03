#include <iostream>
#include <string>
int main(){
	std::cout << "Welcome to Madlibs!\n";
	int number;
	double percentage;
	char character;
	std::string name;
	std::string emotion;
	std::string animal;
	std::string your_name; 

	std::cout << "Choose a name\n";
	std::cin >> name;
	std::cout << " Hello  " << name << "\n";
	std::cout << "Choose an emotion: \n";
	std::cin >> emotion;
	std::cout << " emotion: " << emotion << "\n";
	std::cout << "Choose an animal\n";
	std::cin >> animal;
	std::cout << "Animal:  " << animal << "\n";
	std::cout << "Choose a number\n";
	std::cin >> number;
	std::cout << " Number:  " << number << "\n";
	std::cout << "Choose a letter\n";
	std::cin >> character;
	std::cout << " Letter:  " << character << "\n";
	std::cout << "Choose a floating point number between 0 and 100\n";
	std::cin >> percentage;
	std::cout << " Percentage: " << percentage << "\n";
	std::cout << "Choose another name\n";
	std::cin >> your_name;
	std::cout << " Name:  " << your_name << "\n";
	std::cout << "\n";
	std::cout << "\n";


	std::cout << "Dear " << name << ",\n"
		<< "I am " << emotion
		<< " that I was not able to complete my homework on time. My pet "
		<< animal << " ate my textbook, and I was only able to retrieve "
		<< number << " pages from its jaws. I hope I can get at least a "
		<< character << " grade because I've done " << percentage
		<< "% of the work.\nSincerely,\n"
		<< your_name << "\n";
	
		return 0;
}


