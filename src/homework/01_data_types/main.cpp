#include "data_types.h"

using std::cout; using std::cin;
//write namespace using statement for cout

int main()
{
	int num;
	cin >> num;
	int result = multiply_numbers(num);
	cout << result << "\n";
	return result;

	int num1 = 4;
	result = multiply_numbers(num1);
	cout << result << "\n";
}
