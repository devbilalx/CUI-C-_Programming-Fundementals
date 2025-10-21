#include <iostream>

using namespace std;

int main()
{
    //nested loop

    int x;

    cout<<"Please enter a number: ";
    cin>>x;


    for (int i=1; i<=x; i++ ){

        for (int j=1; j<=10 ;j++){
            cout<<i<<" x "<<j<<"="<<j*i<<endl;

        }
        cout<<endl;

    }
    return 0;
}

