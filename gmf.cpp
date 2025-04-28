//Problem G. Mezclador Frase-Palabra  
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, a, b;
    cin>>s;

    for(int i = 0; i < s.length(); i++) {
        if(i % 2 == 0) {
            a += s[i];
        } else {
            b += s[i];
        }
    }
    cout << a<< endl;
    cout << b << endl;
    return 0;
}
