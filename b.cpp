#include <bits/stdc++.h>

using namespace std;
using ll =long long;
typedef pair<ll,ll> P;
#define SORT(a) sort((a).begin(),(a).end())
#define REV(a) reverse((a).begin(),(a).end())
#define For(i, a, b)    for(int i = (a) ; i < (b) ; ++i)
#define rep(i, n)       For(i, 0, n)
#define debug(x)  cerr << #x << " = " << (x) << endl;
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
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
<<<<<<< HEAD
	int n;
	cin >> n;
	vector<ll> a(n), b(n);
	rep(i,n) cin >> a[i];
	rep(i,n) cin >> b[i];
=======
	string x;
	cin >> x;
	bool flag = true;
	rep(i,3){
		if((x[i]-'0' + 1)%10 == x[i+1]-'0'){
		} else {
			flag = false;
		}
	}
	x.erase(unique(x.begin(),x.end()),x.end());
	debug(x);
	if(x.size() == 1 || flag){
		puts("Weak");
		return 0;
	} else {
		puts("Strong");
	}
>>>>>>> c6ec2ec2c6a3af6a417a3f688a484e837f234d1e
}
