def countSentences(wordSet,sentences):
    word_map = {}
    for word in wordSet:
        tmp = tuple(sorted(word))
        word_map[tmp] = word_map.get(tmp, 0) + 1
    ans = [1] * len(sentences)
    for i in range(len(sentences)):
        for word in sentences[i].split():
            key = tuple(sorted(word))
            if key in word_map:
                ans[i] *= word_map[key]
    return ans

wordSet = ["listen","silent","it","is"]
sentences = ["listen it is silent"]
result = countSentences(wordSet,sentences)
print(result)