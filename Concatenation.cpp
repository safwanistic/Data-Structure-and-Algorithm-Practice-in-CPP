#include <iostream>
#include <string>
using namespace std;
int main(){
    string FName, SName, FullName;
    cout<<"Enter First Name: "<<endl;
    cin>>FName;
    cout<<"Enter Second Name: "<<endl;
    cin>>SName;

    FullName= FName+" "+SName;
    cout<<FullName<<endl;
    return 0;
}
