#include<iostream>
using namespace std;

int main(){
	int number1,number2 = 0;
	
	cout<<"Enter the first number : ";
	cin>>number1;
	
	cout<<"Enter the second number : ";
	cin>>number2;
	
	if(number1 == number2)
		cout<<"number1 == number2"<<endl;
	
	if(number1 != number2)
		cout<<"number1 != number2"<<endl;
	
	if(number1 <= number2)
		cout<<"number1 <= number2"<<endl;
	
	if(number1 >= number2)
		cout<<"number1 >= number2"<<endl;
	
	return 0; 
	
}
