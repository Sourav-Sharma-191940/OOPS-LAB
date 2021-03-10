// Program 4:- WAP to show that the effect of default arguments can be alternatively achieved by overloading.

#include <iostream>
#include <cmath>
using namespace std;
float power(float a, int b){
    float res = 1.0;
    for(; b>0; b--)
    res= a*res;
    return res;
}
float power(float a, float b){
    float res = 1.0;
    for(; b>0; b--)
    res= a*res;
    return res;
}
 float power(int a, int b){
    int res = 1;
    for(; b>0; b--)
    res= a*res;
    return res;
}
float power(int a, float b){
    float res = 1.0;
    for(; b>0; b--)
    res= a*res;
    return res;
}
void display(float data)
{
    cout<<"\nYour Answer is = "<<data<<endl<<endl;
}
int main(){
    float a, b;
    cout<<"\nEnter the value of base ";
    cin>>a;
     cout<<"\nEnter the value of power ";
    cin>>b;

     float power = pow(a, b);
    display(power);
    
}

