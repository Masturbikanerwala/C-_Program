#include<iostream>
using namespace std;

int main(){
    int marks;

    cout<<"Enter your marks :";
    cin>>marks;

    if(marks>=90 && marks<=100){
        cout<<"A Grade";
    }
    else if (marks>=80 && marks<90)
    {
        cout<<"B Grade";
    }
    else if (marks>=70 && marks<80)
    {
        cout<<"C Grade";
    }
    else if (marks>=60 && marks<70)
    {
        cout<<"D Grade";
    }
    else{
        cout<<"BETTER PERFORMANCE NEXT TIME";
    }
    
}