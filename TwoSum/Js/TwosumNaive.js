let arr = [3, 2, 4];
let target = 6;
console.log(solveproblem(arr, target));

function solveproblem(nums, tar) {
  for (let i = 0; i < nums.length; i++) {
    for (let j = i + 1; j < nums.length; j++) {
      if (nums[i] + nums[j] == tar) {
        return [i, j];
      }
    }
  }
  return [0, 0];
}
