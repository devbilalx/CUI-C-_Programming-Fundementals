#include <iostream>

using namespace std;


int main()
{


    int result=1;

    int x;

    cout<<"Enter your number for which you want to caluate power :";
    cin>>x;

    int y;

    cout<<"Enter you power number like example (5^3) ; asking for ^3 ";

    cin>>y;

    for (int i=0; i<y; i++){
        result=x*result;

    }

    cout<<"Result is :"<<result<<endl;
    return 0;
}
