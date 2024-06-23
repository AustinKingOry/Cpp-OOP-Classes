#include<iostream>
#include<fstream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main(){
    ofstream passFile,passFileWeb;
	srand(98);
    int passlength,amount;
    string password;
    char passCombined[55]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','@','#','%','^','&','*','(',')','_','-','+','=','{','}','|','/','?','<','>','0','1','2','3','4','5','6','7','8','9'};
    passFile.open("passwords.txt");
    passFileWeb.open("passwords.html");
    if(!passFile.is_open()){
        cout<<"Error: File 'passwords.txt' is not open!"<<endl;
    }
    else{
        if(!passFileWeb.is_open()){
            cout<<"Error: File 'passwords.html' is not open!"<<endl;
        }
        else{
            cout<<"Enter the size of the passwords: ";cin>>passlength;
            cout<<"Enter the number of passwords that you'd like: ";cin>>amount;
            //loop for the txt file
            for(int x=0;x<amount;x++){
                for(int j=0;j<passlength;j++){
                    int rannum=rand()%55;
                    password+=passCombined[rannum];    		
                }
                passFile<<x+1<<". Password "<<x+1<<" is: \t"<<password<<"\n";
                password="";
            }
            passFile<<"Completed";
            //loop for the html file
            passFileWeb<<"<!DOCTYPE html>"<<endl<<"<html>"<<endl<<"<head>"<<endl<<"<title>Passwords</title>"<<endl<<"</head>"<<endl;
            passFileWeb<<"<body>"<<endl<<"<h1>"<<amount<<" Passwords (Autogenerated)</h1><br>"<<endl;
            for(int x=0;x<amount;x++){
                for(int j=0;j<passlength;j++){
                    int rannum=rand()%55;
                    password+=passCombined[rannum];    		
                }
                passFileWeb<<"<h3>"<<x+1<<". Password "<<x+1<<" is: "<<password<<"</h3><br>"<<endl;
                password="";
            }
            passFileWeb<<"<br>"<<endl<<"<span>Completed</span>"<<endl<<"</body>"<<endl<<"</html>";
        }
    }
    passFile.close();
    passFileWeb.close();
    return 0;
}
