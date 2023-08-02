nums = [1, 2, 3, 4, 5, 6, 7];

function ReverseArray(nums, l, r) {
  if (nums.length <= 1) return;
  while (l < r) {
    let temp = nums[l];
    nums[l] = nums[r];
    nums[r] = temp;
    l++;
    r--;
  }
}

function rotateArray(nums, k) {
  const n = nums.length;
  if (k >= n) k = k % n;
  ReverseArray(nums, 0, n - k - 1);
  ReverseArray(nums, n - k, n - 1);
  ReverseArray(nums, 0, n - 1);
}

rotateArray(nums, 3);
console.log(nums);
