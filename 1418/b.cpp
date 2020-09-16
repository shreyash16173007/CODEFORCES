#include <bits/stdc++.h>
 
using namespace std;
 
#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define pii pair<int, int> 
#define pll pair<long long int, long long int>
#define sci(x) scanf("%d", &x)
#define scl(x) scanf("%lld", &x)
#define fi first
#define sc second
#define eps 1e-9

int main()
{
	ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);

	int t, i, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> A(n+1);
		vector<int> L(n+1);
		multiset<int> elements;
		for (i = 1; i <= n; ++i) cin >> A[i];
		for (i = 1; i <= n; ++i) {
			cin >> L[i];
			if (!L[i]) elements.insert(A[i]);
		}
		for (i = n; i >= 1; --i) {
			if (L[i]) continue;
			A[i] = *elements.begin();
			elements.erase(elements.begin());
		}	
		for (i = 1; i <= n; ++i) cout << A[i] << " "; cout << endl;
	}

	return 0;
}
