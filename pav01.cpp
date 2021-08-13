#include<iostream>
#include<conio.h>
using namespace std;
class number{
    int a,b,c;
    public:
        void setValues(int,int,int);
        void printMax();
        void printMin();
};
void number::setValues(int x,int y,int z){
    a=x;
    b=y;
    c=z;
}
void number::printMax(){
    if(a>b && a>c){
        cout<<"Max is "<<a<<endl;
    }
    if(b>a && b>c){
        cout<<"Max is "<<b<<endl;
    }
    if(c>a && c>b){
        cout<<"Max is "<<c<<endl;
    }
}
void number::printMin(){
    if(a<b && a<c){
        cout<<"Min is "<<a<<endl;
    }
    if(b<a && b<c){
        cout<<"Min is "<<b<<endl;
    }
    if(c<a && c<b){
        cout<<"Min is "<<c<<endl;
    }
}
int main(){
    system("CLS");
    number n;
    int a,b,c;
    cout<<"Enter number-1 Value: ";
    cin>>a;
    cout<<"Enter number-2 Value: ";
    cin>>b;
    cout<<"Enter number-3 Value: ";
    cin>>c;
    n.setValues(a,b,c);
    n.printMax();
    n.printMin();
    return 0;
}