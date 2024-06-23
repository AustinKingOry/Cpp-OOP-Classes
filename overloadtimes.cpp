#include<iostream>
using namespace std;
class Matrix{
    private:
        int x,y;
    public:
        Matrix(){
            x=3;
            y=4;
        }
        Matrix(int a,int b){
            x=a;
            y=b;
        }
        void print(){
            cout<<x<<y<<endl;
        }
        Matrix operator *(Matrix m){
            Matrix m2;
            m2.x=x*m.x;
            m2.y=y*m.y;
            return m2;
        }
};
int main(){
    int i,j;
    cout<<"Input i: ";cin>>i;
    cout<<"Input j: ";cin>>j;
    Matrix ma2;
	Matrix ma3;
    Matrix ma(i,j);
    ma3=ma*ma2;
    ma3.print();
    return 0;
}