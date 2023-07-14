const nums = [1, 3, 5, 6];
const target = 2;

function SearchIndexPosition(arr, start, end, target) {
  if (arr[end] < target) return end + 1;
  let l = start;
  let r = end;
  while (l < r) {
    let mid = Math.floor(l + (r - l) / 2);
    if (arr[mid] == target) return mid;
    else if (arr[mid] > target) r = mid;
    else l = mid + 1;
  }
  return l;
}

console.log(SearchIndexPosition(nums, 0, nums.length - 1, target));
