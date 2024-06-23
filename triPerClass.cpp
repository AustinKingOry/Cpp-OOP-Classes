#include<iostream>
#include<string>
using namespace std;
class RightTriangle{
    private:
        int ba,he,hy,per;
        string name;
    public:
        RightTriangle();
        ~RightTriangle();
        void getPer(){
            per=ba+he+hy;
            cout<<"Perimeter:"<<per<<endl;
        }
};
RightTriangle::RightTriangle(){
    // cout<<"Input Your Name:";cin>>name;
    cout<<"Input Your Name:";getline(cin,name);
    cout<<"Input Base:";cin>>ba;
    cout<<"Input Height:";cin>>he;
    cout<<"Input Hypotenuese:";cin>>hy;
}
RightTriangle::~RightTriangle(){
    cout<<"Your Name:"<<name<<endl;
}
int main(int argc, char const *argv[]){
    RightTriangle t;
    t.getPer();
    return 0;
}
