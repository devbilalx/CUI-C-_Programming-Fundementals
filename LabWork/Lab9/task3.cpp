#include <iostream>


using namespace std;

void modifyFirstChar(string result) {

    char firstchar = result[0];

    if(int(firstchar)<=123){


        result[0]=char(int(result[0])-32);
    }

    cout<<"Output first letter capitalized: " << result << endl;
}


void makeAllUpper(string result) {



    int i=0;

    int lenVal = result.length();

    while(i<lenVal){

        if(int(result[i] >=97)){
            result[i] = char(int(result[i]) - 32);
        }

        i=i+1;
   
    }

    cout << "Output entire string uppercase: " << result << endl;
}

void makeAllLower(string result) {


    int i=0;

    int lenVal = result.length();



    while(i<lenVal){

        if(int(result[i] <=90)){
            result[i] = char(int(result[i]) + 32);
        }

        i=i+1;
   
    }

    cout << "Output entire string lowercase: " << result << endl;
}



int main()
{



    string inputLine;

    cout<<"Enter your string :";

    cin>>inputLine;

    int operation;

    cout << "Press 1 for firstletter uppercase Press 2 for all uppercase Press 3 for all lowercase:";
    cin >> operation;

    switch(operation){

        case 1: 
            modifyFirstChar(inputLine);
        break;

        case 2:  
            makeAllUpper(inputLine);
        break;

        case 3:   
            makeAllLower(inputLine);
        break;
    }


    return 0;
}



