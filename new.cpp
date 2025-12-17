    #include <iostream>

    using namespace std;

    float s_line(float m, float x, float c);
float q_line(float a, float x, float b, float c);

    int main()
    {


        /* code */
        
        
        float xi, m=6, c=2 ,a=2 ,b=2; 

        cout<<"Enter your intital value :";

        cin>>xi;

        float xf;


        cout<<"Enter your final value :";

        cin>>xf;


        float diff;

        cout<<"Enter your differerce :";

        cin>>diff;


        int size=((xf-xi)/diff)+1;


        float x[size], y[size], z[size];


        float intital=xi;


        for(int i=0 ;i<=size-1; i++){

            x[i]=intital;


            y[i]=s_line(m,x[i],c);

            z[i]=q_line(a,x[i],b,c);


            intital=intital+diff;
        }












        return 0;
    }



    float s_line(float m , float x, float c){

        float y=m*x+c;

        return y;

    }

    float q_line(float a,float x, float b, float c){

        float y=(a*x*x) +(b*x) +c;


        return y;


    }