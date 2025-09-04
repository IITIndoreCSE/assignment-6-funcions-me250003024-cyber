#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(const vector<int>& arr) {
    // TODO: complete the function as per instructions
    // Step 1: Check if the array has less than 2 elements
    int size = arr.size();
    if (size < 2) {
        return -1;  // No second largest element exists
    }

    // Step 2: Initialize the largest and second variables
    int largest = INT_MIN;  // Set largest to smallest possible value
    int second = INT_MIN;   // Set second to smallest possible value

    // Step 3: Loop through each value in the array
    for (int val : arr) {
        if (val > largest) {
            // Update second to the old largest
            second = largest;
            largest = val;
        } else if (val > second && val != largest) {
            // Update second if val is greater than second and not equal to largest
            second = val;
        }
    }

    // Step 4: If second hasn't been updated, return -1 (no second largest)
    if (second == INT_MIN) {
        return -1;
    }

    return second;  // Return the second largest element
}

int main() {
    int n; cin >> n;  // Input the size of the array
    vector<int> arr(n);
   
    // Input the array elements
    for(int i=0; i<n; i++) {
       cin >> arr[i];
    }
   
    // Output the second largest element
    cout << secondLargest(arr) << "\n";
   
    return 0;
}
	
