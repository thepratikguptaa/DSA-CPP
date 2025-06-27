class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<int> arr2;

        for (int i = 0; i < arr.size(); i++) {
            int count = 1;

            // Count occurrences of the current element
            while (i + 1 < arr.size() && arr[i] == arr[i + 1]) {
                count++;
                i++;
            }

            arr2.push_back(count);
        }

        sort(arr2.begin(), arr2.end());

        for (int i = 1; i < arr2.size(); i++) {
            if (arr2[i] == arr2[i - 1]) {
                return false;
            }
        }

        return true;
    }
}; 