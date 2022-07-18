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
          freopen("input.txt","r", stdin);
          freopen("out.txt", "w", stdout);
          #endif // ONLINE_JUDGE
      }

      
      void  solve()
      {
        ll n,cnt=0,loop=0;

        in(n)

        while(1)
        {   loop++;
           if(n==1)
           {
            out(cnt)
            break;
           }

           else if(n%2==0 && n%5==0 || n>1e9)
           {
             out(-1) break;
           }
            

           else if(n%6==0)
           {
             n/=6;
             ++cnt;
           }

           else
           {
             n*=2;
             ++cnt;
           }

          
        }

        out(loop)



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

