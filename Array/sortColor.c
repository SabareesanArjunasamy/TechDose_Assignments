void sortColors(int *nums, int numsSize)
{
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] > nums[j])
            {
                int swap = nums[j];
                nums[j] = nums[i];
                nums[i] = swap;
            }
        }
    }
}