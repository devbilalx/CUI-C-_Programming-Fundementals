#include <iostream>

using namespace std;

int main()
{

    int n;


    do {

        cout<<"please enter your number  (e.g. 1. Continue, 2. Exit)";
        cin>>n;

        if(n==1){
            cout<<"continuing the program"<<endl;
        } else if (n==2){
            cout<<"exiting the program"<<endl;
        } else if( n<1 || n>2){
            cout<<"invalid choice"<<endl;
        }




    }while(n!=2);
    return 0;
}
