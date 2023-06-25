//add include statements
#include "func.h"
using std::cout;

//add function code here
int get_vector_max_value(vector<int> vect)
{
    vector<int> x = vect; 
    int maxVal = 0;
    int vectorSize = x.size();

    for (int i = 0; i < vectorSize; i++) //loop for the amount of elements in the vector
    {
        if (x[i] > maxVal)
        {
            maxVal = x[i];
        }
    }
    cout << maxVal << "\n";
    return maxVal;
}

vector<int> get_square_of_each_element(vector<int> vect)
{
    vector<int> y = vect;
    vector<int> newVec(5);
    int vectorSize = y.size();

    for (int i = 0; i < vectorSize; i++)
    {
        newVec[i] = y[i] * y[i];
        cout << newVec[i] << "\n";
    }
    return newVec;
}
