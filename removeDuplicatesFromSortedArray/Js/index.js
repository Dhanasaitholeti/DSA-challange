let nums = [1, 1, 2];
function removeDuplicates(nums) {
  let orderedValues = [];
  for (let i of nums) {
    if (
      orderedValues.length < 1 ||
      orderedValues[orderedValues.length - 1] != i
    ) {
      orderedValues.push(i);
    }
  }

  for (let i = 0; i < orderedValues.length; i++) {
    nums[i] = orderedValues[i];
  }

  return orderedValues.length;
}

removeDuplicates(nums);
