def removeElement(nums, val):
    k = 0
    for i in range(len(nums)):
        if nums[i] != val:
            nums[k] = nums[i]
            k += 1
    return k


val = 3
nums = [2, 2, 3, 2]
print(removeElement(nums, val))

# https://pythontutor.com/render.html#mode=display