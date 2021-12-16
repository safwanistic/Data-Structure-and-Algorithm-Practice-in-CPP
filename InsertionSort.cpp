#include <iostream>
using namespace std;
int main(){
    int arr1[8]= {2,45,3,8,23,47,5,23};
    int i, j,n=8, key;
    for (i=1; i<n;i++){
        key=arr1[i];
        j=i-1;
        while(j>=0 && arr1[j]>key){
            arr1[j+1]= arr1[j];
            j=j-1;
        }
        arr1[j+1]=key;
    }


    for (int k=0; k<8; k++){
        cout<<"Element #"<<k+1<<" = "<<arr1[k]<<endl;
    }
}
