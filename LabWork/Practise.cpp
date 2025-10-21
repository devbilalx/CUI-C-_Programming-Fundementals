#include <iostream>

using namespace std;

int main()
{

    // Task 1



    // int size;

    // cout<<"Enter your array size :";

    // cin>>size;


    // int z[size];





    // for (int i=0; i<=size-1; i++){

    //     int number;

    //     cout<<"Enter your number at index "<<i<<" :";
    //     cin>>number;


    //     z[i]=number;
    // }

    // int evencount=0;

    // int oddcount=0;



    // for (int i=0; i<=size-1;i++){

    //     int temp=z[i];

    //     if (temp%2==0 && temp!=0){

    //         evencount++;

    //     }else if(temp%2!=0 && temp!=0){
            
    //         oddcount++;
    //     }
    // }


    // cout<<"The quantity of even number is array is "<<evencount<<" and the number are : ";

    // for (int i=0 ;i<=size-1 ;i++){

    //     int temp=z[i];

    //     if (temp%2==0 && temp!=0){

    //         cout<<temp<< ", ";
    //     }
    // }

    // cout<<endl;

    // cout<<"The quantity of odd number is array is "<<oddcount<<" and the number are : ";

    // for (int i=0 ;i<=size-1 ;i++){

    //     int temp=z[i];

    //     if (temp%2!=0 && temp!=0){

    //         cout<<temp<< ", ";
    //     }
    // }


    // Task 2


    int size;

    cout<<"Enter your array size :";
    cin>>size;


    int z[size];

    for (int i=0 ; i<=size-1; i++){

        int number;

        cout<<"Enter your number at index "<<i<< " :";
        cin>>number;

        z[i]=number;
    }


    cout<<endl;


    cout<<"[";

    for (int i=0 ;i<=size-1;i++){

        cout<<z[i];

        if(i!=size-1){
            cout<<", ";
        }
    }

    cout<<"]"<<endl;


    for (int i=0; i<size-1;i++){

        for (int j=0+i; j<size; j++){

            if (z[i]<z[j]){

                int temp =z[i];

                z[i]=z[j];

                z[j]=temp;
            }
        }
    }


    cout<<"Sorted Array : "<<endl;
    cout<<"[";

    for (int i=0 ;i<=size-1;i++){

        cout<<z[i];

        if(i!=size-1){
            cout<<", ";
        }
    }

    cout<<"]"<<endl;





    
    return 0;
}
