#include<iostream>
#include<string>

using namespace std;
void patternmatch (char pat [], char txt []);


int main(){

char text[]="ANAS SHEIKH";
char pattern[]="EIKH";

patternmatch(pattern,text);

return 0;

}
void patternmatch (char pat [], char txt []){

int pl = pat.length(); int tl = txt.length();


/* A loop to slide pat [] one by one */

for (int i = 0; i <= tl - pl; i++) {

int j;

/* For current index i, check for pattern match */

for (j = 0; j < pl; j++)

if (txt [i+j] != pat [j])

break;

if (j == pl)

cout << "Pattern found at index "<< i << endl;
}
}

