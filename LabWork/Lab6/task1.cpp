#include <iostream>
using namespace std;
int main()
{
    int rows1;
    int colunms1;
    int rows2;
    int colunms2;
    while (1)
    {
        cout << "Please enter number of rows for first array :";
        cin >> rows1;
        cout << "Please enter number of columns for second array :";
        cin >> colunms1;

        cout << "Please enter number of rows for second array :";
        cin >> rows2;
        cout << "Please enter number of columns for second array :";
        cin >> colunms2;
        if (colunms1 == rows2)
        {
            break;
        }
        else if (colunms1 != rows2)
        {
            cout << "number of columns in first matrix is not equal to number of rows in second matrix" << endl;
        }
    }
    int arr1[rows1][colunms1];
    int arr2[rows2][colunms2];

    for (int i = 0; i <= rows1 - 1; i++)
    {
        for (int j = 0; j <= colunms1 - 1; j++)
        {
            int n;

            cout << "Please enter your element in array at position " << i << "," << j << ":";
            cin >> n;
            arr1[i][j] = n;
        }
    }

    for (int i = 0; i <= rows2 - 1; i++)
    {
        for (int j = 0; j <= colunms2 - 1; j++)
        {
            int n;
            cout << "Please enter your element in array at position " << i << "," << j << ":";
            cin >> n;
            arr2[i][j] = n;
        }
    }

    int resultant[rows1][colunms2];

    for (int i = 0; i <= rows1 - 1; i++)
    {
        for (int j = 0; j <= colunms2 - 1; j++)
        {
            resultant[i][j] = 0;
            for (int k = 0; k <= colunms1 - 1; k++)
            {
                resultant[i][j] = resultant[i][j] + (arr1[i][k] * arr2[k][j]);
            }
        }
    }
}