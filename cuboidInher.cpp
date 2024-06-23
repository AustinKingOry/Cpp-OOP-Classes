#include<iostream>
using namespace std;
#define pi 3.142
class cuboid{
    protected:
        int w,l,h;
    public:
        int setvalues(int wi,int le,int he){
            h=he;
            w=wi;
            l=le;
        }
        // float volume(){
        //     return l*w*h;
        // }
        virtual float volume()=0;
        // ~cuboid();
};
class hollow:public cuboid{
private:
    float r = w/2;
public:
    float volume(){
        return ((pi*r*r)*h);
    }
};
class remaining:public cuboid{
private:
    float r = w/2;
public:
    float volume(){
        return (l*w*h)-((pi*r*r)*h);
    }
};
// cuboid::~cuboid(){
//     cout<<"cuboid destructor"<<endl;
// }
int main(){
    // cuboid cu;
    hollow ho;
    remaining re;
    cuboid*cuA=&ho;
    cuboid*cuB=&re;
    // cu.setvalues(20,40,20);
    cuA->setvalues(20,40,20);
    cuB->setvalues(20,40,20);
    cout<<"Hollow Volume:"<<cuA->volume()<<endl;
    cout<<"Remaining Volume:"<<cuB->volume()<<endl;
    // cout<<"Cuboid Volume:"<<cu.volume()<<endl;
    return 0;
}
