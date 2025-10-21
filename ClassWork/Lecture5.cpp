#include <iostream>


using namespace std;

int main(int argc, char const *argv[])
{

    int y=5;
    int days;
    cout<<"\nEnter day of your dob : "<<endl;
    cin>>days;


    bool check_day;

    check_day= (days>=1 )&& (days<<=31);



    cout<<"\n\nThe entered day in invalid "<<check_day<<endl;

    //conditonal operator 
        
    char ch_day= (days>=1 )&& (days<<=31) ?'N':'Y';

    cout<<"\n\nError in day entry (Y for yes,N for NO)?"<<ch_day<<endl;

    string ck_day= (days>=1)&&(days<=31) ? "No":"Yes";


    // int ck_day= (days>=1)&&(days<=31) ?  10:5;



    cout<<"\n\nError in day entry"<<ch_day<<endl;


    char ch_y=y!=5 ?'T': 'F';

    cout<<ch_day<<endl<<endl;


    //Incremenatal /Decremental Statement


    int a=2 ;
    int b=7 ;
    int  c=1;

    // a=a+1;
    a++; // same result as a+1

    a=a-1;
    a--; //same as a=a-1


    cout<<a<<endl<<endl;


    // Accumulation 

    int sum=0;
 
    sum=sum+a;  //sum=2
    sum=sum+b;  //sum=9
    sum=sum+c;  //sum=10

    cout<<sum;



    



    return 0;
}
