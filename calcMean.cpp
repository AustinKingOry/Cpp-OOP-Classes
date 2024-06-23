#include<iostream>
using namespace std;
class values{
private:
    int score1,score2,score3;
    float mean;
public:
    float calcmean();
};
float values::calcmean(){
    cout<<"Input score 1";cin>>score1;
    cout<<"Input score 2";cin>>score2;
    cout<<"Input score 3";cin>>score3;
    mean=(score1+score2+score3)/3;
    cout<<"Mean:"<<mean<<endl;
}
int main(){
    values objs[5];
    for(int j=0;j<sizeof(objs);j++){
        objs[j].calcmean();
    }
    return 0;
}