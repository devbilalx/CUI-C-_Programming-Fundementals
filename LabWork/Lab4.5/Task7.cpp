#include <iostream>

using namespace std;

int main()
{

    int n;

    int sum=0;

    cout<<"Please enter your number";
    cin>>n;

    for (int i=1; i<=n;i++){


        if (i%2!=0){
            sum=sum+i;
        }

    }
    cout<<"sum of odd is:"<<sum;
    

    return 0;
}
