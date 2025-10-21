#include <iostream>

using namespace std;

int main()
{

    int N;

    cout<<"Enter array size:";
    cin>>N;

    int x[N];

    cout<<"Enter array elements:"<<endl;
    for (int i=0; i<=N-1;i++){

        int number;

        cout<<"Enter number at index "<<i<<":";
        cin>>number;  
        
        x[i]=number;

    }

    for (int i=0; i<N-1;i++){

        for (int j=i+1; j<N;j++){

            if (x[i]<x[j]){

                int change=x[i];
                x[i]=x[j];
                x[j]=change;



            }
        }


    }
    cout<<"Sorted Array:"<<endl;
    cout<<"[";
    for (int i=0; i<=N-1;i++){
        cout<<x[i]<<" ";
    }
    cout<<"]";
    return 0;
}


