#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef  deque<ll> dq ;
typedef  list<ll> li;
typedef  map<char, ll> mapp;
typedef  vector<ll> vll;
typedef deque<ll>::iterator dita;
typedef double dd;
typedef greater<ll> gt;
typedef list<ll> ::iterator lita;
typedef vector<ll> ::iterator vita;
#define immortal_slave int main()
#define in(x) cin>>x;
#define khalid std::ios::sync_with_stdio(false);cin.tie(NULL);
#define mp make_pair
#define sum(a) accumulate(a.begin(),a.end(),0ll)
#define out(x) cout<<x<<"\n";
#define out2(x) cout<<x;
#define newline cout<<"\n";
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define asc_sort(v) sort(v.begin(), v.end())
#define dsc_sort(v) sort(v.begin(), v.end(),gt())
#define rep(a,b) for (int i = a; i < b;++i)
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

 int arraycons[100][100];





 void arrayconstruct()
 {

      for(int i=0;i<100;i++)
        for(int j=0;j<100;j++)
            arraycons[i][j]=0;

    arraycons[0][0]=2;
    arraycons[0][1]=9;
    arraycons[0][2]=7;
    arraycons[1][0]=4;
    arraycons[1][1]=6;
    arraycons[1][2]=3;
    arraycons[2][0]=1;
    arraycons[2][1]=8;
    arraycons[2][2]=5;

    for(int i=3;i<100;i++)
    {
        for(int j=0;j<=i+1;j++)
        {
            if(j==0) arraycons[i][0]=i*i+1;
            else arraycons[i][j]=arraycons[i][j-1]+2;
            
        }
    }


    for(int j=3;j<100;j++)
    {   
        for(int i=0;i<j;i++)
        {
            if(i==0)
                arraycons[i][j]=(j+1)*(j+1)-1;
            else
               arraycons[i][j]= arraycons[i-1][j]-2;
        }
    }
        
    
        

 
}






void solve()
{ 
    ll n; in(n)

     if(n==1) {  out(1) return; } 
     if(n==2) {  out(-1) return; }

    rep(0,n)
    {
        repj(j,0,n)
        {
            out2(arraycons[i][j]<<" ")

            
        }
        newline
    }
        


}

immortal_slave
{
     khalid
     debugMode();


     arrayconstruct();



     ll t=1;
     in(t)

      while(t--)
        solve();

     return 0;

}
