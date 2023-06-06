bool canMakeArithmeticProgression(int* arr, int arrSize) {
    int tmp, dif;

    for (int i = 0; i < arrSize - 1; i++) {
        for (int j = i + 1; j < arrSize; j++) {
            if (arr[j] < arr[i]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    dif = arr[1] - arr[0];

    for(int i = 2; i < arrSize; i++) {
        if (arr[i] - arr[i - 1] != dif) {
            return false;
        }
    }
    return true;
}
