#include<iostream>
using namespace std;
class GradeBook{
	public:
		// function header declared constant to prevent function from modifying the class objects
		void displayMessage() const{
			cout<<"Welcome to Gradebook"<<endl;
		}
};

int main(){
	
	GradeBook myGradeBook;
	
	myGradeBook.displayMessage();
	
	return 0;
}
