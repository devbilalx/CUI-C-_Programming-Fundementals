#include <iostream>

using namespace std;

int main()
{
    int number;

    cout<<"Please enter your number :";
    cin>>number;

    do{
        cout<<"Current number is :"<<number<<endl;
        number=number-1;

        if (number==0){
            cout<<"Blast off!"<<endl;
        }

    }while(number!=0);
    return 0;
}
