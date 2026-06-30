//Next Previous ELements

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Previous {
public:
    vector<int> PreviousElement(vector<int> &arr, int n) {

        stack<int> s;
        s.push(-1);

        vector<int> ans(n);

        for (int i = 0; i < n; i++) {

            int curr = arr[i];

            while (s.top() != -1 && s.top() >= curr) {
                s.pop();
            }

            ans[i] = s.top();

            s.push(curr);
        }

        return ans;
    }
};

int main() {

    vector<int> arr = {2, 1, 4, 3};
    int n = arr.size();

    Previous obj;

    vector<int> ans = obj.PreviousElement(arr, n);

    cout << "Previous Smaller Elements: ";

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
