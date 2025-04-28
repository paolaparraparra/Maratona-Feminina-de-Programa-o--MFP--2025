//Problem D. Circulos de la UNICAMP
#include <bits/stdc++.h>
using namespace std;

int main()
{
    float r1, r2, r3;
    cin>>r1>>r2>>r3;

    float n, q;
    cin>>n>>q;

    while(q--)
    {
        float c1, l1, c2, l2;
        cin>>c1>>l1>>c2>>l2;

        double res = 0, d = 0, e = 0;
        int a = 0;
        
        if(c1 == c2 && l1 == l2)
        {
            res = 0;
        }
        else
        {
            if(c1 == 1){c1=r1;}
            else if(c1 == 2){c1 = r2;}
            else{c1 = r3;}
            if(c2 == 1){c2=r1;}
            else if(c2 == 2){c2 = r2;}
            else{c2 = r3;}

            if(c1 > c2 && l1 > l2)
            {
                a = abs(l2-l1+n);
                d = ((2*3.14159265359*c2)/n)*a;
                e = abs(c2 -c1);
                res = d + e;
            }
            else{
                a = abs(l2 -l1);
                d = ((2*3.14159265359*c1)/n)*a;
                e = abs(c2 -c1);
                res = d + e;
            }
        }
        cout<<fixed<<setprecision(10)<<res<< endl;
    }
    return 0;
}