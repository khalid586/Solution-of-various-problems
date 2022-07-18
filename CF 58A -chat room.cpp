
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dd;
typedef greater<ll> gt;
typedef  vector<ll> vec ;
typedef vector<ll> ::iterator vecita;
typedef  list<ll> li;
typedef list<ll> ::iterator liita;
#define pb push_back
#define pf push_front




int main()
{
     ll c=0,suc=0,s=0;
         char a[200],j;

   cin>>a;
   ll n=strlen(a);


   for(ll i=0,j=0;i<n;i++)


    {
      if(a[i]=='h' && s==0)
      {
          s+=1;
      }
      else  if(a[i]=='e' && s==1)
      {
          s+=1;
      }

       else   if(a[i]=='l' && s==2)
      {
          s+=1;
      }
     else   if(a[i]=='l' && s==3)
      {
          s+=1;
      }
      else   if(a[i]=='o' && s==4)
      {
          suc=4;
      }


    }


     switch(suc)
     {
     case 4:
        printf("YES\n");
        break;
     default:
        printf("NO\n");
     }





	return 0;
}

