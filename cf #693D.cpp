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
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define sortv(v) sort(v.begin(), v.end())
#define sortv2(v) sort(v.begin(), v.end(),gt())
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
   
 ll n,ans=0; 

 in(n)

 vec a(n);

 rep(0,n)
 {
   in(a[i])
 }

 sortv2(a);


rep(0,n)
{
   if(i%2==0)
   {
      if(a[i]%2==0)
      {
         ans+=a[i];
      }
   }
   else
   {
      if(a[i]%2==1)
      {
         ans-=a[i];
      }
   }
}



if(ans>0)
   out("Alice")
else if(ans==0)
   out("Tie")
else
   out("Bob")

}  
                  
immortal_slave 
{
	
     khalid
     debugMode();

      ll t=1;

      in(t)

     while(t--)
     {
		solve();                               
     }

      return 0;

}

