let nums = [2, 2, 1, 1, 1, 2, 2];

function majorityElement(nums) {
  let hashmap = new Map();
  const n = nums.length;
  let majorityEle;
  for (let i of nums) {
    if (!hashmap.has(i)) {
      hashmap.set(i, 1);
    } else {
      const upd = hashmap.get(i);
      hashmap.set(i, upd + 1);
    }
  }
  hashmap.forEach((val, key) => {
    if (val > n / 2) {
      majorityEle = key;
    }
  });

  return majorityEle;
}

const result = majorityElement(nums);
console.log(result);
