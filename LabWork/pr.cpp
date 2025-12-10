#include <iostream>

using namespace std;

#include <cmath>

int main()
{
    
//     int size;


//     cout<<"Enter your array size:";

//     cin>>size;


//     int z[size];

//     for (int i=0 ; i<=size-1; i++){

//         int num;

//         cout<<"Enter your number :";

//         cin>>num;

//         z[i]=num;
//     }

//     int sum=0;
//     float avg;


//     for (int i=0 ;i<size-1;i++){

//         for (int j=0+i ;j<size; j++){

//             if (z[i]<z[j]){

//                 int temp = z[i];

//                 z[i]=z[j];

//                 z[j]=temp;
//             }
//         }

//     }
//     int max=0;
//     int min=0;


//     for (int i=0 ;i<=size-1; i++){
//         sum=sum+ z[i];
//     }

//     max=z[0];
//     min=z[size-1];

//     int operation;

//     cout<<"Enter you opertaion :";

//     cin>>operation;

//     float sd=0;

//     avg=sum*1.0/size;


//     switch(operation){


//         case 0:

//         cout<<"Sum is :"<<sum;

//         break;

//         case 1:

//         cout<<"Average is :"<<avg;
        
//         break;

//         case 2:

//         cout<<"Max value is :"<<max;

//         break;

//         case 3: 

//         cout<<"Min value is :"<<min;

//         break;

//         case 4:

//         cout<<"Percentage out of 10 is :";

        

//         cout<<(sum*1.0/(size*10.0)*100.0);
//         break;


//         case 5:

//         for (int i=0; i<=size-1;i++){

//             avg=(sum*1.0)/size;
//             sd=sd + (z[i]-avg)*(z[i]-avg);

//         }

//         sd=sd/size;

//         sd=sqrt(sd);

//         cout<<"Standar devation ans :"<<sd;

//         break;

//         default :

//         cout<<"Incorrect operation entered ";


//     


   
//    int y=1;

//    while(y==1){
//     int fact =1;

//    int num;

//    cout<<"Enter you number for factorial :";

//    cin>>num;



//    if (num<0){

//     num=-num;
//    }


    

//     y=0;

//     if (num==0){
//         cout<<"Factorial is :0";
//         break;
//     }

//     for (int i=1 ;i<=num; i++){

//         fact=fact*i;

//     }

//     cout<<"Factorial is : "<<fact<<endl;

//     cout<<endl;

//     int cont;

//     cout<<"Do you want to play again? press 1 else any key to discontinue :";


//     cin>>cont;

//     if(cont==1){
//         y=1;
//     }else{
//         y=0;
//     }
//    }


     
    

//     int choice;

//     cout<<"Enter 1 for straight line and 2 for Quadractic Equations  :"<<endl;

//     cin>>choice;


//     if (choice==1){


//         float m,x,c;

//         cout<<"Enter value for slope:";
//         cin>>m;

//         cout<<"Enter value for x:";

//         cin>>x;

//         cout<<"Enter value for y-intercept:";

//         cin>>c;

//         float y;

//         y=(m*x)+c;


//         cout<<"Result of y is:"<<y;


//     }else if (choice==2){


//         float b,a,c;


//         cout<<"Enter value for b :";

//         cin>>b;

//         cout<<"Enter value for a :";

//         cin>>a;

//         cout<<"Enter value for c";

//         cin>>c;

//         float dit= (b*b)-4*a*c;

//         if (dit>0){


//             float root1=(-b +sqrt(dit))/(2*a);

//             float root2= (-b- sqrt(dit))/(2*a);
//         }


//     }





    char operation;

    cout<<"Enter operation ( +, - , *, / ,s for square, f for factorial  )";

    cin>>operation;
    

    switch (operation){

        case '+':

        case '-':

        case '*':

        case '/':


        int num1,num2;

        cout<<"Enter your num1 :";

        cin>>num1;

        cout<<"Enter your num2 :";

        cin>>num2;


        if (operation=='+'){

            cout<<"Result :"<<num1+num2;

        }else if (operation=='-'){

            cout<<"Result :"<<num1-num2;


        }else if (operation=='*'){

            cout<<"Result :"<<num1*num2;


        }else if (operation=='/'){

            cout<<"Result :"<<num1*1.0/num2*1.0;


        }

        break;

        case 's':

        int square;

        cout<<"Enter number for square :";


        cin>>square;

        cout<<"Result :"<<sqrt(square);

        break;


        case 'f':

        int num;

        cout<<"Enter number for factorial :";

        cin>>num;

        int fact=1;


        for (int i=1 ;i<=num ;i++){

            fact=fact*i;

        }

        cout<<"Result of factorial is :"<<fact;

        break;
    }


    

    


    return 0;
}
