#include <iostream>

using namespace std;

#include <fstream>

#include <string.h>

int main()
{
    /* code */


    ifstream myfile("new.txt");

    string line;

    int count=0;


    if (myfile.is_open()){

        while(getline(myfile,line)){

            cout<<line<<endl;

            int length=line.length();


            for (int i=0; i<=length-1; i++){

                count=count+1;
            }



        }


    }

    

    myfile.close();

    cout<<count<<endl;
    return 0;
}
