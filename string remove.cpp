#include <iostream>
#include <string>
using namespace std;

void eraseDemo(string str)
{

    str.erase();

    cout << "After erase() : ";
    cout << str;
}


int main()
{
    string str("Hello World!");

    cout << "Before erase() : ";
    cout << str << endl;
    eraseDemo(str);

    return 0;
}

//output
Before erase() : Hello World!
After erase() :
