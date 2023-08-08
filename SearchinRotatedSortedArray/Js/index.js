nums = [1, 3];
let pivot;
function BSpivot(nums) {
  let l = 0;
  let r = nums.length - 1;
  while (l <= r) {
    let mid = Math.floor((l + r) / 2);
    if (nums[mid] < nums[r]) r = mid;
    else l = mid + 1;
  }
  return r;
}

function BinSearch(nums, l, r, target) {
  while (l <= r) {
    let mid = Math.floor(l + (r - l) / 2);
    let realmid = (pivot + mid) % nums.length;
    if (nums[realmid] == target) return realmid;
    else if (nums[realmid] < target) l = mid + 1;
    else r = mid - 1;
  }

  return -1;
}

function search(nums, target) {
  pivot = BSpivot(nums);
  console.log(pivot);
  return BinSearch(nums, 0, nums.length - 1, 3);
}

console.log(search(nums, 5));
