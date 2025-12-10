#include <iostream>

using namespace std;


void first_character(string s);


void all_capatalize(string s);


void all_decapatalize(string s);


int main(){


        
    string s;


    cout<<"Enter your string :";

    getline(cin,s);


    char select;


    cout<<"Enter F to capatalize first character of string\n Enter A to capatalize All string\n Enter D to Decapatalize all string:";

    cin>>select;


    switch(select){


        case 'F':


        first_character(s);
        

        break;


        case 'A':

        all_capatalize(s);

        break;

        case 'D':

        all_decapatalize(s);

        break;






    }




}

void all_decapatalize(string s){


    int w;

    w=s.length();

    for (int i=0; i<=w-1; i++){


        if(int (s[i])>=65 && int (s[i]<=90)){



            s[i]= char(int(s[i])+32);
        }

    }

    cout<<s<<endl;



}


void all_capatalize(string s){


    int w;

    w=s.length();

    for (int i=0; i<=w-1; i++){


        if(int (s[i])>=97 && int (s[i]<=123)){



            s[i]= char(int(s[i])-32);
        }

    }

    cout<<s<<endl;



}


void first_character(string s){



    char first=s[0];


    if(int (first)>=97 && int(first)<=123){


        s[0]=char(int(s[0])-32);
    }


    cout<<s<<endl;



}