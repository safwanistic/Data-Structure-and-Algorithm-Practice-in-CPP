#include <iostream>
using namespace std;
int main(){
    int arr1[8]= {2,45,3,8,23,47,5,23};
    int i=0, j=0, n=8;
    for (i=0;i<(n-1);i++){
        for (j=0;j<((n-i)-1);j++){
            if (arr1[j]>arr1[j+1]){
                swap(arr1[j],arr1[j+1]);
            }
        }
    }
    for (int k=0; k<8; k++){
        cout<<"Element #"<<k+1<<" = "<<arr1[k]<<endl;
    }
    return 0;
}
