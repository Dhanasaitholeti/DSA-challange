const s = "anagram";
const t = "nagaram";

interface objType {
  [key: string]: number;
}

function isAnagram(s: string, t: string): boolean {
  if (s.length !== t.length) return false;
  const maps: objType = {};
  for (let i of s) maps[i] ? (maps[i] += 1) : (maps[i] = 1);

  for (let k of t) {
    if (maps[k] !== 0) {
      maps[k] -= 1;
    } else {
      return false;
    }
  }

  console.log(maps);

  const keys = Object.keys(maps);

  for (let key of keys) {
    if (maps[key]) return false;
  }
  return true;
}

console.log(isAnagram(s, t));
