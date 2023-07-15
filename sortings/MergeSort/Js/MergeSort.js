const arr = [4, 3, 2, 1];

const Merge = (arr, l, m, e) => {
  return arr;
};

const MergeSort = (arr, start, end) => {
  if (arr.length <= 1) return arr;
  if (end - start + 1 <= 1) return arr;
  mid = start + (end - start) / 2;
  MergeSort(arr, start, mid);
  MergeSort(arr, mid + 1, end);

  Merge(arr, start, mid, end);
  return arr;
};

const res = MergeSort(arr, 0, arr.length - 1);
console.log(res);
