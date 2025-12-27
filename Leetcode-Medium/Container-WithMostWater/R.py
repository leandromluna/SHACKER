class Solution:
    def maxArea(self, height: List[int]) -> int:
        best = 0
        i = 0
        j = len(height) - 1
        while i < j:
            h = min(height[i], height[j])
            width = j - i
            best = max(best, width * h)

            if height[i] < height[j]:
                i += 1
            else:
                j -=1
        return best