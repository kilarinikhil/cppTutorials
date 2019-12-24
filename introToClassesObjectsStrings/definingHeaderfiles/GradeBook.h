#include<iostream>
#include<string>

class GradeBook{
	
	public:
		//explicit means only one argument passed for function
		explicit GradeBook(std::string name)
		:courseName(name)// ":" denotes member initializer
		{}
		
		
		void setCourseName(std::string name){
			courseName = name;
		}
		
		std::string getCourseName()const{
			return courseName;
		}
		
		void displayMessage()const{
			std::cout<<"Welcome to the gradebook of \""<<getCourseName()<<"\""<<std::endl;
		}

	private:
		std::string courseName;
};
