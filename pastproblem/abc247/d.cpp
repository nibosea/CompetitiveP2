#include <bits/stdc++.h>

using namespace std;
using ll = long long;
typedef pair<int,int> P;
#define SORT(a) sort((a).begin(),(a).end())
#define REV(a) reverse((a).begin(),(a).end())
#define For(i, a, b)    for(int i = (a) ; i < (b) ; ++i)
#define rep(i, n)       For(i, 0, n)
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
vector<int> to[200'005];
//Write From this Line
int main()
{
	ll q;
	cin >> q;
	deque<P> deq;
	while(q--){
		ll t;
		cin >> t;
		ll x, c;
		if(t==1){
			cin >> x>> c;
			// xが書かれたのをc個入れる
			deq.push_back(P(x,c));
		} else {
			cin >> c;
			// c個取り出す。
			ll ans = 0;
			while(c > 0){
				P now = deq.front();
				deq.pop_front();
				// 取り出した
				ll num = now.first;
				ll kazu = now.second;
				if(kazu <= c){
					// cよりも少ないなら全部使える
					c -= kazu;
					ans += num * kazu;
				} else {
					// cよりも多くあるなら、c個だけ使う
					ll use = c;
					ans += use * num;
					kazu -= c;
					c = 0;
					//numがkazu個
					deq.push_front(P(num,kazu));
				}
			}
			cout <<ans << endl;
		}
	}
}
