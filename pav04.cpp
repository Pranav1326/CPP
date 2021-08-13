#include<iostream>
#include<conio.h>
using namespace std;
class number{
    int n;
    public:
        void setValue(int);
        int find();
};
void number::setValue(int a){
    n=a;
}
int number::find(){
    int x;
    if(n%2  == 0){
        x = 1;
    }
    else{
        x = 0;
    }
    return x;
}
int main(){
    number n;
    int a,ans;
    system("CLS");
    cout<<"Enter a number: ";
    cin>>a;
    n.setValue(a);
    ans = n.find();
    if(ans == 1){
        cout<<n<<" is even"<<endl;
    }
    else{
        cout<<n<<" is odd"<<endl;
    }
    getch();
    return 0;
}