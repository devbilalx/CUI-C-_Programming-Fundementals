#include <iostream>

using namespace std;

int main()
{

    int r1; int c1; int r2; int c2;



    while(1){
        cout<<"Enter your rows for matrix 1 :";

        cin>>r1;


        cout<<"Enter your columns for matrix 1 :";

        cin>>c1;

        cout<<"Enter your rows for matrix 2";

        cin>>r2;


        cout<<"Enter your columns for matrix 2";

        cin>>c2;

        if (c1==r2){  
            break;
        }else if(c1!=r2){

            cout<<"Row 1 of matrix is not equal to Coulmns of matrix 2"<<endl;
        }
    }

    int arr1[r1][c1];


    int arr2[r2][c2];


    int result[r1][c2];


    for (int i=0; i<=r1-1; i++){


        for (int j=0; j<=c1-1; j++){


            int val;


            cout<<"Enter your value for matrix 1 :";

            cin>>val;

            arr1[i][j]=val;
        }
    }

    for (int i=0 ;i<=r2-1; i++){


        for (int j=0; j<=c2-1; j++){

            int val;

            cout<<"Enter your value for matrix 2 :";

            cin>>val;

            arr2[i][j]=val;
        }
    }


    for (int i=0; i<=r1-1; i++){


        for (int j=0; j<=c2-1;j++){


            result [i][j]=0;
            for (int k=0; k<=c1-1; k++){


                result[i][j]=result[i][j]+((arr1[i][k]*arr2[k][j]));
            }
        }
    }


    /* code */
    return 0;
}
