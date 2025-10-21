#include <iostream>

using namespace std;

int main()
{

    int number;
    int count=0;
    int max=0;
    int min;
    int sum=0;
    float avg=0.0;
    while(1){

        cout<<"Please enter your number:";
        cin>>number;

        if(number==-1){
            break;
        }else if(number>=0){

            if (count==0){
                min=number;
            }

            if (number>max){
                max=number;
            }

            if (number<min){
                min=number;
            }
            sum=sum+number;

            count=count+1;
        }
        
    }


    if (count>0){
        avg=(sum*1.0)/count;
        cout << "Numbers entered: " << count << endl;
        cout << "Maximum number: " << max << endl;
        cout << "Minimum number: " << min << endl;
        cout << "Average of numbers: " << avg << endl;
    }


    return 0;
}
