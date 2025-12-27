int maxArea(int* height, int heightSize) {
    int i = 0; //O(1)
    int j = heightSize - 1; //O(1)
    int best = 0; //O(1)

    while (i < j) { // O(n)
        int h = height[i] < height[j] ? height[i] : height[j]; //O(1)
        int w = j - i; //O(1)
        int area = h * w; //O(1)

        if (area > best) best = area; //O(1)

        if(height[i]  < height[j]) i++; //O(1)
        else 
           j--; //O(1)
    }
    return best;
}
// O(n * 1) = O(n)

// Time Complexity: O(n)
// The space complexity: O(1)
// Trade-off: Lose width for height to maximize area, lose simplicity of brute-force for efficiency n velocity.