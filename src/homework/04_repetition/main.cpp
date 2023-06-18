//write include statements
#include "dna.h"

using std::cout; using std::cin;

//write using statements

int main() 
{
	string DNA = "";
	cout<< "Enter the DNA string: \n";
	cin>>DNA;
	get_gc_content(DNA);
	return 0;
}
