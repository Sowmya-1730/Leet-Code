class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int odd_cnt = 0, even_cnt = 1; 
        int prefix_sum = 0, cnt = 0, MOD = 1e9 + 7;

        for (int num : arr) {
            prefix_sum += num;

            if (prefix_sum % 2 == 0) { 
                cnt = (cnt + odd_cnt) % MOD;
                even_cnt++; 
            } else { 
                cnt = (cnt + even_cnt) % MOD;
                odd_cnt++;
            }
        }

        return cnt;
    }
};