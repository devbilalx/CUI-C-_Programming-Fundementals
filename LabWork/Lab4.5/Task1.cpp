#include <iostream>

using namespace std;

int main()
{

    int sum=0;

    int n;

    cout<<"Enter any postive number:";

    cin>>n;

    if (n<0){

        cout<<"Enter positive number";
    }else if(n>=0){

        for (int i=1; i<=n;i++){

            sum=sum+i;
        }

        cout<<"natural number sum is:"<<sum<<endl;
    }

    



    return 0;
}
