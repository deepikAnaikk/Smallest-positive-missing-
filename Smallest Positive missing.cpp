class Solution {
public:
    int missingNumber(vector<int> &arr) {
        int n = arr.size();

        // Step 1: Place each number in its correct position if possible
        for (int i = 0; i < n; ++i) {
            while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
                swap(arr[i], arr[arr[i] - 1]);
            }
        }

        // Step 2: Find the first place where index doesn't match value
        for (int i = 0; i < n; ++i) {
            if (arr[i] != i + 1) {
                return i + 1;
            }
        }

        // If all values are in correct place, return n + 1
        return n + 1;
    }
};
