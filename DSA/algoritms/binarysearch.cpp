#include <iostream>
#include <vector>

int binary_search(std::vector<int> &arr, int target){
    
    int low, high, mid;

    low = 0;
    high = arr.size() - 1;
    
    while(low <= high){
        mid = low + (high - low) / 2;

        if(target > arr[mid]){
            low = mid + 1;
        }
        else if(target < arr[mid]){
            high = mid - 1;
        }
        else{
            return mid;
        }
    }
    
    return -1;
}

int main(){
                    // index :  0 1 2 3 4  5  6  7  8  9  10 11 12 13 14
    std::vector<int> numbers = {2,4,6,8,10,12,14,16,18,20,22,24,26,28,30};
    int target = 16;

    int index = binary_search(numbers, target);

    if(index != 1) std::cout << "Target found at index : " << index;
    else std::cout << "target not found!";

    return 0;
}