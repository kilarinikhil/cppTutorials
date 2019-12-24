#include<iostream>
#include<string>
using namespace std;
class GradeBook{
	public:
		// function header declared constant to prevent function from modifying the class objects
		void displayMessage(string courseName) const{
			cout<<"Welcome to the course \""<<courseName<<"\""<<endl;
		}
};

int main(){
	
	string NameOfCourse;//create a string variable
	GradeBook myGradeBook;//create a GradeBook variable
	
	getline(cin,NameOfCourse);//prompt for user
	
	myGradeBook.displayMessage(NameOfCourse);//function call
	
	return 0;
}
