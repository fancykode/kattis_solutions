from sys import stdin

nums = sorted(list(map(int, stdin.readline().strip().split())))
print(min(nums[0], nums[1]) * min(nums[2], nums[3]))
