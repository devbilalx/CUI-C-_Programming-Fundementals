#include <iostream>

using namespace std;

int main()
{

    int value;

    int result=0;
    
    int place=1;


    cout<<"Please enter your value:";
    cin>>value;


    for (int i=value ; i>0; i=i/2 ){

        int remainder=i%2;

        result=result+ remainder*place;

        place=place*10;
    }

    cout<<"Binary value is :"<<result<<endl;

    return 0;
}
