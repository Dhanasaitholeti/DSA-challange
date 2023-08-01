let nums = [0, 0, 1, 1, 1, 1, 2, 3, 3];

function removeDuplicates(nums) {
  if (nums.length <= 2) {
    return nums.length;
  }
  // Initialize an integer k that updates the kth index of the array...
  // only when the current element does not match either of the two previous indexes...
  let k = 2;
  // Traverse elements through loop...
  for (let i = 2; i < nums.length; i++) {
    // If the index does not match the (k-1)th and (k-2)th elements, count that element...
    if (nums[i] != nums[k - 2] || nums[i] != nums[k - 1]) {
      nums[k] = nums[i];
      k++;
      // If the index matches the (k-1)th and (k-2)th elements, we skip it...
    }
  }
  return k;
}

const result = removeDuplicates(nums);
console.log(nums);
