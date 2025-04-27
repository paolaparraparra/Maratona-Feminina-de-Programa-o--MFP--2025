//Problem C. El sensor diferente
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int k1, k2, k3;
        cin>>k1>>k2>>k3;

        int a[3] = {k1, k2, k3};
        sort(a, a + 3);

        if(a[0] == a[1]){
                
            cout<<a[2]<<endl;
        }
        else{
            cout<<a[0]<<endl;
        } 
    }
    return 0;
}