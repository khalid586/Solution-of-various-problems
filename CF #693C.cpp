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
#define king std::ios::sync_with_stdio(false);cin.tie(NULL);
#define mp make_pair
#define out(x) cout<<x<<"\n";
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define rep(a,b) for (int i = a; i < b;++i)
#define repj(a,b) for (int j = a; j < b;++j)
#define rep2(a,b) for (int i = a; i <= b; ++i)
#define rep3(a,b) for (int i = a; i >= b;--i)
#define ss stringstream
#define st  string

//Starting in the name of Allah(THE ALMIGHTY)
      void debugMode()
      {

          #ifndef ONLINE_JUDGE
          freopen("in.txt","r", stdin);
          freopen("out3.txt", "w", stdout);
          #endif // ONLINE_JUDGE
      }

      
      void  solve()
      {
        ll n,mx=0;

        in(n)

        vec a(n);

        rep(0,n)
        {
          in(a[i])
        }

        rep3(n-1,0)
        {
           ll total=0;

           total+=a[i];

           if((a[i]+i)<n)
           {
             total+=(a[i+a[i]]);
            

           }

           a[i]=total;

           mx=max(mx,total);

        } 

        out(mx)
         

      }
      
  
     immortal_slave 
     {
          
          debugMode() ;

          int t=1;
         
          in(t)


          while(t--)
          {
               
              solve();

          }

           return 0;

     }

