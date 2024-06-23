#include<iostream>
using namespace std;
int main(){
    int A[3][3],B[3][3],C[3][3];
    for(int x=0;x<3;x++){
        for(int w=0;w<3;w++){
            cout<<"Input a number:";cin>>A[x][w];
        }
    }
    for(int a=0;a<3;a++){
        for(int b=0;b<3;b++){
            cout<<"Input a number:";cin>>B[a][b];
        }
    }
    for(int c=0;c<3;c++){
        for(int d=0;d<3;d++){
            C[c][d]=A[c][d]+B[c][d];
        }
    }
    for(int c=0;c<3;c++){
        for(int d=0;d<3;d++){
            cout<<C[c][d]<<",";
        }
        cout<<"\n\n";
    }
    return 0;
}