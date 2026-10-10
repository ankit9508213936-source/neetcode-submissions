class Solution { public: int maxArea(vector<int>& heights) { int res = 0; int i = 0; int j = heights.size() - 1;

while (i < j) { int h = min(heights[i], heights[j]); int width = j - i;

res = max(res, h * width);

if (heights[i] < heights[j]) { i++; } else { j--; } }

return res; } };
