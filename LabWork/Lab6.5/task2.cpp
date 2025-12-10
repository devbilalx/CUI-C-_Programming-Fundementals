#include <iostream>

using namespace std;

int main()
{

    int x=5;
    for (int i=1; i<=10;i++){

        
        cout<<"*";

        int k=1;

        while(k<=i){
            cout<<" ";
            k++;
        }

        for (int j=1; j<=1; j++){

            if (i%2==0){
                cout<<"*";
            }
            else{
                cout<<"\t";
            }
        }

        cout<<"\t";


        for (int y=1; y<=1; y++){

            cout<<"*\t  ";
        }



        cout<<endl;


    }
    
    return 0;
}
