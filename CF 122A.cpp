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
          freopen("out.txt", "w", stdout);
          #endif // ONLINE_JUDGE
     }


     int  solve(int num)
     {
          int a[]={4,7,44,77,74,47,474,447,774,444,777,477,744,747};

          for(int x: a)
          {
              if(num%x==0)
                return 1;

          }

          return 0;

     } 




     immortal_slave 
     {

          debugMode() ;

           int  num;


           in(num)

           if(solve(num))
           {
               out("YES")
           } 
           else
           {
               out("NO")
           }
          

            
      
           return 0;

     }

