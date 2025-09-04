#include <iostream>
#include <vector>
using namespace std;

vector<long long> productExceptIndex(const vector<int>& arr) {
    int size = arr.size();
    vector<long long> output(size, 1);  // Initialize output with 1s

    // TODO: complete the function as per instructions
   
    // Step 1: Compute the product of all elements to the left of each index
    long long prefix = 1;  // Start with 1, as there are no elements to the left of the first element
    for (int i = 0; i < size; i++) {
        output[i] = prefix;  // Set the output at index i to the product of elements to the left
        prefix *= arr[i];     // Update the prefix product for the next element
    }

    // Step 2: Compute the product of all elements to the right of each index
    long long suffix = 1;  // Start with 1, as there are no elements to the right of the last element
    for (int i = size - 1; i >= 0; i--) {
        output[i] *= suffix;  // Multiply the current output with the product of elements to the right
        suffix *= arr[i];      // Update the suffix product for the next element
    }

    return output;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) cin >> arr[i];

    vector<long long> res = productExceptIndex(arr);
    for(auto v : res)
        cout << v << " ";
    cout << "\n";

    return 0;
}
