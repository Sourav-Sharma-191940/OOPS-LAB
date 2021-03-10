// Program 4:- WAP to show that the effect of default arguments can be alternatively achieved by overloading.

#include <iostream>
#include <cmath>
using namespace std;

float power(float a, float b){
    return pow(a, b);
}
float power(float a){
     int b = 2;
     return pow(a, b);
}
void display(float data)
{
    cout<<" = "<<data;
}
int main(){
    float a, b, result, res_default;
    cout<<"\nEnter the value of base ";
    cin>>a;
     cout<<"\nEnter the value of power ";
    cin>>b;
     cout<<"\nYour result is ";
    result= power(a, b);
    display(result);
    cout<<"\nResult with default power value(2) ";
    res_default= power(a);
    display(res_default);
    return 0;
}

