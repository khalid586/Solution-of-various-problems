#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef  deque<ll> dq ;
typedef  list<ll> li;
typedef  vector<string> vst ;
typedef  vector<ll> vll ;
typedef deque<ll>::iterator dita;
typedef double dd;
typedef greater<ll> gt;
typedef list<ll> ::iterator lita;
typedef vector<ll> ::iterator vita;
#define immortal_slave int main()
#define in(x) cin>>x;
#define khalid std::ios::sync_with_stdio(false);cin.tie(NULL);
#define mp make_pair
#define out(x) cout<<x<<"\n";
#define out2(x) cout<<x;
#define newline cout<<"\n";
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define asc_sort(v) sort(v.begin(), v.end())
#define dsc_sort(v) sort(v.begin(), v.end(),gt())
#define rep(a,b) for(int i = a; i < b;++i)
#define repj(j,a,b) for (int j = a; j < b;++j)
#define rep2(a,b) for (int i = a; i <= b; ++i)
#define rep2j(j,a,b) for (int j = a; j <= b; ++j)
#define rep3(a,b) for (int i = a; i >= b;--i)
#define rep3j(j,a,b) for (int j = a; j >= b;--j)
#define ss stringstream
#define st  string

//Starting in the name of Allah(THE ALMIGHTY)
void debugMode()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif // ONLINE_JUDGE                                     
}

        
               
void  solve()
{
   ll num,ans= 1e9;

  in(num)

  st st_num=to_string(num);

  vll pow_of_two;

  if (num & (num-1)==0)
  {
      out(0) return;
  }

  rep(0,61)
  {
      ll num= 1ll<<i; // 1ll<<i = pow(2,i)
      pow_of_two.pb(num);
  }

  

  for(auto x: pow_of_two)
  {
      ll i=0,j=0 ,res=0; 

      st powOfTwo = to_string(x);

      while( i < st_num.size() && j < powOfTwo.size())
      {
         if (st_num[i] == powOfTwo[j])
         {
             ++i; ++j;
         }
         else
         {
            ++res; ++i;
         }
      }

      if (i==st_num.size() && j!= powOfTwo.size())
      {
         res+=(powOfTwo.size()-j);
      }
      else if (i!=st_num.size() && j== powOfTwo.size())
      {
         res+=(st_num.size()-i);
      }

      ans=min(ans,res);
  }

  out(ans)

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

