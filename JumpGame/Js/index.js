nums = [2, 3, 1, 1, 4];

function canJump(nums) {
  let target = nums.length - 1;
  let ptr = target - 1;
  while (ptr >= 0) {
    if (nums[ptr] + ptr >= target) target = ptr;
    ptr--;
  }

  return target == 0 ? true : false;
}

console.log(canJump(nums));
