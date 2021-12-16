#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string name, sub;
    int index, N;
    cout<<"What is your name?"<<endl;
    cin>>name;
    cout<<"Enter the index: ";
    cin>>index;
    cout<<"Enter N: ";
    cin>>N;
    sub= name.substr(index,N);
    cout<<sub;
    return 0;
}
