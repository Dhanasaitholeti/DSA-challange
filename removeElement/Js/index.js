let nums = [2, 3, 3, 2];
let val = 3;
function removeElement(nums, val) {
  let elements = [];
  for (let i of nums) {
    if (i != val) elements.push(i);
  }

  for (let i = 0; i < elements.length; i++) nums[i] = elements[i];

  return elements.length;
}

const result = removeElement(nums, val);
