#include<iostream>
using namespace std;
class Employees{
    protected:
        int rate;
    public:
        int set(int r){
            rate=r;
        }
        virtual int honoraria()=0;
};
class Manager:public Employees{
    public:
        int honoraria(){
            return rate*8;
        }
};
class Operator:public Employees{
    public:
        int honoraria(){
            return rate*2;
        }
};
int main(int argc, char const *argv[])
{
    Manager m;
    Operator o;
    Employees *em1=&m;
    Employees *em2=&o;
    em1->set(3000);
    em2->set(1000);
    cout<<"Manager: "<<m.honoraria()<<endl;
    cout<<"Operator: "<<o.honoraria()<<endl;
    return 0;
}
