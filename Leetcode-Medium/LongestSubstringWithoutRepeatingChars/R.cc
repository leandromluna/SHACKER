class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st; //O(1)
        int left = 0, right = 0; // O(1)
        int maxLen = 0; //O(1)

        while (right < s.length()) { //O(n)
            if (st.find(s[right]) == st.end()) { //O(1)
                st.insert(s[right]); //O(1)
                maxLen = max(maxLen, right - left +1); //O(1)
                right++; //O(1)
                
            } else {
                st.erase(s[left]); //O(1)
                left++; //O(1)
            }
        }
        return maxLen; //O(1)
    }
};

//O(n*1) 
// Time Complexity: O(n)
// The space complexity: O(1)
// Trade-off: Easier to understand but slower because it removes characters one by onie when duplicates appears.

/*
What does your algorithm do?
- It use a sliding window with two pointers and a set to maintain a substring without repeated characters
Why is it correct?
- The window always represents a continous substring.
When a duplicate appears, we shrink the window from the left until the duplicate is removed.
Time Complexity
- Each character is inserted and removed at most once, so the time complexity is O(n)
Space Complexity
- The set stores at most one occurrence of each possible character, so space complexity is O(1) 

*/