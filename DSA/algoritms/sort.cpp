#include <iostream>
#include <vector>

void selection_sort(std::vector<int> &arr){

    for(int i=0 ; i<arr.size() -1 ; i++){
        int min = i;
        for(int j = 0 + i; j<arr.size(); j++){
            if(arr[j] < arr[min]){
                min = j;
            }

           int temp = arr[i];
           arr[i] = arr[min];
           arr[min] = temp; 

        }
    }

}

void bouble_sort(std::vector<int> &arr){
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size() - i -1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){

    std::vector<int> arr = {1,4,3,2,5,7,6,8,10,9};

    selection_sort(arr);
    //bouble_sort(arr);

    for(int element : arr){
        std::cout << element << " ";
    }

    return 0;
}