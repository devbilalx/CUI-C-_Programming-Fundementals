#include <iostream>

using namespace std;


//conditional statement 

int main()
{



    cout<<"......Program so check if entered value is positive or negative "<<endl;

    int x;

    cout<<"Enter your number : ";
    cin>>x;


    //if number is positive 


    // if (x>=0){

    //     cout<<"Entered value is positive :"<<x<<endl;

    // }else if(x<0){
    //     cout<<"Entered value is negative :"<<x<<endl;
    // }else if (x==0){

    //     cout<<"entered value is zero :"<<x<<endl;

    // }


    //optimizing the code   //study 

    if (x<0){

        cout<<"Entered value is negative :"<<x<<endl;

    }else if(x==0){
        cout<<"Entered value is zero :"<<x<<endl;
    }else if (x>0){

        cout<<"entered value is positive :"<<x<<endl;

    }
    return 0;
}
