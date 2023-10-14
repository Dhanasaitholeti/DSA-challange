const arr = [3, 3];
const target = 6;

interface mapsType {
  [key: number]: number;
}

function twoSum(nums: number[], target: number) {
  const maps: mapsType = {};
  for (let i = 0; i < nums.length; i++) {
    if (target - nums[i] in maps) {
      return [maps[target - nums[i]], i];
    }
    maps[nums[i]] = i;
  }
}

console.log(twoSum(arr, target));
