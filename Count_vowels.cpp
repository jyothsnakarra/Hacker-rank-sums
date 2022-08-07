class Solution {
public:
    int countVowelPermutation(int n) {
        if (n == 0) return 1;
        if (n == 1) return 5;

        vector<unordered_map<char, int>> dp(n);

        dp[0] = {
            {'a', 1},
            {'e', 1},
            {'i', 1},
            {'o', 1},
            {'u', 1}
        };

        for (int i = 1; i < n; ++i) {
            unordered_map<char, int> charToCount;
            for (auto& entry : dp[i-1]) {
                char c = entry.first;
                int count = entry.second;
                for (auto& follower : followers[c]) {
                    charToCount[follower] = (charToCount[follower] + count) % MOD;
                }
            }

            dp[i] = charToCount;
        }

        int ret = 0;
        for (auto& entry : dp[n-1]) {
            ret = (ret + entry.second) % MOD;
        }

        return ret;

    }

private:
    const int MOD = 1e9 + 7;
    unordered_map<char, vector<char>> followers {
        {'a', {'e'}},
        {'e', {'a', 'i'}},
        {'i', {'a', 'e', 'o', 'u'}},
        {'o', {'i', 'u'}},
        {'u', {'a'}}
    };

};
