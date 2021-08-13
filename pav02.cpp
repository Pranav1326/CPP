#include<iostream>
#include<conio.h>
using namespace std;
class calc{
    float p,r,n;
    public:
        void setValues(float, float, float);
        float interest();
};
void calc::setValues(float a,float b, float c){
    p=a;
    r=b;
    n=c;
}
float calc::interest(){
    float a;
    a = (p*r*n)/100;
    return a;
}
int main(){
    calc c;
    float i,p,r,n;
    system("CLS");
    cout<<"Enter Price: ";
    cin>>p;
    cout<<"Enter Rate: ";
    cin>>r;
    cout<<"Enter Time: ";
    cin>>n;
    c.setValues(p,r,n);
    i = c.interest();
    cout<<i<<endl;
    return 0;
}