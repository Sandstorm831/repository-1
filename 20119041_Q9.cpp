#include<iostream>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cout<<"enter your first coordinate \n";
    cin>>x1>>y1;
    cout<<"enter your second coordinate \n";
    cin>>x2>>y2;
    cout<<"enter your third coordinate \n";
    cin>>x3>>y4;
    cout<<"enter the coordinate which is to be measured \n";
    cin>>x4>>y4;

    float a1,a2,a3,a4;
    a1=0.5*(x1*(y2-y4)+x2*(y4-y1)+x4*(y1-y2));
    a2=0.5*(x2*(y4-y3)+x3*(y2-y4)+x4*(y3-y2));
    a3=0.5*(x1*(y3-y4)+x3*(y4-y1)+x4*(y1-y3));
    a4=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));

    if(a1<0){
        a1=a1*(-1);

    }
    if(a2<0){
        a2=a2*(-1);

    }
    if(a3<0){
        a3=a3*(-1);

    }
    if(a4<0){
        a4=a4*(-1);

    }


    if (a4==a1+a2+a3)
    {
        if((a1==0)||(a2==0)||(a3==0))
        cout<<"\n point is situated on the sides 0f triangle ";
        else
        cout<<"\n point is situated inside the triangle ";


    }
    else{

        cout<<"\n point is situated outside the triangle";

    }
    return 0;
}
