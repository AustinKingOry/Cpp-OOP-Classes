#include <iostream>
using namespace std;

int main() {
    int ages[5],price;
    float final;
	price = 50;
    for (int i = 0; i < 5; ++i) {
    	cout<< "input 5 ages:";
        cin >> ages[i];
    }
    cout<<ages[0]*0.01<<endl;
    
    //your code goes here
        if(ages[0]<=ages[1] && ages[0]<=ages[2] && ages[0]<=ages[3] && ages[0]<=ages[4]){
            final = price-(50*ages[0]*0.01);
            cout <<final;
        }
        else if(ages[1]<=ages[0]&&ages[1]<=ages[2]&&ages[1]<=ages[3]&&ages[1]<=ages[4]){
            final = price-(50*ages[1]*0.01);
            cout <<final;
        } 
        else if(ages[2]<=ages[1]&&ages[2]<=ages[0]&&ages[2]<=ages[3]&&ages[2]<=ages[4]){
            final = price-(50*ages[2]*0.01);
            cout <<final;
        }
    else if(ages[3]<=ages[1]&&ages[3]<=ages[2]&&ages[3]<=ages[0]&&ages[3]<=ages[4]){
           final = price-(50*ages[3]*0.01);
           cout <<final;
        }
    else if(ages[0]<=ages[1]&&ages[0]<=ages[2]&&ages[4]<=ages[3]&&ages[4]<=ages[0]){
            final = price-(50*ages[4]*0.01);
            cout <<final;
        }
    return 0;
}
