#include <iostream>

using namespace std;

int main()
{
    int s;
    // int col;

    cout<<"enter number of rows : ";


    cin>>s;

    int totalStars=s*(s+1)/2;

    int row=1; int count=0;

    for(int i=1; i<=totalStars; i++){

        cout<<"*";
        count=count+1;

        if(count==row){
            cout<<endl;
            row=row+1;
            count=0;
        }
    }
    return 0;
}
