#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    
    string userInput;

    cout<<"Please enter your binary which you want to convert to decimal :";

    cin>>userInput;

    int result=0;

    int length;

    cout<<"Please enter your binary length:";

    // length=userInput.length(); // we can also take length input from use

    cin>>length;




    for (int i=0; i<length;i++){


        int bit=userInput[i]-'0'; //asic value

        // int power=length-i-1;


        result=(result*2)+bit;

        
    }

    cout<<result<<endl;









    return 0;
}
