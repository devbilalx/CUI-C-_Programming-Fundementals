#include <iostream>

using namespace std;

void table_mult(int m);

int main()
{

    cout<<"Code for table"<<endl;


    string end;


    while(end!="no"){
        int x;
        cout<<"Please enter a number: ";
        cin>>x;

        table_mult(x);


        cout<<"Enter (yes) to continue and (no) to end :";

        cin>>end;
        
    }
    return 0;
}


void table_mult(int m){


    for (int i=1; i<=10; i++ ){

        cout<<m<<" x "<<i<<" = "<<m*i<<endl;

    }
}
