// Pair Sum : 2 pointer approch optimised code :
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> Pair_sum(vector<int> nums, int target) {
    vector<int> ans;
    int i = 0, n = nums.size(), j = n - 1;

    while (i < j) {
        int pairsum = nums[i] + nums[j];
        if (pairsum > target) {
            j--;
        } else if (pairsum < target) {
            i++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;   
        }
    }
    return ans;   
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements in the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "The entered array is: " << endl;
    for (int val : nums) {
        cout << val << " ";
    }

    int target;
    cout << "\nEnter the target element: ";
    cin >> target;

    sort(nums.begin(), nums.end());

    vector<int> ans = Pair_sum(nums, target);

    if (!ans.empty()) {
        cout << "Pair found at indices: " << ans[0] << " " << ans[1] << endl;
        cout << "Values are: " << nums[ans[0]] << " " << nums[ans[1]] << endl;
    } else {
        cout << "No pair found!" << endl;
    }

    return 0;
}