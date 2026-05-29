#include<iostream>
using namespace std;
int main(){
    int rem,num,rev=0;
    cout<<"enter the number:";
    cin>>num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;

        cout<<"the reverse of the number- "<<rev;
    }
     return 0;


}
