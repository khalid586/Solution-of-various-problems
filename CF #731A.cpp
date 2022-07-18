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
					freopen("in.txt","r", stdin);
					freopen("out3.txt", "w", stdout);
					#endif // ONLINE_JUDGE
		}


			
		inline void solve()
		{
			int x1,x2,x3,y1,y3,y2;

			in(x1>>y1>>x2>>y2>>x3>>y3)

			int mn_x=min(x1,x2);
			int mn_y=min(y1,y2);
			int mx_x=max(x1,x2);
			int mx_y=max(y1,y2);

			if(x1==x2)

			{
				if(x1==x3 && y3>mn_y && y3<mx_y)
				{
					out(abs(y1-y2)+2)
				}
				else
					out(abs(y1-y2))

			}

			else if(y1==y2)

			{
				if(y1==y3 && x3>mn_x && x3<mx_x)
				{
					out(abs(x1-x2)+2)
				}
				else
					out(abs(x1-x2))

			}

			else
				out(abs(x1-x2)+abs(y1-y2))


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

