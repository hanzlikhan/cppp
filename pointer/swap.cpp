// swap the two variable by using pointer 
#include <iostream>
using namespace std;
void swap(int *x,int *y){
 int temp = *x;
 *x=*y;
 *y= temp;
}
int main(){
    int x=10;
    int y= 20;
    // using pointer for refrence 
    int *ptrx = &x;    //make pointer for save address x
    int *ptry = &y;
    swap(ptrx,ptry);
    cout<<x<<" "<<y;
}

