#include "decisions.h"
//write include statement for decisions header
using std::cout;
using std::string;


//Write code for function(s) code here
string get_letter_grade_using_switch(int grade)
{
    string result = "";
    if(grade < 0 || grade > 100) //checks for valid grade
    {
        cout <<"Invalid Option!\n";
        return 0;
    }

    switch(grade/10)
    {
        case 10:
        case 9: 
            result = "A";
            break;
        case 8:
            result = "B";
            break;
        case 7: 
            result = "C";
            break;
        case 6: 
            result = "D";
            break;
        default:
            result = "F";
    }
    cout<<grade;
    return result;
}

