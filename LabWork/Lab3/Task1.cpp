#include <iostream>

using namespace std;
int main(){



    /// we were allowed to use condidional opertaor yet only
    
    string name;

    cout<<"Enter your name : ";

    cin>>name;

    cout<<"Your name is :"<<name<<endl;

    cout<<endl;
    char gender;

    cout<<"Enter your gender  M for male F for female: ";

    cin>>gender;
    cout<<endl;
    
    char gender_check=((gender=='M')||(gender=='F'))? 'Y':'N';
    cout<<gender_check<<gender;

    int day;
    int month;
    int year;

    cout<<endl;

    cout<<"Enter your dob day : ";
    cin>>day;

    cout<<endl;

    cout<<"Enter your dob month : ";

    cin>>month;

    cout<<endl;

    cout<<"Enter your dob year : ";


    cin>>year;

    string check_dob= ((day>0 && day<32) && (month>0 && month<13) && (year>=2000 && year<=2005)) ? "Dob entered is correct : ": "Dob is incorrect : ";

    cout<<check_dob<<" "<<day<<"/"<<month<<"/"<<year<<endl;
    float percentage;

    cout<<"Please enter you percentage : ";


    cin>>percentage;


    string check_percentage=(percentage>=0 && percentage<=100) ? "Percentage is valid : ":"Percentage is out of range : ";

    cout<<check_percentage<<percentage<<endl;


    string major;

    cout<<"Please enter you major : ";

    cin>>major;
 

    string check_major=((major=="Computer")||(major=="Pre-engineering"))? "Major is valid : ":"Major entered is invalid : ";

    cout<<check_major<<major<<endl;


    string regBatch;

    cout<<"Please enter SP or FA : ";

    cin>>regBatch;

    cout<<endl;

    int batchYear;

    cout<<"Enter your batch year : ";

    cin>>batchYear;

    string check_regBatch=((regBatch=="SP")||(regBatch=="FA"))? "Valid Batch :": "Invalid Batch :";

    cout<<check_regBatch<<regBatch<<batchYear<<endl;



    // cout<<"Entered Data is as follows : "<<endl;








        

} 