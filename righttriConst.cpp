#include<iostream>
#include<cmath>
using namespace std;
class Triangle{
    private:
        int b,h;
    public:
        Triangle(int,int);
        float diag(void){
            return(sqrt((b*b)+(h*h)));
        }
        ~Triangle();
};

Triangle::Triangle(int a,int ba){
    b=a;
    h=ba;
}

Triangle::~Triangle(){
    cout<<"Destructor"<<endl;
}
int main(){
    Triangle tri(12,5);
    cout<<"The third side is:"<<tri.diag()<<"cm"<<endl;
    return 0;
}
