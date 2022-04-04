// Mo の使い方これで分かるね。けんちょんの記事の写経
// https://drken1215.hatenablog.com/entry/2019/01/01/234400
// うしさんMo mo
// https://ei1333.hateblo.jp/entry/2017/09/11/211011
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <map>
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

struct Mo {
    vector<int> left, right, index; // the interval's left, right, index
    vector<bool> v;
    int window;
    int nl, nr, ptr;
    
    Mo(int n) : window((int)sqrt(n)), nl(0), nr(0), ptr(0), v(n, false) { }
    
    /* push */
    void push(int l, int r) { left.push_back(l), right.push_back(r); }
    
    /* sort intervals */
    void build() {
        index.resize(left.size());
        iota(index.begin(), index.end(), 0);
        sort(begin(index), end(index), [&](int a, int b)
        {
            if (left[a] / window != left[b] / window) return left[a] < left[b];
            return bool((right[a] < right[b]) ^ (left[a] / window % 2));
        });
        
        //        sort(index.begin(), index.end(), [&](int a, int b) {
        //            if (left[a] / window != right[b] / window) return left[a] < left[b];
        //            else return right[a] < right[b];
        //        });
    }
    
    /* extend-shorten */
    void extend_shorten(int id) {
        v[id].flip();
        if (v[id]) insert(id);
        else erase(id);
    }
    
    /* next id of interval */
    int next() {
        if (ptr == index.size()) return -1;
        int id = index[ptr];
        while (nl > left[id]) extend_shorten(--nl);
        while (nr < right[id]) extend_shorten(nr++);
        while (nl < left[id]) extend_shorten(nl++);
        while (nr > right[id]) extend_shorten(--nr);
        return index[ptr++];
    }
    
    /* insert, erase (to be set appropriately) */
    void insert(int id);
    void erase(int id);
};

int N, Q;
int A[500001];
int res[500001];
int cnt[500001];
int num = 0;

void Mo::insert(int id) {
	int color = A[id];	
	int k = cnt[color];
	// color の　個数　k
	if(k == 0) num++;
	cnt[color]++;
}

void Mo::erase(int id) {
	int color = A[id];	
	int k = cnt[color];
	if(k == 1) num--;
	cnt[color]--;
}

int main() {
	scanf("%d", &N);
	scanf("%d", &Q);
	rep(i,N){
		scanf("%dd", &A[i]);
	}
	Mo mo(N);
	rep(i,Q) {
		int l,r ;
		scanf("%d %d", &l, &r);
		mo.push(--l,r);
	}
	mo.build();
	rep(i,Q){
		int idx = mo.next();
		res[idx] = num;
	}
	rep(i,Q) printf("%d\n", res[i]);
}
