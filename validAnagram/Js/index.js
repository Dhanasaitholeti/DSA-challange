let s = "anagram";
let t = "nagaram";

function isAnagram(s, t) {
  if (s.length != t.length) return false;
  let mapp = {};
  for (let c of s) mapp[c] ? (mapp[c] += 1) : (mapp[c] = 1);

  for (let c of t) mapp[c] ? (mapp[c] -= 1) : (mapp[c] = 1);

  const kims = Object.keys(mapp);

  for (let i of kims) if (mapp[i] !== 0) return false;

  return true;
}
console.log(isAnagram(s, t));
