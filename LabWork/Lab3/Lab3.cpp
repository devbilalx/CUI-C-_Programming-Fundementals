#include <iostream>

// #include <string>
#include <sstream>

using namespace std;
// void usingStream();
int main()
{

    // string mystr;

    // cout<<"What's your name?";
    // getline(cin,mystr);
    // cout<<"hello "<<mystr<<".\n";

    // cout<<"what is your favorite team? ";
    // getline(cin,mystr);
    // cout<<"I like "<< mystr <<" too!\n";


    string newstr;

    float price=0;

    int quanity=0;

    cout<<"Enter price: ";

    getline(cin,newstr);


    stringstream(newstr)>>price;

    cout<<"Enter qauntity : ";

    getline(cin,newstr);

    stringstream(newstr)>>quanity;

    cout<<"Total Price: "<<price*quanity<<endl;


    return 0;
}

