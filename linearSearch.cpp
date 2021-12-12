#include <iostream>
using namespace std;
int main (){
    int arr[5];
    int i=0, j, value=0;
    int nextAvailableSlot=i+1;
    cout<<"***INSERTION OF ARRAY***"<<endl;
    for(j=0; j<5; j++){
        cout<<"Enter the value for ["<<j+1<<"]: "<<endl;
        cin>>arr[j];
    }
    cout<<"***LINEAR SEARCH***"<<endl;
    cout<<"Enter the value you want to search: "<<endl;
    cin>>value;
    for(i=0; i<5; i++){
        if(arr[i]==value){
            cout<<"LOC= "<<i+1<<endl;
            break;
        }
        nextAvailableSlot++;
    }
    if (nextAvailableSlot ==i){
        cout<<"LOC= 0"<<endl;
    }
    return 0;
}
