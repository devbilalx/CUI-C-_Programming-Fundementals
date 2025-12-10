#include<iostream>
using namespace std;
int main()
{


    for (int i=1; i<=2; i++){

        cout<<"* ";
    }

    cout<<endl;

    for (int i=1; i<=10;i++){

        cout<<"*";


        for(int j=1; j<=1; j++){

            int k=1;

            while(k<=i){

                if (k<=5){

                    cout<<"  ";
                }else {
                    cout<<" ";
                }
                k++;
            }

            cout<<" * ";
        }
        cout<<endl;


    }


    for (int i=1; i<=16; i++){

        cout<<"*";
    }

    cout<<endl;

    for (int i=1; i<=10;i++){

        cout<<"*";

        for(int j=1; j<=1; j++){

            cout<<"\t\t*";
        }
        cout<<endl;


    }

    for (int i=1; i<=15; i++){

        cout<<"*";
    }
    



    
}