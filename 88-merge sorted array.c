void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {

    int i = 0, j = 0, index = 0;
    int newArr[m + n];

    while(i < m && j < n){
        if(nums1[i] < nums2[j]){
            newArr[index++] = nums1[i++];
        } else{
            newArr[index++] = nums2[j++];
        }
    }

    while(i < m){
        newArr[index++] = nums1[i++];
    }

    while(j < n){
        newArr[index++] = nums2[j++];
    }

    for(int b = 0; b < m + n; b++){
        nums1[b] = newArr[b];
    }
    
}