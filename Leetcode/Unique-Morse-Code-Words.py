class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        morse = [".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--",
                 "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."]
        diffStrings = set()
        for word in words:
            letters = list(word)
            for i in range(len(letters)):
                letters[i] = morse[ord(letters[i]) - ord('a')]
            diffStrings.add(''.join(letters))
        return len(diffStrings)
