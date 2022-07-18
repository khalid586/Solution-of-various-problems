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
   ll n,row,col,res,last_num,pos_row2;
   dd pos_row;

   in(n)

   pos_row=ceil(sqrt(n));

   pos_row2= pos_row;

 

   last_num=pow(pos_row2,2);

   res=last_num- pos_row2; 

   if(n<=(last_num-pos_row2))
   {
      col=pos_row;
      row=n-pow(pos_row-1,2);

      
   }

   else
   {
      row= pos_row;
      col= last_num- n+1;
     
   }

   out(row<<" "<<col)

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

