#include<iostream>
#include<string>
using namespace std;

class GradeBook{
	
	public:
		void setCourseName(string name){
			courseName = name;
		}
		
		string getCourseName()const{
			return courseName;
		}
		
		void displayMessage()const{
			cout<<"Welcome to the gradebook of \""<<getCourseName()<<"\""<<endl;
		}

	private:
		string courseName;
};

int main(){
	string nameOfCourse;
	GradeBook myGradeBook;
	
	cout<<"Enter the name of the course "<<endl;
	getline(cin,nameOfCourse);//prompt
	
	myGradeBook.setCourseName(nameOfCourse);
	myGradeBook.displayMessage();
	
	return 0;
}
//Points to remember
//you can only a const function in another const function.
