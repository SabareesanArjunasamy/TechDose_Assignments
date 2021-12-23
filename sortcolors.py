def sortColors(self, nums: List[int]) -> None:
        red = 0
        blue = len(nums)-1
        i = 0
        while i <= blue:
            if nums[i] == 0:
                swap = nums[red]
                nums[red] = 0
                nums[i] = swap
                red += 1
                i += 1
            elif nums[i] == 2:
                swap = nums[blue]
                nums[blue] = nums[i]
                nums[i] = swap
                blue -= 1
            else:
                i += 1