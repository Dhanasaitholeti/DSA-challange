var arr = [3, 3];
var target = 6;
function twoSum(nums, target) {
    var maps = {};
    for (var i = 0; i < nums.length; i++) {
        if (target - nums[i] in maps) {
            return [maps[target - nums[i]], i];
        }
        maps[nums[i]] = i;
    }
}
console.log(twoSum(arr, target));
