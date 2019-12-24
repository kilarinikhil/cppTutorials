#include<iostream>
#include<string>
using namespace std;

class GradeBook{
	
	public:
		//explicit means only one argument passed for function
		explicit GradeBook(string name)
		:courseName(name)// ":" denotes member initializer
		{}
		
		
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
	//pass string to initialization
	GradeBook gradeBook1("Machine Learning"),gradeBook2("Deep Learning");
	
	gradeBook1.displayMessage();
	gradeBook2.displayMessage();
	
	return 0;
}
