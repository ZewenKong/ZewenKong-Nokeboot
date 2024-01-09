def strStr(haystack: str, needle: str) -> int:
    m, n = len(haystack), len(needle)  # get length

    if haystack == needle: return 0

    for i in range(m - n + 1):
        for j in range(n):
            if haystack[i + j] != needle[j]:  # compare each position in haystack
                break
            if j == n - 1:
                return i

    return -1
