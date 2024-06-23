#include <iostream>
using namespace std;
class Complex{
    private:
        int x,y;
    public:
        Complex(){
            x=0;
            y=0;
        }
        Complex(int a,int b){
            x=a;
            y=b;
        }
        void print(){
            cout<<"Result is: "<< x <<" + " << y <<"i"<<endl;
        }
        Complex operator +(Complex f){
            Complex temp;
            temp.x=x+f.x;
            temp.y=y+f.y;
            return temp;
        }
};
int main(){
    Complex f1(2,3);
    Complex f2(3,4);
    // Complex f3(2,3);
    // Complex f4=f1+f2+f3;
    Complex f4;
    f4=f1+f2;
    f4.print();
    return 0;
}
