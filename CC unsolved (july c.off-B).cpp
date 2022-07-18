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
      
        ll a,b;
        in(a>>b)

        if(__gcd(a,b)>1)
        {
            out("0")
        }

        else
        {
            while(__gcd(a,b)==1)
            {
                  if(__gcd(a,b+1)!=1)
                  {
                        ++b;

                        out("1")
                  }
                  else if(__gcd(a+1,b)!=1)
                  {
                        ++a;
                        out("1")
                  }
                  else 
                  {
                        ++a; ++b;
                        out("2")
                  }

            }

        }

                
     

      } 
      
  
     immortal_slave 
     {
        king
          debugMode() ;


          int t=1;
          in(t)

          while(t--)
          {
               
               solve();

          }

           return 0;

     }

