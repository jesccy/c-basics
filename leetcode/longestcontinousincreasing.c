int findLengthOfLCIS(int* nums, int numsSize) {
    int i, longestsub = 1, currentsub = 1;
    for (i = 0; i < numsSize - 1; i++) {
        if (nums[i] < nums[i + 1]) {
            currentsub = currentsub + 1;
        } else {
            if (currentsub > longestsub) {
                longestsub = currentsub;
            }
            currentsub = 1;
        }
    }
    if (currentsub > longestsub) {
        longestsub = currentsub;
    }
    printf("%d", longestsub);
    return longestsub;
}
