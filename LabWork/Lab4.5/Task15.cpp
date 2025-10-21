#include <iostream>

using namespace std;

int main()
{

    int n;
    do {

        cout<<"Please enter your number:";
        cin>>n;

        if (n>=1 && n<=10){
            cout<<"Valid numbered entered "<<endl;
        }else if(n<1 || n>10){

            cout<<"Number entered should be in range of 1 to 10,Enter your number again"<<endl;

        }


    }while(n<1 || n>10);

    return 0;
}

