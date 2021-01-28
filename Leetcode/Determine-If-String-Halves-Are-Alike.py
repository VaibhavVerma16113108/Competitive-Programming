class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
        return sum(map(s[:len(s)//2].count, vowels)) == sum(map(s[len(s)//2:].count, vowels))
