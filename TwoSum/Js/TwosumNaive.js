let arr = [2, 7, 11, 15];

function solveproblem(nums, tar) {
  for (let i = 0; i < nums.length; i++) {
    for (j = i; j < nums.length; j++) {
      if (nums[i] + nums[j] == tar) {
        return [i, j];
      }
    }
  }
  return [0, 0];
}
