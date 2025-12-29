class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(256, -1);   // última posición vista de cada char
        int left = 0, maxLen = 0;

        for (int right = 0; right < s.size(); right++) {
            if (last[s[right]] >= left)
                left = last[s[right]] + 1;

            last[s[right]] = right;
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};

//O(n*1) 
// Time Complexity: O(n)
// The space complexity: O(1)
// Trade-off: Faster because it jumps directly to the next valid position, but slightly harder to understand.
/**
Instead of removing characters one by one, I store the last index of each character and jump the left pointer directly, keeping the window valid at all times.
 */