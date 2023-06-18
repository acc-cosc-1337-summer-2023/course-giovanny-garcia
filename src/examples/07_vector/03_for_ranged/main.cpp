#include <vector>
#include <iostream>

using std::cout;
using std::vector;

int main()
{
    vector<int> nums;
    cout<<nums.size()<<"\n";

    nums.push_back(1);
    cout<<nums.size()<<"\n";

    /*for(auto n: nums)
    {
        cout<<n<<"\n";
        n = 0;
    }

    for(auto n: nums)
    {
        cout<<n<<"\n";
    }*/
    return 0;
}