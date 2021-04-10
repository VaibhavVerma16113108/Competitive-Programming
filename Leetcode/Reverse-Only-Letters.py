class Solution:
    def reverseOnlyLetters(self, S: str) -> str:
        l = list(S)
        i, j = 0, len(S) - 1
        while i < j:
            if l[i].isalpha() and l[j].isalpha():
                l[i], l[j] = l[j], l[i]
                i, j = i + 1, j - 1
            elif l[i].isalpha():
                j -= 1
            elif l[j].isalpha():
                i += 1
            else:
                i, j = i + 1, j - 1

        return "".join([str(elem) for elem in l])
