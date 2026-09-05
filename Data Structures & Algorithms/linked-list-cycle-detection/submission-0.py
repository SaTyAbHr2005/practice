class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        seen = set()
        curr = head
        while curr:
            if curr in seen:
                return True
            seen.add(curr)
            curr = curr. next
        return False