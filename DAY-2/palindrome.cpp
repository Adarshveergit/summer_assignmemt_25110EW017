#include<iostream>
using namespace std;
int main(){
    int rev=0,rem,num,n1;
    cout<<"Enter the number: ";
    cin>>num;
    n1=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    
            if(rev==n1){ 
                cout<<"palindrome";
            }
            else
            cout<<"not palindrome";
    
    return 0;
}