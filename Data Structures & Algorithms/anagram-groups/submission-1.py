class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = defaultdict(list)
        for s in strs:
            count = [0] * 26
            for c in s:
                count[ord(c) - ord('a')] += 1
            
            key = str(count[0])
            for i in range(1, 26):
                key += ',' + str(count[i])
            
            res[key].append(s)
        
        result = []
        for key in res:
            result.append(res[key])
        return result