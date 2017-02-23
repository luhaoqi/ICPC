// written at 09:22 on 23 Feb 2017 
#include <bits/stdc++.h>

#define IOS std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
// #define __DEBUG__
#ifdef __DEBUG__
	#define DEBUG(...) printf(__VA_ARGS__)
#else
	#define DEBUG(...)
#endif
#define filename ""
#define setfile() freopen(filename".in", "r", stdin); freopen(filename".ans", "w", stdout);
#define resetfile() freopen("/dev/tty", "r", stdin); freopen("/dev/tty", "w", stdout); system("more " filename".ans");
#define rep(i, j, k) for (int i = j; i < k; ++i)
#define irep(i, j, k) for (int i = j - 1; i >= k; --i)

using namespace std;

template <typename T>
inline T sqr(T a) { return a * a;};

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int > Pii;

const double pi = acos(-1.0);
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;
const int MAX_N = 1e5 + 10;

string s;

char trans(char s) {
	if (s == 'a') return 'z';
	else return s - 1;
}

int main(int argc, char const *argv[])
{
	cin >> s;
	bool flag = false;
	rep(i, 0, s.size()) {
		if (trans(s[i]) >= s[i]) {
			if (flag) break;
		}
		else s[i] = trans(s[i]), flag = true;
	}
	if (!flag) s[s.size() - 1] = trans(s[s.size() - 1]);
	cout << s << endl;
	return 0;
}