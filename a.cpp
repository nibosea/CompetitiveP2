#include <bits/stdc++.h>

using namespace std;
using ll =long long;
typedef pair<ll,ll> P;
#define SORT(a) sort((a).begin(),(a).end())
#define REV(a) reverse((a).begin(),(a).end())
#define For(i, a, b)    for(int i = (a) ; i < (b) ; ++i)
#define rep(i, n)       For(i, 0, n)
#define debug(x)  cerr << #x << " = " << (x) << endl;
#define fore(i, a) for(auto &i: a)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

void coY() {cout <<"Yes"<<endl;}
void coN(){cout <<"No"<<endl;}
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
ll dp[40][1<<11];
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	ll a, b;
	cin >> a >> b;
	ll n = b - a + 1; // a ~ bの数字はb-a+1個
	//2~n-1の素数を管理すれば良い．
	vector<int> prime(0);
	for(int i = 2; i < n; i++){
		bool p = true;
		for(int j = 2; j * j <= i; j++){
			if(i%j == 0) p = false;
		}
		if(p) prime.push_back(i);
	}
	int psz = prime.size();
	// dp[i][j] := a+i-1まで見たときに，bitがjであるような組み合わせが何通りあるか．
	rep(i,n){
		ll num = a + i;
	}

}
