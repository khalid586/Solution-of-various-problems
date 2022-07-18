#include <bits/stdc++.h>
using namespace std;

typedef long long             ll;
typedef deque<ll>             dq ;
typedef list<ll>              li;
typedef vector<string>        vst ;
typedef vector<ll>            vll ;
typedef deque<ll>::iterator   dita;
typedef double                dd;
typedef greater<ll>           gt;
typedef list<ll>::iterator    liita;
typedef vector<ll>::iterator  vecita;
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
#define rep(a,b)        for(ll i = a; i < b;++i)
#define repj(j,a,b)     for(ll j = a; j < b;++j)
#define rep2(a,b)       for(ll i = a; i <= b; ++i)
#define rep2j(j,a,b)    for(ll j = a; j <= b; ++j)
#define rep3(a,b)       for(ll i = a; i >= b;--i)
#define rep3j(j,a,b)    for(ll j = a; j >= b;--j)
#define ss              stringstream
#define st              string
#define min3(a,b,c)     min( a,min( b, c)) 
#define min4(a,b,c,d)   min( d,min3( a, b, c)) 
#define max3(a,b,c)     max( a,max( b, c)) 
#define max4(a,b,c,d)   max( d,max3(a,b,c))   
#define sum(v)          accumulate(v.begin(),v.end(),0ll)


//Starting in the name of Allah(THE ALMIGHTY)
void debugMode()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif // ONLINE_JUDGE
}

/*
int N = 1e7+1;
vll primes(N,1);
vll ans(N,0);

void  sieve(ll N)
{
    for(int i=2;i*i<=N;i++)
    {  
        if(primes[i])
        {
            ans.pb(i);
            for(int j=i*i;j<=N;j+=i)
                primes[j]=0;

        }
    }

    super prime
    ans[5]=1;
    
    for(int i=6;i<N;i++)
    {
        if(primes[i])
            ans[i]=ans[i-1]+primes[i-2];
        else
            ans[i]=ans[i-1];
    }

    
    
}
    
*/




void  solve()
{
    ll n,k,cnt=0; in(n>>k) vll v(n);
    rep(0,n)
    {
        in(v[i])

    }
    asc_sort(v);

    rep(1,n)
    {
        if(v[i]-v[i-1]<=k)
        {
         ++cnt; ++i;
        }
        
    }

    out(cnt)
}

immortal_slave
{
    //sieve();
    khalid
    debugMode();

    ll t=1;

    //in(t)

    while(t--)
        solve();


    return 0;

}
