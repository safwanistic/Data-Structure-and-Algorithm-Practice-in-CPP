#include <iostream>
#define MAX_SIZE 5
using namespace std;
int main(){
    int arr[MAX_SIZE];
    int i=0, j=0, value=0, mid=0;
    int low=0, high=MAX_SIZE;
    for (i=0; i<MAX_SIZE; i++){
        cout<<"Enter the value for ["<<i+1<<"]: "<<endl;
        cin>>arr[i];
    }
    cout<<"Enter the value you want to search: "<<endl;
    cin>>value;
    do{
        mid= (low+high)/2;
        if (arr[mid]==value){
            cout<<mid<<endl;
        }
        else if (arr[mid] < value){
            low = mid + 1;
        }
        else{
            high= mid - 1;
        }
        if (low > high){
            cout << "\nSearch Element : " << value << "  : Not Found \n"<<endl;
        }


    } while (low<= high);
    return 0;
}
