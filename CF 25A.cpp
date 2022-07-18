#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef  deque<ll> dq ;
typedef  list<ll> li;
typedef  vector<char> vst ;
typedef  vector<ll> vec ;
typedef deque<ll>::iterator dita;
typedef double dd;
typedef greater<ll> gt;
typedef list<ll> ::iterator liita;
typedef vector<ll> ::iterator vecita;
#define immortal_slave int main()
#define in(x) cin>>x;
#define king  cin.tie(0);
#define mp make_pair
#define out(x) cout<<x<<"\n";
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define rep(a,b) for (int i = a; i < b; i++)
#define repj(a,b) for (int j = a; j < b; j++)
#define rep2(a,b) for (int i = a; i <= b; i++)
#define rep3(a,b) for (int i = a; i >= b; i--)
#define ss stringstream
#define st  string

//Starting in the name of Allah(THE ALMIGHTY)
      void debugMode()
{

          #ifndef ONLINE_JUDGE
          freopen("input.txt", "r", stdin);
          freopen("out3.txt", "w", stdout);
          #endif // ONLINE_JUDGE
}

     void  solve()
     {
     
         

        ll num,n;

        vec even,odd;

        in(n)

        ll a[n];
        

        rep(0,n)
        {
              in(a[i])
        }

        rep(0,n)
        {
          if(a[i]%2==0)
               even.pb(i);
          else
               odd.pb(i);
        }

        if(even.size()==1)
          out(even[0]+1)
        else
          out(odd[0]+1)

       

        

     } 




     immortal_slave 
     {

          debugMode() ;


          int t=1;
         // in(t)

          while(t--)
          {
               
               solve();

          }

           return 0;

     }

