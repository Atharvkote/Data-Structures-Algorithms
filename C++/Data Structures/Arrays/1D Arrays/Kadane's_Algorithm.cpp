#include <iostream>
#include <algorithm> // For std::max
using namespace std;

// Kadane's Algorithm to find the maximum subarray sum
void maxSubarraySum3(int arr[], int size) {
    int currentSum = 0;
    int maxSum = 0;

    for(int i = 0; i < size; i++) {
        currentSum += arr[i];
        if (currentSum < 0) {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }

    cout << "Max subarray sum is: " << maxSum << endl;
}

int main() {
    int arr[] = {1, -2, 6, -1, 3};
    int size = sizeof(arr)/sizeof(arr[0]);

    maxSubarraySum3(arr, size); 

    return 0;
}
