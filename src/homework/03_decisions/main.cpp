//write include statements
#include "decisions.h"

using std::cout; using std::cin;
using std::string;

int main() 
{
	int grade;
	cout<<"Enter numerical grade: \n";
	cin>>grade;
	get_letter_grade_using_switch(grade);
	return 0;
}