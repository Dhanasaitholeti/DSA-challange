const haystack = "Dhanasai";
const needle = "ana";
function strStr(haystack, needle) {
  const len = haystack.length;
  const n = needle.length;
  const lastletter = needle[n - 1];
  let i = 0;
  while (i < len) {
    if (haystack[i] == lastletter && i >= n - 1) {
      console.log(haystack.substring(i - n + 1, n));
      if (haystack.substring(i - n + 1, i + n) == needle) {
        return i - n + 1;
      }
      i++;
    }

    return -1;
  }
}

console.log(strStr(haystack, needle));
