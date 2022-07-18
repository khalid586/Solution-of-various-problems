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
          freopen("out3.txt", "w", stdout);
          #endif // ONLINE_JUDGE
      }

      
      void  solve()
      {
        int  n,num,res,j=0,i;

        
        in(n)
        int index=n+1;
        st ar,a,b;

       

        

            in(ar)
        



        if(n==1)
        {
            out(1)
            out(1)
        }

      
        else
        {
            

            rep(0,ar.size())
            {

                  if(ar[i]=='1')
                  {
                        a.pb('1');
                        b.pb('0');
                        index=i;

                        break;
                  }

                  else
                  {
                        if(ar[i]=='2')
                        {
                              a.pb('1');
                              b.pb('1');

                        }
                        else
                        {
                              a.pb('0');
                              b.pb('0');
                        }
                  
            
                  }
                  

            }
            if(index<=n)
            {
                  rep(index+1,ar.size())
                  {
                   a.pb('0');
                   b.pb(ar[i]);
            
                  }  
            }
          


       
        rep(0,a.size())
        {
            cout<<a[i];
        }

        cout<<'\n';

        rep(0,b.size())
        {
            cout<<b[i];
        }

        cout<<'\n';




        }
        

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

