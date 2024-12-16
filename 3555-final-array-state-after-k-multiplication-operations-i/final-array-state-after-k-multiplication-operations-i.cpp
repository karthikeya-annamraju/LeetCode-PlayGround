class Solution {
public:
    vector<int> getFinalState(vector<int>& arr, int k, int multiplier) {
        
        for (int i = 0; i < k; i++) {
            int min = *min_element(arr.begin(), arr.end());
            for (int j = 0; j < arr.size(); j++) {
                if (arr[j] == min) {
                    arr[j] = arr[j]*multiplier;
                    break;
                }
            }
        }
        return arr;

    }
};