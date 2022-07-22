#include<iostream>

using namespace std;

int main()
{
    int i , x;

    cout <<"Enter the value: "<< endl;
    cin >> i;

    cout <<"Enter the second value: "<<endl;
    cin >> x;

    for (i ; i <= 5; i++)
    {
        if ( i == x)
        {
            cout<< "Sum is: "<< i+x <<endl;
        }
            cout << "value of I: " << i << endl;
    }

}
