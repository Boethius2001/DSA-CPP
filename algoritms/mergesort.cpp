#include <iostream>
#include <vector>

void merge(std::vector<int> &left_arr, std::vector<int> &right_arr, std::vector<int> &arr){

    int r = 0, l = 0, a = 0;

    while(l < left_arr.size() && r < right_arr.size()){
        if(left_arr[l] <= right_arr[r]){
            arr[a] = left_arr[l];
            l++;
        }
        else if(right_arr[r] <= left_arr[l]){
            arr[a] = right_arr[r];
            r++;
        }
        a++;
    }

    while(l < left_arr.size()){
        arr[a] = left_arr[l];
        a++;
        l++;
    }
    while(r < right_arr.size()){
        arr[a] = right_arr[r];
        a++;
        r++;
    }

}

void merge_sort(std::vector<int> &arr){
   
    int length = arr.size();
    if(length <= 1) return;

    int mid = length / 2;

    std::vector<int> right_array(arr.begin(), arr.begin() + mid);
    std::vector<int> left_array(arr.begin() + mid , arr.end());

    merge_sort(left_array);
    merge_sort(right_array);
    merge(left_array, right_array, arr);

}


int main(){

    std::vector<int> numbers = {2,1,3,5,4,6,9,8,7};
    
    merge_sort(numbers);

    for(int num : numbers){
        std::cout << num << " ";
    }

    return 0;
}