#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a = 12;
    int b = 88;
    int c = 7;
    float d = b*b - 4*a*c;
    if(d>0){
        int x1 = (-b + sqrt(d))/2*a;
        int x2 = (-b - sqrt(d))/2*a;
        cout<<x1<<" "<<x2<<endl;
    }
    else if (d=0){
        float x = -b/2*a;
        cout<<"unique element "<<x;
    }
    else{
        cout<<"this is not a real number";
    }
    {
        /* code */
    }
    
}