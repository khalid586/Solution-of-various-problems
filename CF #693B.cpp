#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef  deque<ll> dq ;
typedef  list<ll> li;
typedef  vector<string> vst ;
typedef  vector<ll> vec ;
typedef deque<ll>::iterator dita;
typedef double dd;
typedef greater<ll> gt;
typedef list<ll> ::iterator liita;
typedef vector<ll> ::iterator vecita;
#define immortal_slave int main()
#define in(x) cin>>x;
#define khalid std::ios::sync_with_stdio(false);cin.tie(NULL);
#define mp make_pair
#define out(x) cout<<x<<"\n";
#define out2(x) cout<<x;
#define nl cout<<"\n";
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define sortv(v) sort(v.begin(), v.end())
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
    freopen("in.txt","r",stdin);
    freopen("out3.txt","w",stdout);
    #endif // ONLINE_JUDGE
}

        
               
void  solve()
{
   ll n,sum=0;
   in(n)

   ll a[n]; vec even,odd;

   rep(0,n)
   {
      in(a[i]) sum+=a[i];

      if(a[i]%2==0)
         even.pb(a[i]);
      else
         odd.pb(a[i]);

   }

   if(n==1)
   {
      out("NO") 
   }

   else if(n==2)
   {
      if(sum==2 || sum==4)
         out("YES")
      else
         out("NO")
      
   }

   else
   {
      if(n%2==1)
      {
         if(odd.size()%2==0 && odd.size()!=0)
            out("YES")
         else
            out("NO") 

         return;
      }
      if(sum%2==0)
         out("YES")
      else
         out("NO")

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

