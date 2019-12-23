#include<iostream>

int main(){

	//Declarations
	int number1 = 0;
	int number2 = 0;
	int sum = 0;
	
	//inputs
	std::cout<<"Enter the first number"<<std::endl;
	std::cin>>number1;
	
	std::cout<<"Enter the second number"<<std::endl;
	std::cin>>number2;
	
	sum = number1 + number2;//Process the sum
	
	std::cout<<"Sum of two numbers is "<<sum<<std::endl;//Printing the sum
	return 0;
}
