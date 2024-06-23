#include<iostream>
using namespace std;
class triangle
{
    private:
        int b,h;
        float area;
    public:
        triangle(int ba,int he){
            b=ba;
            h=he;
        }
    void getarea(){
        area=0.5*b*h;
        cout<< "Area of triangle:" << area;
    }
};

int main()
{
    double triArea;
    triangle tri(45,14);
    return 0;
}
