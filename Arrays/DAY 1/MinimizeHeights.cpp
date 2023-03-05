#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int max_ = arr[n-1];
        int min_ = arr[0];
        int res = max_ - min_;
        
        for(int i=0;i<n;i++)
        {
            max_ = max(arr[i-1]+k,arr[n-1]-k);
            min_ = min(arr[i]-k,arr[0]+k);
            res = min(res, max_-min_);
        }
        return res;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}