#include <iostream>

using namespace std;

int main()
{

    int n=8;

    while(1){

        cout<<n<<endl;
        n++;

        if (n==17){
            break; // will break the loop
        }

        // can write here n++ for code optimization
    }


    // do {



    //     cout<<n<<endl;
    //     n++;

    //     if (n==17){

    //         break;
    //     }
    // }while(n==1);  // will run atleast once


    return 0;
}
