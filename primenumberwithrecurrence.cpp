// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

// void isprime(int a){
//     for(int i=2;i<(a/2)+1;i++){
//         if(i%a==0){
//             flag=false;
//         }
//     }
// }
bool isprime(int val,int a=2,int flag=true){

    if(flag && a<(val/2)+1){
        if(val%a==0){
            flag=false;
        }
        else{
            isprime(val,a+1,true);
        }
    }
    if(flag==false){
        return true;
    }
    else if(flag==true){
        return false;
    }
}

void prime(int a,int b){
    if(a<b){
        prime(a+1,b);
    }
}

int main() {
    // Write C++ code here
    prime(0,10);
    if(isprime(13)){
        cout<<"This is not prime number";
    }
    else{
        cout<<"This is  prime number";
    }
}