#include <iostream>

using namespace std;

void evenodd(int arr[],int size);


void descending(int arr[],int size);


int main()
{


    int s;

    cout<<"Enter Your array size :";

    cin>>s;

    int m[s];

    for (int i=0 ;i<=s-1; i++){

        int value;

        cout<<"Enter your value at index "<<i<<":";

        cin>>value;

        m[i]=value;
    

    }

    int op;
    cout<<"Enter your operation 1 for evenodd 2 for descending:";

    cin>>op;

    switch (op)
    {
    case 1:
        evenodd(m,s);
        break;
    
    case 2: 

        descending(m,s);
        break;
    }

    
    


    return 0;
}

void descending(int arr[],int size){


    for (int i=0; i<=size-1; i++){

        for (int j=0+i;j<=size-2;j++){

            if(arr[i]<arr[j]){

                int temp=arr[i];

                arr[i]=arr[j];

                arr[j]=temp;
            }
        }
    }
    cout<<"[";
    for (int i=0; i<=size-1;i++){

        if (i!=size){
            cout<<arr[i]<<" ";
            
        }

    
    }

    cout<<"]";
}



void evenodd(int arr[],int size){

    int evencount=0;

    int oddcount=0;


    for (int i=0; i<=size-1; i++){


        if (arr[i]%2==0){

            evencount=evencount+1;



        }else if(arr[i]%2!=0){

            oddcount=oddcount+1;

        }
    }

    cout<<"The quantity of even number in the array is "<<evencount<<" and the number is:";


    for (int i=0 ;i<=size-1; i++){

        if (arr[i]%2==0){


            cout<<arr[i];
        }
    }

    cout<<endl;

    cout<<"The quantity of odd number in the array is "<<oddcount<<" and the number is:";



    for (int i=0 ;i<=size-1; i++){

        if (arr[i]%2!=0){


            cout<<arr[i];
        }
    }

}




