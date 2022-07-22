#include <iostream>

using namespace std;

int main()
{
cout << "1. Ashraful "<< endl;
cout << "2. Islam "<< endl;
cout << "5. Quit. "<< endl;

cout << "Enter your selection "<< flush;

int value ;
cin>> value;

if (value ==2 )
{
    cout << " The selected number is "<<value << flush;
}
else
    {
    cout <<"Not selected right number"<< endl;

}
if (value == 3)
{
    cout << "Application quiting......"<< endl;
}
    return 0;
}
