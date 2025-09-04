#include <iostream>
#include <vector>
using namespace std;

int sumArray(const vector<int>& arr) {
    // TODO: complete the function as per instructions
    int sum = 0;  // Initialize sum to 0

    // Loop through each element in the vector and add it to sum
    for (int val : arr) {
        sum += val;
    }

    // After the loop ends, return the total sum
    return sum;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++)
        cin >> arr[i];

    cout << sumArray(arr) << "\n";
    return 0;
}
