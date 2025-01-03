#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findMajority(vector<int>& arr) {
        int n = arr.size();
        int num1 = INT_MIN, num2 = INT_MIN;
        int c1 = 0, c2 = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] == num1) {
                c1++;
            } else if (arr[i] == num2) {
                c2++;
            } else if (c1 == 0) {
                num1 = arr[i];
                c1 = 1;
            } else if (c2 == 0) {
                num2 = arr[i];
                c2 = 1;
            } else {
                c1--;
                c2--;
            }
        }

        c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == num1) c1++;
            else if (arr[i] == num2) c2++;
        }

        vector<int> result;
        if (c1 > n / 3) result.push_back(num1);
        if (c2 > n / 3) result.push_back(num2);

        sort(result.begin(), result.end());
        return result;
    }
};
