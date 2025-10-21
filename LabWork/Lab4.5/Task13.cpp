#include <iostream>

using namespace std;

int main()
{

    int number=100;

    int sum=0;
    
    cout<<"Numbers that are divisble by 9 are:";
    while(number<=200){


        if (number%9==0){
            sum=sum+number;
            cout<<number<<" ";

        }

        number=number+1;


    }
    cout<<endl;

    cout<<"Sum is "<<sum<<endl;



    return 0;
}
