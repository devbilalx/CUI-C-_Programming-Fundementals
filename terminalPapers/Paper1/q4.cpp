#include <iostream>
#include <math.h>

using namespace std;

float straight(float m, float x, float c);

void quadratic(float a,float b,float c);
int main()
{

    char operation;

    cout<<"Enter q for queatratic opertation and s for straight line :";

    cin>>operation;

    if (operation=='q' || operation=='Q'){

        float a,b,c;

        cout<<"Enter your value for a:";

        cin>>a;

        cout<<"Enter your value for b";

        cin>>b;

        cout<<"Enter your value for c";

        cin>>c;

        quadratic(a,b,c);
    }else if(operation=='s'|| operation == 'S'){


        float m; float x; float c;
        cout<<"Enter your value for m:";

        cin>>m;

        cout<<"Enter your value for x";

        cin>>x;

        cout<<"Enter your value for c";

        cin>>c;


        float ans;



        ans=straight(m,x,c);

        cout<<"Y is :"<<ans<<endl;
    }else {

        cout<<"Invalid operation :"<<endl;
    }
    /* code */
    return 0;
}

void quadratic(float a,float b,float c){

    float x1=(-b+(sqrt(b*b-4*a*c)))/(2*a);

    float x2=(-b-(sqrt(b*b-4*a*c)))/(2*a);

    cout<<"x1 value is :"<<x1<<" x2 value is :"<<x2<<endl;
}


float straight(float m,float x,float c){




    float y=m*x+c;

    return y;

    
}