int maxArea(int* height, int heightSize) {
    int i = 0;
    int j = heightSize - 1;
    int best = 0;

    while (i < j) {
        int h = height[i] < height[j] ? height[i] : height[j];
        int w = j - i;
        int area = h * w;

        if (area > best) best = area;

        if(height[i]  < height[j]) i++;
        else 
           j--;
    }
    return best;
}