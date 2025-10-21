#include <iostream>

using namespace std;

int main()
{

    int start;

    cout<<"Please enter your starting range:";

    cin>>start;

    int end;

    cout<<"Please eneter your ending range:";
    cin>>end;

    for (int i=start; i<=end; i++){

        if (i%2==0){
            cout<<i<<" ";
        }
    }

    return 0;
}
