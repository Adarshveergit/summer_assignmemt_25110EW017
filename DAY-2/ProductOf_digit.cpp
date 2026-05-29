#include<iostream>
using namespace std;
int main(){
    int num ,rem, product=1;
    cout<<"enter the number :";
    cin>>num;
    while(num!=0){
        rem=num%10;
        product=product*rem;
        num=num/10;

    }
    cout<<"the product of the digit is:- "<<product;
    return 0;
}