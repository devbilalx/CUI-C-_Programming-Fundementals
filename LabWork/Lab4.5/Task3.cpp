#include <iostream>

using namespace std;

int main()
{
    int sum=1;

    int n;
    cout<<"Enter you number for factorial :";
    cin>>n;

    for (int i=1; i<=n;i++){

        sum=(sum*i);

    }

    cout<<"factorial is  "<<sum<<endl;
    return 0;
}

