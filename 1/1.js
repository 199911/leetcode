/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
  for ( var i = 1; i < nums.length; ++i ) {
    for ( var j = 0; j < i; ++j) {
      if (nums[i] + nums[j] == target) {
        return [i, j];
      }
    }
  }
};

// console.log( twoSum([2, 7, 11, 15], 9) );
// console.log( twoSum([0,4,3,0], 0) );
// console.log( twoSum([3,2,4], 6) );
