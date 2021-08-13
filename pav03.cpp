#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class marksheet{
    int s1,s2,s3;
    float avg;
    public:
        void setValues(int,int,int);
        float average();
        void display();
        char getGrade(float);
        int input(int);
};
int marksheet::input(int n){
    int a;
    cout<<"Enter Subject-"<<n<<" Marks: ";
    cin>>a;
    if(a<0 || a>100){
        cout<<"Wrong input!"<<endl;
        cout<<"Please try again."<<endl;
        input(n);
    }
    else{
        return a;
    }
}
char marksheet::getGrade(float a){
    char grade;
    if(a>=90 && a<=100){
        return grade = 'A';
    }
    else if(a>=80 && a<90){
        return grade = 'B';
    }
    else if(a>=70 && a<80){
        return grade = 'C';
    }
    else if(a>=60 && a<70){
        return grade = 'D';
    }
    else if(a>=50 && a<60){
        return grade = 'E';
    }
    else if(a>=40 && a<50){
        return grade = 'P';
    }
    else if(a>=0 && a<40){
        return grade = 'F';
    }
} 
void marksheet::setValues(int a,int b,int c){
    s1=a;
    s2=b;
    s3=c;
}
float marksheet::average(){
    float a;
    a = (s1+s2+s3)/3;
    return a;
}
void marksheet::display(){
    system("CLS");
    cout<<"Subject-1 Marks = "<<s1<<endl;
    cout<<"Subject-1 Marks = "<<s2<<endl;
    cout<<"Subject-1 Marks = "<<s3<<endl;
}

int main(){
    marksheet m;
    int a,b,c;
    float avg;
    char grade;
    system("CLS");
    a = m.input(1);
    b = m.input(2);
    c = m.input(3);
    m.setValues(a,b,c);
    avg = m.average();
    m.display();
    cout<<"Average is "<<avg<<endl;
    grade = m.getGrade(avg);
    cout<<"Grade: "<<grade<<endl;
    return 0;
}