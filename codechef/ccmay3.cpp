#include<bits/stdc++.h>
using namespace std;
#define s(n)                    scanf("%d",&n)
#define sl(n)                   scanf("%lld",&n)
#define sf(n)                   scanf("%lf",&n)
#define ss(n)                   scanf("%s",n)
#define sc(n)                   scanf("%c",&n)
#define PI(n)                   printf("%d ",n)
#define PLL(n)                  printf("%lld\n",n)
#define PF(x)                   printf("x")
#define CSET(x)                 __builtin_popcount(x)
#define CLOG(x)                 31 - __builtin_clz(x)
#define CLZ(x)                  __builtin_clz(x)
#define CTZ(x)                  __builtin_ctz(x)
#define FOR(i, a, b)            for(int i = (a); i < (b); ++i)
#define RFOR(i, b, a)           for(int i = (b) - 1; i >= (a); --i)
#define REP(i, N)               FOR(i, 0, N)
#define RREP(i, N)              RFOR(i, N, 0)
#define FILL(A,value)            memset(A,value,sizeof(A))
#define ALL(V)                  V.begin(), V.end()
#define SZ(V)                   (int)V.size()
#define PB                      push_back
#define MP                      make_pair
#define Pi                      3.14159265358979
#define pin(n)                  printf("%d\n",n)
#define si(n)                   scanf("%d",&n)
#define gc                     getchar_unlocked
#define ll 						long long int


inline  void InInt (int &x)
{
    register int c;
    do        c = getchar_unlocked ();      while (c < 48 || c > 57);
    for(x = 0; c > 47 && c < 58; c = getchar_unlocked ())   x = (x << 1) + (x << 3) + c - 48;
}
 
inline  void OutInt (int n)
{
    register int x = n;
    int a [20], i;
    for (i = 0; x; i++)     a[i] = x % 10,  x /= 10;
    for (; i; i--)          putchar_unlocked (48 + a[i - 1]);
    putchar_unlocked (32);
}



inline long long int read_int(){
    char r;
    bool start=false,neg=false;
    long long int ret=0;
    while(true){
        r=getchar();
        if((r-'0'<0 || r-'0'>9) && r!='-' && !start){
            continue;
        }
        if((r-'0'<0 || r-'0'>9) && r!='-' && start){
            break;
        }
        if(start)ret*=10;
        start=true;
        if(r=='-')neg=true;
        else ret+=r-'0';
    }
    if(!neg)
        return ret;
    else
        return -ret;
}


std::vector<ll> v;

int main(int argc, char const *argv[])
{
	
	int t;
	InInt(t);
	v.push_back(1);
	v.push_back(2);
	ll it;
	for(ll i ,2,1000000001){
		it=v[i-1]+v[i-2];

	}

	while(t>0){
		t--;
		ll x,k;
		x=read_int();
		k=read_int();

	}
	return 0;
}