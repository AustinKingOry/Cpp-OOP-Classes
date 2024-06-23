#include<iostream>
using namespace std;
class cylinder{
	private:
		int r,h;
		float volume;
	public:
		cylinder(){
			r=14;
			h=67;
		}
	void get_volume(){
		volume = (3.14*r*r)*h;
		cout<<"Volume:"<<volume<<endl;
	}
};
int main(){
	cylinder C;
	C.get_volume();
	return 0;
}
