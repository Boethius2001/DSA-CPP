#include <iostream>
#include <vector>
#include <string>

int partition(std::vector<int> &arr, int start, int end){

    int pivot = arr[end];
    int i = start - 1;

    for(int j= start; j <= end -1; j++){
        if(arr[j] < pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    i++;
    int temp = arr[i];
    arr[i] = arr[end];
    arr[end] = temp;

    return i;
}

void quick_sort(std::vector<int> &arr, int start, int end){

    if(start >= end) return;

    int pivot = partition(arr, start, end);

    quick_sort(arr, start, pivot-1);
    quick_sort(arr, pivot+1, end);

}

int main(){

    std::vector<int> numbers = {1,3,2,4,7,6,8,5};

    quick_sort(numbers,0,numbers.size() - 1);

    for(int number : numbers){
        std::cout << number << " ";
    }

    return 0;
} 