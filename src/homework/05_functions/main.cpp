#include "func.h"

using std::cout; using std::cin;
using std::vector;

int main() 
{
	
	vector<int>x{5,7,-1,99,-100,10};
	vector<int>y{6,1,8,9,4};
	int choice;
	

	cout <<
	"1-Get max value\n" << 
	"2-Get square of elements\n" <<
	"3-Exit\n";
	cin >> choice;
	if (choice == 1)
	{
		get_vector_max_value(x);
	}else if (choice == 2)
	{
		get_square_of_each_element(y);
	}else
	{
		return 0;
	}
	return 0;
}
