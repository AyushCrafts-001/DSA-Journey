class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int i = 0;
        int j = arr.size() - 1;

        while (i < j) {
            swap(arr[i], arr[j]);

            i++;
            j--;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna