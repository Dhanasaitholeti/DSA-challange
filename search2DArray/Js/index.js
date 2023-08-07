nums = [
  [1, 3, 5, 7],
  [10, 11, 16, 20],
  [23, 30, 34, 60],
];

function BinarySearchRow(nums, l, h, target) {
  const mid = Math.floor((l + h) / 2);
  if (l > h) return false;
  if (nums[mid] == target) return true;
  else if (nums[mid] > target) return BinarySearchRow(nums, l, mid - 1, target);
  else return BinarySearchRow(nums, mid + 1, h, target);
}

function searchMatrix(matrix, target) {
  const m = matrix.length;
  const n = matrix[0].length;
  for (let i = 0; i < m; i++) {
    if (matrix[i][0] <= target && matrix[i][n - 1] >= target)
      return BinarySearchRow(matrix[i], 0, matrix[i].length, target);
  }
}

console.log(searchMatrix(nums, 3));
