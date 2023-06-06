int removeDuplicates(int* nums, int numsSize) {
    int output[numsSize];
    int i, j, k = 0;
    bool found = false;

    for (i = 0; i < numsSize; i++) {
        for (j = 0; j < k; j++) {
            if (nums[i] == output[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            output[k] = nums[i];
            k++;
        } else {
            found = false;
        }
    }

    for (int i = 0; i < numsSize; i++) {
        if (i <= k)
            nums[i] = output[i];
        else
            nums[i] = NULL;
    }

    return k;
}
