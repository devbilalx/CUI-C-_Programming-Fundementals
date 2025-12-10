#include <iostream>

#include <cmath>

using namespace std;

float sum(int arr[], int s){

    float sum=0;

    for (int i=0 ;i<=s-1; i++){


        sum=sum+arr[i];
    }

    return sum;




}


void standard(int arr[],int s){



    float s_deviation= 0;

    float obtained=sum(arr,s);

    float avg=obtained/s;


	
	for(int i = 0; i<=s-1;i++)
	{
		s_deviation = s_deviation + (arr[i]-avg) * (arr[i]-avg);
	}
	s_deviation = s_deviation/s;
	s_deviation = sqrt(s_deviation);
	
	cout<<"Sd :"<<s_deviation<<endl;






}





void minimum(int arr[],int s){


    int min=arr[0];

    for(int i=0; i<=s-1; i++){

        if (arr[i]<min){

            min=arr[i];
        }
    }

    cout<<"The minimum is :"<<min<<endl;
}

void maximum(int arr[],int s){


    int max;

    max=arr[0];

    for(int i=0; i<=s-1; i++){

        if (arr[i]>max){

            max=arr[i];
        }
    }

    cout<<"The maximum value is :"<<max<<endl;
}



void average(int arr[], int s){

    float avg;


    float obtained=sum(arr,s);


    avg=((obtained)/(s));


    cout<<"average:"<<avg<<endl;






}





int main(){

    int s;

    cout<<"Enter your array size :";

    cin>>s;


    int arr[s];

    for(int i=0 ; i<=s-1 ;i++){


        int y;

        cout<<"Enter your number :";

        cin>>y;

        arr[i]=y;
    }

    int op;

    cout<<"Enter your opertaion to perform \n 1  sum \n  \n 2 Maximum \n 3 for Minimum \n 4 Standard Devation  \n 5 Average out of 10:";

    cin>>op;


    switch ((op)){
    {
    case 1:

    float obtained=sum(arr,s);

    cout<<"Your sum is : "<<obtained<<endl;
    }

    break;


    case 2:

    maximum(arr,s);


    break;

    case 3:

    minimum(arr,s);

    break;

    case 4:

    standard(arr,s);

    break;

    case 5:

    average(arr,s);

    break;

    default:


    cout<<"Invalid integer endtered ";


        break;
    }



    return 0;
}

