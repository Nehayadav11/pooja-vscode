#include<iostream>
using namespace std;
        int main(){ 
            int choice;
            cin>>choice;
        
        switch(choice){
            case 1: 
                cout<<"area of circle with radius R";
                break;
            
            case 2:
                cout<<"area of rectangle with length L";
                break;
            
            default:
            cout<<"invalid";
        }
        cout<<"check";
        return 0;
    
        }