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
#define asc_sort(v) sort(v.begin(), v.end())
#define dsc_sort(v) sort(v.begin(), v.end(),gt())
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
   ll a,b,c,n,mn,mx,res;
   in(a>>b>>c)



   if(abs(a-b)==1)
   {
      out(-1) return;
   }


   mn=min(a,b); mx=max(a,b);

   ll oppo=mx-mn+1;

   if(mn>oppo || mx<oppo)
   {
      out(-1) return;
   }

   n=(oppo-1)*2;

   if (c>n)
   {
     out(-1) return;
   }
   if ((a==oppo || b==oppo) && mn!=1)
   {
     out(-1) return;
   }
 

   if (c<oppo)
   {
      res=oppo-c-1;

      ll ans=n-res;

      if(ans!=0)
         out(ans)
      else
         out(-1)
   }  

   else
   {
      res=c-oppo;

      ll ans=1+res;
      if(ans!=0)
         out(ans)
      else
         out(-1)
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

