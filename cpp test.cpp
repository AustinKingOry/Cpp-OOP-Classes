#include <iostream>
using namespace std;
int main(){
	int a;
	cout <<"My first Program in c++!";
	int x = 10;
	for(int y = 20;y>0;y--){
		cout <<"\n"<< y <<","<< x <<"\n";
	}
	cout <<"Input A Value:\n";
	cin >> a;
	cout << "The New Number is: "<<a+x <<endl;
	if(a>x){
		cout<<a <<" is greater than " <<x <<endl;
	}
	else{
		cout<<x <<" is greater than " <<a <<endl;
	}
	
	cout<<"Code Completed!";
	return 0;
}
