

// Maximum Rectangle in Binary Matrix containing all 1's

#include <iostream>
#include <vector>
#include <stack>
#include <climits>
using namespace std;

#define MAX 100

class Solution {

private:

    // Next Smaller Element
    vector<int> nextSmallerElement(vector<int> &arr, int n) {
        stack<int> s;
        s.push(-1);

        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--) {

            int curr = arr[i];

            while (s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }

            ans[i] = s.top();
            s.push(i);
        }

        return ans;
    }

    // Previous Smaller Element
    vector<int> previousSmallerElement(vector<int> &arr, int n) {

        stack<int> s;
        s.push(-1);

        vector<int> ans(n);

        for (int i = 0; i < n; i++) {

            int curr = arr[i];

            while (s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }

            ans[i] = s.top();
            s.push(i);
        }

        return ans;
    }

public:

    // Largest Rectangle in Histogram
    int LargestArea(vector<int> &heights, int n) {

        vector<int> next = nextSmallerElement(heights, n);
        vector<int> prev = previousSmallerElement(heights, n);

        int area = INT_MIN;

        for (int i = 0; i < n; i++) {

            int length = heights[i];

            if (next[i] == -1)
                next[i] = n;

            int breadth = next[i] - prev[i] - 1;

            int newArea = length * breadth;

            area = max(area, newArea);
        }

        return area;
    }

    // Maximum Rectangle in Binary Matrix
    int maxArea(int M[MAX][MAX], int n, int m) {

        vector<int> histogram(m);

        // First row
        for (int j = 0; j < m; j++) {
            histogram[j] = M[0][j];
        }

        int area = LargestArea(histogram, m);

        // Remaining rows
        for (int i = 1; i < n; i++) {

            for (int j = 0; j < m; j++) {

                if (M[i][j] != 0)
                    histogram[j] += M[i][j];
                else
                    histogram[j] = 0;
            }

            area = max(area, LargestArea(histogram, m));
        }

        return area;
    }
};

int main() {

    int M[MAX][MAX] = {
        {0, 1, 1, 0},
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 0, 0}
    };

    int n = 4;
    int m = 4;

    Solution obj;

    cout << "Maximum area of rectangle containing all 1's = "
         << obj.maxArea(M, n, m);

    return 0;
}
