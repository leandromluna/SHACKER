int lengthOfLongestSubstring(char* s) {
    int left = 0, max = 0;
    int last[256];

    for(int i = 0; i < 256; i++) //O(1)
        last[i] = -1;

    int n = strlen(s); //O(n)

    for (int right = 0; right < n; right++){ //O(n)

        if(last[(unsigned char)s[right]] >= left)
                left = last[(unsigned char)s[right]] +1;

        last[(unsigned char)s[right]] = right;
        
        int len = right - left + 1;
        if(len>max) max = len;
    }
    return max;
}

//O(n + n)
// Time Complexity: O(n)
// The space complexity: O(1)
// Trade-off: Faster because it jumps directly to the next valid position, but slightly harder to understand.
/**
Instead of removing characters one by one, I store the last index of each character and jump the left pointer directly, keeping the window valid at all times.
 */