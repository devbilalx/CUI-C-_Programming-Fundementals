// Use funtion overloading and switch cases + make funtion of sub add and multplication and call them in main according to user choice
#include <string>
#include <iostream>

using namespace std;

void dumy(int r1, int c1, int r2, int c2, int u)
{

    if ((r1 == r2) && (c1 == c2))
    {

        int x[r1][c1];

        int y[r2][c2];

        for (int i = 0; i <= r1 - 1; i++)
        {

            for (int j = 0; j <= c1 - 1; j++)
            {

                int val;

                cout << "Enter your value for matrix 1 :";

                cin >> val;

                x[i][j] = val;
            }
        }

        for (int i = 0; i <= r2 - 1; i++)
        {

            for (int j = 0; j <= c2 - 1; j++)
            {

                int val;

                cout << "Enter your value for matrix 2 :";

                cin >> val;

                y[i][j] = val;
            }
        }

        int z[r1][c1];

        for (int i = 0; i <= r1 - 1; i++)
        {

            for (int j = 0; j <= c1 - 1; j++)
            {

                z[i][j] = x[i][j] + y[i][j];
            }
        }
    }
    else if ((r1 != r2) || (c1 != c2))
    {

        cout << "Rows and Columns of matrix are not eqaul " << endl;
    }
}

void dumy(int r1, int c1, int r2, int c2, float k)
{

    if ((r1 == r2) && (c1 == c2))
    {

        int x[r1][c1];

        int y[r2][c2];

        for (int i = 0; i <= r1 - 1; i++)
        {

            for (int j = 0; j <= c1 - 1; j++)
            {

                int val;

                cout << "Enter your value for matrix 1 :";

                cin >> val;

                x[i][j] = val;
            }
        }

        for (int i = 0; i <= r2 - 1; i++)
        {

            for (int j = 0; j <= c2 - 1; j++)
            {

                int val;

                cout << "Enter your value for matrix 2 :";

                cin >> val;

                y[i][j] = val;
            }
        }

        int z[r1][c1];

        for (int i = 0; i <= r1 - 1; i++)
        {

            for (int j = 0; j <= c1 - 1; j++)
            {

                z[i][j] = x[i][j] - y[i][j];
            }
        }
    }
    else if ((r1 != r2) || (c1 != c2))
    {

        cout << "Rows and Columns of matrix are not eqaul " << endl;
    }
}

void dumy(int r1, int c1, int r2, int c2, string z)
{

    if (c1 == r2)
    {

        int arr1[r1][c1];

        int arr2[r2][c2];

        int result[r1][c2];

        for (int i = 0; i <= r1 - 1; i++)
        {

            for (int j = 0; j <= c1 - 1; j++)
            {

                int val;

                cout << "Enter your value for matrix 1 :";

                cin >> val;

                arr1[i][j] = val;
            }
        }

        for (int i = 0; i <= r2 - 1; i++)
        {

            for (int j = 0; j <= c2 - 1; j++)
            {

                int val;

                cout << "Enter your value for matrix 2 :";

                cin >> val;

                arr2[i][j] = val;
            }
        }

        for (int i = 0; i <= r1 - 1; i++)
        {

            for (int j = 0; j <= c2 - 1; j++)
            {

                result[i][j] = 0;
                for (int k = 0; k <= c1 - 1; k++)
                {

                    result[i][j] = result[i][j] + ((arr1[i][k] * arr2[k][j]));
                }
            }
        }
    }
    else if (c1 != r2)
    {
        cout << "Columns and rows should be equal respecively " << endl;
    }
}

int main()
{
    /* code */

    int choice;

    cout<<"Enter 1 Addition 2 For Subtraction 3 for multiplication :";

    cin>>choice;



    int r1;int c1;int r2;int c2;

    cout << "Enter your rows for matrix 1 :";

    cin >> r1;

    cout << "Enter your columns for matrix 1 :";

    cin >> c1;

    cout << "Enter your rows for matrix 2";

    cin >> r2;

    cout << "Enter your columns for matrix 2";

    cin >> c2;


    // dumy varaible 
    string z="ab";
    int u=4;

    float k=3.4;

    switch (choice)
    {
    case 1:
        
    dumy(r1,c1,r2,c2,u);
        break;
    case 2:

    dumy(r1,c1,r2,c2,k);

    break;

    case 3:
    dumy(r1,c1,r2,c2,z);

    break;
    default:

    cout<<"Invalid operation :"<<endl;
        break;
    }
    return 0;
}
