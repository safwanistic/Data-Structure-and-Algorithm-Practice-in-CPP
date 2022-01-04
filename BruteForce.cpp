#include <iostream>
#include <string>
using namespace std;

int strStr(string a, string s) {

        //check for all edge cases
        if(s.size()>a.size())
            return -1;
        if(a.size()==0 && s.size()==0)
            return 0;
        if(a.size()==0)
            return -1;

        //apply brute force string matching algorithm
        for(int i=0,j=0;i<a.size()-s.size()+1;i++)
        {
            while(a[i+j]==s[j] && j<s.size())
            {
                j++;
            }
            if(j==s.size())
                return i;
            else
            {
                j=0;
            }
        }
        return -1;
    }
int main(){
    string a, s;
    int i;
    cout<<"Enter the total String: ";
    cin>>a;
    cout<<"Enter the substring you want to search using Brute Force Algorithm: ";
    cin>>s;
    strStr(a,s);
    cout<<"Index from where to match: "<<i;
    return 0;
}
