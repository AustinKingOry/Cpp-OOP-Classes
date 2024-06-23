#include<iostream>
using namespace std;
class trapezium{
private:
    int a=14,b=8,h=9;
    float area;
    friend void calcarea(trapezium &trap);
};
void calcarea(trapezium &trap){
    trap.area=0.5*(trap.a+trap.b)*trap.h;
    cout<<"Area of trapezium: "<<trap.area<<endl;
}
int main(){
    trapezium trap;
    calcarea(trap);
    return 0;
}