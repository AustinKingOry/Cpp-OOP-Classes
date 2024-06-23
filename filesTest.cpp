#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string fname,sname;
    ofstream myFile;
    cout<<"Enter Your First Name: ";getline(cin,fname);
    cout<<"Enter Your Second Name: ";cin>>sname;
    myFile.open("text.txt");
    if(!myFile.is_open()){
        cout<<"Error: File Is Not Open!"<<endl;
    }
    else{
        myFile<<"Your name is: "<<fname<<" "<<sname<<endl;
    }
    myFile.close();
    cout<<"Code Completed Successfully"<<endl;
    return 0;
}
