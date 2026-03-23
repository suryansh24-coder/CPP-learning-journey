#include <iostream>
#include <vector>
using namespace std;

// Function to find two indices
vector<int> findTwoSum(vector<int>& arr, int target) {

    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {

            if(arr[i] + arr[j] == target) {
                return {i, j};
            }
        }
    }

    return {};   // If no pair found
}

int main() {

    int n, target;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target: ";
    cin >> target;

    vector<int> result = findTwoSum(arr, target);

    if(result.size() == 2) {
        cout << "Indices are: " << result[0] << " and " << result[1];
    } else {
        cout << "No pair found";
    }

    return 0;
}
