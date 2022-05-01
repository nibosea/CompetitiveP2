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
	string s;
	cin >> s;
	vector<int> cnt(10,0);
	int n = 10;
	rep(i,n){
		if(s[i] == 'o') cnt[i] = 1;
		if(s[i] == 'x') cnt[i] = -1;
		if(s[i] == '?') cnt[i] = 0;
	}
	int ans = 0;
	rep(i,10000){
		string k = to_string(i);
		while(k.size() < 4){
			k = '0' + k;
		}
		bool f = true;
		vector<int> now(10,0);
		rep(j,4){
			int num = k[j] - '0';
			if(cnt[num] < 0){
				f = false;
			}
			now[num]++;
		}
		rep(j,10){
			if(cnt[j] == 1 && now[j] <= 0) f=false;
		}
		if(f) ans++;
	}
	cout << ans << endl;
}
