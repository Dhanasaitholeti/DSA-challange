const s = "Dhaas sai Tholeti    ";
function LastStrLen(s) {
  let strlen = 0;
  if (s.length <= 0) return strlen;
  let i = s.length - 1;
  while (i >= 0) {
    if (s[i] == " " && strlen > 0) break;
    else if (s[i] == " " && !strlen) i--;
    else {
      strlen += 1;
      i--;
    }
  }
  return strlen;
}

console.log(LastStrLen(s));
