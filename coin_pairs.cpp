#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
 {
	int t, n, k;
	cin >> t;
	while(t--) {
	    cin >> n >> k;
	    vector <int> piles(n);
	    for(int i = 0; i < n;  i++)
	        cin >> piles[i];
	    sort(piles.begin(), piles.end());
	    int ans = INT_MAX;
	    int prevSum = 0, curSum = 0;
	    for(int i = 0; i < n; i++) {
	        prevSum += i < 1 ? 0 : piles[i-1];
	        curSum = 0;
	        for(int j = n-1; j > i; j--) {
	            if(piles[j] - piles[i] <= k)
	                break;
	            curSum += piles[j] - piles[i] - k;
	        }
	        ans = min(ans, curSum + prevSum);
	    }
	    cout << ans << endl;
	}
	return 0;
}