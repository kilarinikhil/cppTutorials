#include<iostream>
#include<string>
#include"GradeBook.h"
using namespace std;

int main(){
	string nameOfCourse;
	//pass string to initialization
	GradeBook gradeBook1("Machine Learning"),gradeBook2("Deep Learning");
	
	gradeBook1.displayMessage();
	gradeBook2.displayMessage();
	
	return 0;
}
