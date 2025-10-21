#include <iostream>

using namespace std;


int main()
{

    //task1


    // int n;
    // int sum=0;

    // cout<<"Enter your number:";
    // cin>>n;


    // for (int i=1; i<=n; i++){

    //     sum=sum+i;

    // }

    // cout<<"Your sum is:"<<sum<<endl;


    // task2

    // int n;

    // cout<<"Enter number for table:";

    // cin>>n;


    // for (int i=1;i<=10;i++){

    //     cout<< n<< " x "<<i<<" = "<<n*i<<", ";
    // }

    //task 3


    // int fact;

    // cout<<"Enter your number for factoiral :";
    // cin>>fact;

    // int sum=1;

    // for (int i=1; i<=fact;i++){

    //     sum=sum*i;

    // }

    // cout<<"You factorial is :"<<sum<<endl;


    // task 4

    // int count=0;

    // int start;

    // cout<<"Enter your starting range :";

    // cin>>start;

    // int end;

    // cout<<"Enter your ending range:";
    // cin>>end;

    // for (int i=start; i<=end; i++){

    //     if (i%2==0){
    //         count++;
    //     }
    // }

    // cout<<"Your even number in range are:"<<count<<endl;



    // task 5

    // int rows;

    // cout<<"Enter your rows:";

    // cin>>rows;

    // for (int i=1; i<=rows;i++){

    //     for (int j=1; j<=i;j++){

    //         cout<<"*";
    //     }

    //     cout<<endl;
    // }


    //task 7



    // int totalsum=0;


    // int n;

    // cout<<"Enter your number:";

    // cin>>n;

    // int current_odd=1;


    // for (int i=1 ; i<=n;i++){


    //     // int oddvalue=2*i-1;

    //     // totalsum=totalsum+oddvalue;

    //     totalsum=totalsum+current_odd;

    //     current_odd=current_odd+2;
    // }

    // cout<<"sum of the first n odd number is: "<<totalsum<<endl;


    // task 8


    // int sum=0;

    // while(1){

    //     int n;

    //     cout<<"Enter your number:";

    //     cin>>n;

    //     if (n>=0){
    //         cout<<"Continue"<<endl;
    //     }else if(n<0){
    //         cout<<"Discontinued becuase -ve value entered"<<endl;

    //         break;
    //     }


    // }


    // task 9


    // int n;

    // cout<<"Enter your number";

    // cin>>n;



    // int count=0;

    // if (n<0){
    //     n=-n;
    // }

    // if (n<=9){

    //     cout<<"The number of entered digits  ;: 1"<<endl;
    // } else if (n>=10){

    //     while(n!=0){

    //         n=n/10;

    //         count=count+1;

    //     }

    //     cout<<"The number of entered digits are: "<<count<<endl;
    // }



    // task 10;


    // int n;

    // cout<<"Enter your number:";

    // cin>>n;

    // int sum=0;

    // if (n<0){
    //     n=-n;
    // }

    // if (n>=10){

    //     while(n!=0){

    //         int remainder=n%10;

    //         sum=sum+ remainder;

    //         n=n/10;


    //     }

    //     cout<<"Sum is :"<<sum<<endl;
    // }


    // task 13

    // int start=100;
    // int sum=0;
    // while(start<=200){

    //     if (start%9==0){

    //         sum=sum+start;
    //     }

    //     start++;
    // }


    // task 14

    // int n;

    // do {


    //     cout<< "1. Continue 2. Exit :";

    //     cin>>n;

    //     if (n==1){
    //         cout<<"Continuing it "<<endl;
    //     }else if(n==2){
    //         cout<<"breaing it"<<endl;
    //         break;
    //     }else if(n!=1 || n!=2){
    //         cout<<"invalid option "<<endl;
    //     }


    // } while(n!=2);


    // task 15

    // int n;

    // do {

    //     cout<<"Enter your number btw 1-10 :";

    //     cin>>n;





    // }while(n<1 || n>10);


    // int n;

    // cout<<"Enter your number:";

    // cin>>n;
    // do {

    //     cout<<"current number:"<<n<<endl;

    //     n=n-1;

    //     if (n==0){
    //         cout<<"Blast off "<<endl;
    //     }

    // }while(n!=0);



    // int count=0;

    // int max=0;
    // int min=-1;
    // float avg;
    // int sum=0;

    // int n;

    // do {

    //     cout<<"Enter your number -1 to terminate :";

    //     cin>>n;

    //     if (n>0){
            
    //         if (count==0){
    //             min=n;
    //         }

    //         if (n>max){
    //             max=n;
    //         }

    //         if (n<min){
    //             min=n;

    //         }

    //         sum=sum+n;
    //         count=count+1;
            
    //     }




    // }while(n!=-1);


    // if (count>0){
    //     avg=sum*1.0/count*1.0;

    // cout<<"Max number is :"<<max<<endl;
    // cout<<"Min number is :"<<min<<endl;
    // cout<<"avg  is :"<<avg<<endl;
    // cout<<"count is :"<<count<<endl;
    // }

    


    // TASK 18


    // int n;

    // cout<<"Enter positive number";

    // cin>>n;

    // while(n<0){
    //     cout<<"Try again enter postive number"<<endl;
    //     cin>>n;
    // }


    // do {

       
    //    cout<<"Enter positive number";
    //    cin>>n;

       
    // }while(n<0);



    // Task 19
    // int result=1;

    // int x;

    // cout<<"Enter your number for which you want to caluate power :";
    // cin>>x;

    // int y;

    // cout<<"Enter you power number like example (5^3) ; asking for ^3 ";

    // cin>>y;

    // for (int i=0; i<y; i++){
    //     result=x*result;

    // }

    // cout<<"Result is :"<<result<<endl;


    // Task 20



    // int rows;

    // cout<<"Enter rows for number pyramid :";

    // cin>>rows;

    // int count=1;

    // for (int i=1 ;i<=rows;i++){
    //     cout<<" ";
    //     for (int j=1; j<=i;j++){
    //         cout<<count<<" ";
    //         count++;
    //     }

    //     cout<<endl;


    // }


    return 0;
}
