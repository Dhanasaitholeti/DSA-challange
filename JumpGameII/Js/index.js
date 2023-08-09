nums = [5,3,1,1,4];

function canJump(nums){
	let i = 1;
	while(i<nums.length){
		nums[i] = Math.max(nums[i]+i,nums[i-1]);
		i++;
	}

	let k = 0;
	let jumps = 0;
	while(k<nums.length-1){
		jumps++;
		k = nums[k];
	}

	return jumps;
}

console.log(canJump(nums));