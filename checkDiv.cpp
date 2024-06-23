#include<iostream>
using namespace std;
class values{
    private:
        int a,b;
        float ans;
        string msg;
    public:
        string checkDiv(int x,int y){
            a=x;
            b=y;
            ans=a%b;
            if(ans==0){
                msg="Divisible";
            }
            else if(ans!=0){
                msg="Not Divisible";
            }
            return msg;
        }
};
int main(){
    values ob1,ob2;
    cout<<ob1.checkDiv(16,4)<<endl;
    cout<<ob1.checkDiv(17,5)<<endl;
    return 0;
}