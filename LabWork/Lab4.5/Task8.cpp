#include <iostream>

using namespace std;


int main()
{
    int sum=0;

    while(1){
        int n;

        cout<<"please enter your number:";

        cin>>n;

        if (n>=0){
            sum=sum+n;
        }else if (n<0){
            break;
        }
    }

    cout<<"Sum is :"<<sum;
    
    return 0;
}
