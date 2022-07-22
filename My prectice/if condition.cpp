#include <iostream>

using namespace std;

int main()
{
    string pass ="hello";

    cout<< " Enter Password - "<<flush;
    string input;
    cin>> input;
    if (input == pass)
    {
       cout << input << endl;
    }
    if (input != pass)
    {
       cout << "wrong pass" << endl;
    }
    return 0;
}
