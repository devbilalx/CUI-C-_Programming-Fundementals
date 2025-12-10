#include <iostream>

using namespace std;


void tablenum(int num){


    for (int i=1; i<=10; i++ ){

        cout<<num<<" x "<<i<<" = "<<num*i<<endl;

    }
}

int main()
{

    cout<<"Table of given number "<<endl;


    while(1){
        int num;
        cout<<"Enter your number ";
        cin>>num;

        tablenum(num);

        char t;

        cout<<"Press y to exit no for continue :";

        cin>>t;

        if (t=='y'){
            break;
        }
        
        
    }
    return 0;
}

