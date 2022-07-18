#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef  deque<ll> dq ;
typedef  list<ll> li;
typedef  vector<string> vst ;
typedef  vector<ll> vll ;
typedef deque<ll>::iterator dita;
typedef double dd;
typedef greater<ll> gt;
typedef list<ll>::iterator liita;
typedef vector<ll>::iterator vecita;
#define immortal_slave  int main()
#define in(x)           cin>>x;
#define khalid          std::ios::sync_with_stdio(false);cin.tie(NULL);
#define mp              make_pair
#define out(x)          cout<<x<<"\n";
#define out2(x)         cout<<x;
#define newline         cout<<"\n";
#define pb              push_back
#define pf              push_front
#define pob             pop_back
#define pof             pop_front
#define asc_sort(v)     sort(v.begin(), v.end())
#define dsc_sort(v)     sort(v.begin(), v.end(),gt())
#define rep(a,b)        for(int i = a; i < b;++i)
#define repj(j,a,b)     for(int j = a; j < b;++j)
#define rep2(a,b)       for(int i = a; i <= b; ++i)
#define rep2j(j,a,b)    for(int j = a; j <= b; ++j)
#define rep3(a,b)       for(int i = a; i >= b;--i)
#define rep3j(j,a,b)    for(int j = a; j >= b;--j)
#define ss              stringstream
#define st              string


//Starting in the name of Allah(THE ALMIGHTY)
void debugMode()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif // ONLINE_JUDGE
}

void  solve()
{
    st s;
    ll num;

     in(s) bool e=0;

    ss a,b; a<<s; a>>num;
    ll n=s.size();


    rep(0,n)
    {
        
        int number=s[i]-48;
        if(!(number%2))
        {    
            e=1;break;  
        }  
    }

    if(e==0)
    {
        out(-1) return;
    }
    if(!(num%2))
        out(0)

    else
    {
        b<<s[0]; b>>num;
        
        if(!(num%2))
            out(1)
        else 
            out(2)
    }
    

    

}



immortal_slave
{

    khalid
    debugMode();

    ll t=1;

    in(t)

    while(t--)
        solve();


    return 0;

}