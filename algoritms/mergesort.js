function merge_sort(array){

    const size = array.length;
    if(size <= 1) return array;

    let middle = Math.floor(size / 2);

    let left_array = new Array(middle);
    let right_array = new Array(size - middle);

    let i = 0;
    let j = 0;
    
    for(; i<size; i++){
        if(i < middle){
            left_array[i] = array[i];
        }
        else{
            right_array[j] = array[i];
            j++;
        }
    }

    merge_sort(left_array);
    merge_sort(right_array);
    merge(left_array,right_array,array)
    
}

function merge(left_array, right_array, array){
    const left_size = left_array.length;
    const right_size = right_array.length;

    let i = 0, l = 0, r = 0;

    while(l < left_size && r < right_size){
        if(left_array[l] < right_array[r]){
            array[i] = left_array[l];
            l++;
        }
        else{
            array[i] = right_array[r];
            r++;
        }
        i++;
    }

    while (l < left_size) {
        array[i] = left_array[l];
        l++;
        i++;
    }

    while (r < right_size) {
        array[i] = right_array[r];
        r++;
        i++;
    }

}

let array = [2,1,5,4,3,6,8,7,9];

merge_sort(array);

console.log(array);