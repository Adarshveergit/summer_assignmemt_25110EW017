#include<iostream>
using namespace std;
int main(){
    int fact=1,num,i;
    cout<<"Enter the number = ";
    cin>>num;
    if (num==0){ 
    cout<<"factorial = 1"<<endl;
    }
    else
    {
        for( i=1;i<num;i++)
        fact=num*i;
        cout<<"Factorial = "<<fact;
    }
     return 0;
}
