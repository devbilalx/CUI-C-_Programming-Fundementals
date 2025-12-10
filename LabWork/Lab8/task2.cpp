#include <iostream>

#include <cmath>

using namespace std;

int sum(int n[], int size);

void percentage(int n[],int size);


void max(int n[],int size);

void min(int n[],int size);

void sd(int n[],int size);

void average(int n[], int size);



int main(){

    int size;

    cout<<"Enter your array size :";

    cin>>size;


    int arr[size];

    for(int i=0 ; i<=size-1 ;i++){


        int value;

        cout<<"Enter your value :";

        cin>>value;

        arr[i]=value;
    }

    char opertaion;

    cout<<"Enter your opertaion to perform s for sum p for percentage m for maximum n for for minimum d for standard devation  a for average out of 10:";

    cin>>opertaion;

    int total;

    switch ((opertaion))
    {
    
    case 's':

    total=sum(arr,size);

    cout<<"Your sum is : "<<total<<endl;
    

    break;

    case 'p':

    percentage(arr,size);

    break;



    case 'm':

    max(arr,size);


    break;

    case 'n':

    min(arr,size);

    break;

    case 'd':

    sd(arr,size);

    break;

    case 'a':

    average(arr,size);

    break;

    default:


    cout<<"Invalid operation ";


        break;
    }



    return 0;
}


int sum(int n[], int size){

    int sum=0;

    for (int i=0 ;i<=size-1; i++){


        sum=sum+n[i];
    }

    return sum;


}



void max(int n[],int size){


    int max;

    for(int i=0; i<=size-1; i++){

        if (i==0){
            max=n[i];
        }

        if (n[i]>max){

            max=n[i];
        }
    }

    cout<<"The maximum value is :"<<max<<endl;
}


void min(int n[],int size){


    int min;

    for(int i=0; i<=size-1; i++){

        if (i==0){
            min=n[i];
        }

        if (n[i]<min){

            min=n[i];
        }
    }

    cout<<"The minimum value is :"<<min<<endl;
}

void sd(int n[],int size){



    float sd = 0;

    int total=sum(n,size);

    float avg=total*1.0/size;


	
	for(int i = 0; i<=size-1;i++)
	{
		sd = sd + (n[i]-avg) * (n[i]-avg);
	}
	sd = sd/size;
	sd = sqrt(sd);
	
	cout<<"Standard deviation is :"<<sd<<endl;






}


void average(int n[], int size){

    float avg;


    int total=sum(n,size);


    avg=((total*1.0)/(size));


    cout<<"Your average is :"<<avg<<endl;






}

void percentage(int n[],int size){

    int total=sum(n,size);

    float per;


    for (int i=0; i<=size-1 ;i++){


        per=n[i]*0.10;

        cout<<"10 percnt is :"<<per<<endl;
    }


   
}