#include<iostream>
using namespace std;
int main(){
    int l,w,r;
    float shaded_area,pi;
    l = 25;
    w = 20;
    r = 10;
    pi = 3.14;
    shaded_area = (l*w)-(pi*r*r);
    cout<<"Shaded Area: "<<shaded_area<<endl;
    return 0;
}
