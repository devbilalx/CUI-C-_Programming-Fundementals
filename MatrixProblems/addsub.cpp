#include <iostream>

using namespace std;

void add();

void sub();


int main()
{
    /* code */

    add();


    return 0;
}

void add(){


    int r1; int r2; int c1; int c2;

    while(1){
        cout<<"Enter your rows for matrix 1 :";

        cin>>r1;


        cout<<"Enter your columns for matrix 1 :";

        cin>>c1;

        cout<<"Enter your rows for matrix 2";

        cin>>r2;


        cout<<"Enter your columns for matrix 2";

        cin>>c2;


        if ( (r1==r2)&&(c1==c2)){

            break;


        }else if ((r1!=r2)||(c2!=c2)){


            cout<<"Rows and Coumns of matrix should be same "<<endl;
        }
    }

    
    int x[r1][c1];

    int y[r2][c2];


    for (int i=0; i<=r1-1; i++){


        for (int j=0; j<=c1-1; j++){


            int val;


            cout<<"Enter your value for matrix 1 :";

            cin>>val;

            x[i][j]=val;
        }
    }

    for (int i=0 ;i<=r2-1; i++){


        for (int j=0; j<=c2-1; j++){

            int val;

            cout<<"Enter your value for matrix 2 :";

            cin>>val;

            y[i][j]=val;
        }
    }


    int z[r1][c1];


    for (int i=0; i<=r1-1; i++){

        for (int j=0; j<=c1-1; j++){


            z[i][j]=x[i][j]+y[i][j];
        }
    }

}

void sub(){


    int r1; int r2; int c1; int c2;

    while(1){
        cout<<"Enter your rows for matrix 1 :";

        cin>>r1;


        cout<<"Enter your columns for matrix 1 :";

        cin>>c1;

        cout<<"Enter your rows for matrix 2";

        cin>>r2;


        cout<<"Enter your columns for matrix 2";

        cin>>c2;


        if ( (r1==r2)&&(c1==c2)){

            break;


        }else if ((r1!=r2)||(c1!=c2)){


            cout<<"Rows and Coumns of matrix should be same "<<endl;
        }
    }


    int x[r1][c1];

    int y[r2][c2];


    for (int i=0; i<=r1-1; i++){


        for (int j=0; j<=c1-1; j++){


            int val;


            cout<<"Enter your value for matrix 1 :";

            cin>>val;

            x[i][j]=val;
        }
    }

    for (int i=0 ;i<=r2-1; i++){


        for (int j=0; j<=c2-1; j++){

            int val;

            cout<<"Enter your value for matrix 2 :";

            cin>>val;

            y[i][j]=val;
        }
    }


    int z[r1][c1];


    for (int i=0; i<=r1-1; i++){

        for (int j=0; j<=c1-1; j++){


            z[i][j]=x[i][j]-y[i][j];
        }
    }

}

