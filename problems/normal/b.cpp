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
//Write From this Line
int main()
{
	int n;
	cin >> n;
	vector<int> a((1<<n)-1);
	rep(i,(1<<n)-1) cin >> a[i];
	// 値段でソートしたい
	vector<int> order((1<<n)-1);
	iota(order.begin(), order.end(), 1);
	sort(order.begin(),order.end(), [&](int i, int j){
		return a[i-1] < a[j-1];
	});

	vector<int> basis(0);
	ll ans = 0;
	vector<int> maes(0);
	for(int e : order){
		ll mae = e;
		for(int b : basis){
			chmin(e, e ^ b);
		}
		if(e){
			basis.push_back(e);
			maes.push_back(mae);
		}
	}
	debug(basis.size());
	debug(maes.size());
	for(auto b:basis){
		cout << b <<" " ;
	}
	cout << endl;
	for(auto b:maes){
		cout << b <<" " ;
		ans += a[b-1];
	}
	cout << endl;
	cout << ans << endl;
}
