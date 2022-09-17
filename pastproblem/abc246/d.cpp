#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using ll = long long;
typedef pair<int,int> P;
#define SORT(a) sort((a).begin(),(a).end())
#define REV(a) reverse((a).begin(),(a).end())
#define For(i, a, b)    for(int i = (a) ; i < (b) ; ++i)
#define rep(i, n)       For(i, 0, n)
#define Per(i, a, b)    for(int i = (a) ; i>=(b);--i)
#define per(i, n)       Per(i,n,0)
#define debug(x)  cerr << #x << " = " << (x) << endl;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

void coY() {cout <<"Yes"<<endl;}
void coN(){cout <<"No"<<endl;}
void coT() {cout <<"Takahashi"<<endl;}
void coA(){cout <<"Aoki"<<endl;}

void mswap(ll &a, ll &b){ if(a >= b) swap(a,b); }
void rswap(ll &a, ll &b){ if(a <= b) swap(a,b); }

const int dy[] = {0,0,1,-1};
const int dx[] = {1,-1,0,0};
const ll mod = 1e9+7;
const ll MOD = 998244353;
const double PI=3.14159265358979323846;
const int inf = 1001001001;
const ll INF = 1'000'000'000'000'000'000;
ll f(ll a, ll b){
	ll x1 = a*a*a;
	ll x2 = a*a*b;
	ll x3 = a*b*b;
	ll x4 = b*b*b;
	return (x1+x2+x3+x4);
}
//Write From this Line
int main()
{
	ll n; 
	cin >> n; 
	ll ans = INF;
	for(ll a = 0; (a*a*a) <= n; a++){
		ll now = 0;
		ll ok = 1e6, ng = -1;
		while(ok-ng>1){
			ll mid = (ok+ng) / 2;
			ll now = f(a,mid);
			//debug(now);
			if(now >= n) ok = mid;
			else ng = mid;
		}
		chmin(ans,f(a,ok));
	}
	cout << ans << endl;
}
