# - - - - - - - - - -
# Pointer
# - - - - - - - - - -
# def removeElement(nums, val):
#     k = 0
#     for i in range(len(nums)):
#         if nums[i] != val:
#             nums[k] = nums[i]
#             k += 1
#     return k

def removeElement(nums: list[int], val: int) -> int:
    p1 = 0  # fast pointer, 快指针
    p2 = 0  # slow pointer, 慢指针

    while p1 < len(nums):
        if nums[p1] != val:
            nums[p2] = nums[p1]
            p2 += 1
        p1 += 1
    return p2


val = 3
nums = [2, 2, 3, 2]
print(removeElement(nums, val))
