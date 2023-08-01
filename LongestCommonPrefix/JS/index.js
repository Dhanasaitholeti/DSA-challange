const arr = ["floor", "flower", "flow"];

let res = findlcp(arr);

console.log(res);

function findlcp(strs) {
  for (let i = 0; i < strs.length - 1; i++) {
    for (let j = i + 1; j < strs.length; j++) {
      if (strs[j] < strs[i]) {
        let temp = strs[j];
        strs[j] = strs[i];
        strs[i] = temp;
      }
    }
  }

  let first = strs[0];
  let last = strs[strs.length - 1];

  let finalstr = "";
  for (let k = 0; k < first.length; k++) {
    if (first[k] !== last[k]) {
      break;
    }
    finalstr = finalstr + first[k];
  }
  return finalstr;
}
