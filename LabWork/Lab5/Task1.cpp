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

    int evenCount=0;
    int oddCount=0;

    for (int i=0; i<=N-1;i++){

        int temp=x[i];

        if(temp%2==0 && temp!=0){
            evenCount=evenCount+1;
        }else if (temp%2!=0 & temp!=0){
            oddCount=oddCount+1;
        }

        
    }

    cout<<"The quantity of even number in the array is:"<<evenCount<<" and the number are ";
    for (int i=0; i<=N-1;i++){
        int temp=x[i];

        if(temp%2==0 && temp!=0){
            cout<<temp<<" ";  
        }   
    }
    cout<<endl;
    
    cout<<"The quantity of odd number in the array is:"<<oddCount<<" and the number are ";

    for (int i=0; i<=N-1;i++){
        int temp=x[i];

        if(temp%2!=0 && temp!=0){
            cout<<temp<<" ";  
        }   
    }



    
    
    return 0;
}
