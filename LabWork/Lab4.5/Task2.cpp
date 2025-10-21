#include <iostream>

using namespace std;

int main()
{
    cout<<"Program to compute table of a number ";

    int x;

    cout<<"Please enter a number: ";
    cin>>x;



    for (int i=1; i<=10; i++ ){

        cout<<x<<" x "<<i<<"="<<x*i<<endl;

    }
    return 0;
}

