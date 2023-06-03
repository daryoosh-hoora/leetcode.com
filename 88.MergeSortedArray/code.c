void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int i, j, k;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (nums2[i] <= nums1[j]) {
                //memmove(nums1[j + 1], nums1[j], (m - j - 1) * sizeof(int));
                for (k = m; k > j; k--) {        
                    nums1[k] = nums1[k - 1];
                }
                break;
            }
        }
        nums1[j] = nums2[i];
        m++;
    }
}
