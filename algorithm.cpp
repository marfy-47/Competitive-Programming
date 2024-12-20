#include <iostream>
#include <vector>

// Function to perform the partitioning step of Quick Sort
int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[low]; // Pivot is the first element
    int i = low + 1;      // Start from the next element
    int j = high;         // Start from the end

    while (i <= j) {
        // Move i to the right while it's less than or equal to the pivot
        while (i <= high && arr[i] <= pivot) {
            i++;
        }
        // Move j to the left while it's greater than the pivot
        while (j >= low && arr[j] > pivot) {
            j--;
        }
        // If there are elements to swap, swap them
        if (i < j) {
            std::swap(arr[i], arr[j]);
        }
    }
    // Swap the pivot element into its correct position
    std::swap(arr[low], arr[j]);
    return j; // Return the index of the pivot element
}

// Function to perform the Quick Sort (only for the first partition phase)
void quickSortFirstPhase(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        // No recursive calls for the rest of the quick sort phase
    }
}

// Function to print the array
void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Input sequence
    std::vector<int> arr = {7, 11, 14, 6, 9, 4, 3, 12};

    // Apply the first phase of Quick Sort
    quickSortFirstPhase(arr, 0, arr.size() - 1);


    printArray(arr);

    return 0;
}

