#include<iostream>
using namespace std;

int linear_search(int arr[], int n,int key){

    for(int i=0; i<n; i++){

        if (arr[i]==key){

            return i;
        }
    }
     
            return -1;
        
    }

    int main(){

        int arr[]= {10,79,39,57,52,43};
        int n= sizeof(arr)/sizeof(int);

        int key;
        cin>>key;
        
        int index= linear_search(arr,n,key);
            if (index!=-1){
                cout<<key<<"key is present"<<endl;
            }
            else{
                cout<<key<<"key not found"<<endl;
            }
 
    
    
    return 0;
    }