#include <bits/stdc++.h>
#define IOS                 ios::sync_with_stdio(0);
#define ll                  long long
#define pb                  push_back
#define par(a,b)            make_pair(a,b)
#define pfor(a,b,name)      for(int i=a;i<=b;++i){cout<<name[i]<<" ";}
#define ifor(a,b,name)      for(int i=a;i<=b;++i){cin>>name[i];}
#define euclid(x1,y1,x2,y2) sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define lcm(a,b)            (a*b)/(__gcd(a,b))
#define gcd(a,b)            __gcd(a,b)
#define UMU                 cout<<"umu"<<endl;
#define fl                  '\n'

using namespace std;

const double pi = 3.14159265;
const int INF = 1<<30;
const int maxn = (1e5)+50;
const int mod = (1e9)+7;
const int lim = (1e5);

const char filename_in[] = "in.txt";
const char filename_ou[] = "ou.txt";

unsigned long long FDR(unsigned long long n)
{
    while(n>=10)
    {
        int sum = 0;
        while(n>0)
        {
            sum+=n%10;
            n/=10;
        }
        n=sum;
    }
    return n;
}

int main()
{
    IOS
    unsigned long long n;
    while(cin>>n)
    {
        if(!n)break;
        cout<<FDR(n)<<endl;
    }
}

/// This code is less virgin than me
