class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        hashmap = defaultdict(int)
        for i in range(len(numbers)):
            temp = target - numbers[i]
            if hashmap[temp]:
                return [hashmap[temp], i + 1]
            hashmap[number[i]] = i + 1
        return []