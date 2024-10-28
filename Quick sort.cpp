class Solution {
private:
    int partition(vector<int>& arr, int p, int pi) {
        int x = arr[pi];
        int i = p - 1;
        for (int j = p; j < pi; j++) {
            if (arr[j] <= x) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[pi]);
        return i + 1; 
    }

    void quicksort(vector<int>& arr, int p, int pi) {
        if (p < pi) {
           
            quicksort(arr, p, partition(arr, p, pi) - 1);
            quicksort(arr, partition(arr, p, pi)+ 1, pi); 
        }
    }
    
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        quicksort(nums, 0, n - 1);
        return nums; 
    }
};

