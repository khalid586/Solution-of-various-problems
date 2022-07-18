#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dd;
typedef greater<ll> gt;
typedef  vector<ll> vec ;
typedef  deque<ll> dq ;
typedef  vector<char> vst ;
typedef vector<ll> ::iterator vecita;
typedef  list<ll> li;
typedef list<ll> ::iterator liita;
typedef deque<ll>::iterator dita;
#define immortal_slave int main()
#define pb push_back
#define pof pop_front
#define pob pop_back
#define pf push_front
#define ss stringstream
#define st  string
#define rep(i,a,b) for (int i = a; i < b; i++)
#define re(i,a,b) for ( i = a; i < b; i++)
#define rep2(i,a,b) for (int i = a; i <= b; i++)
#define rep3(i,a,b) for (int i = a; i >= b; i--)
#define mp make_pair
#define king  cin.tie(0), ios::sync_with_stdio(0),cout.tie(0);
#define out(x) cout << x << endl;
#define in(x) cin>>x;

//Starting in the name of Allah(THE ALMIGHTY)


void solve()
{

  ll n,k,sum=0,num,diff=INT_MAX;
  cin>>n>>k;

  vec v1,v2;

        rep(i,0,n)
        {
          in(num)
          v1.pb(num);
        }
        sort(v1.begin(),v1.end());
        for(int i=0;i+k<n;++i)
        {

            diff=min(v1[i+k-1]-v1[i],diff);
        }


        out(diff)










}


immortal_slave
{
   king

   ll t;

   in(t)
   while(t--)
   {
       solve();
   }

     return 0;

}

