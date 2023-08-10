const nums = [1, 2, 3, 1];
function containDuplicates(nums) {
  let mymap = {};
  for (let i of nums) {
    if (mymap[i]) return true;
    mymap[i] = 1;
  }
  return false;
}

console.log(containDuplicates(nums));
