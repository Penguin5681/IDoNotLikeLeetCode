class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        num_count = Counter(nums)
        new_map = dict(sorted(num_count.items(), key=lambda item: item[1]))
        first_key = list(new_map.keys())[-1]
        return first_key