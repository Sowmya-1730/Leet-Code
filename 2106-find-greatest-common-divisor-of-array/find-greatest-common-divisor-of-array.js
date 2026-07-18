/**
 * @param {number[]} nums
 * @return {number}
 */

var findGCD = function(nums) {

    let minNumber = nums.reduce((acc, value) => {
        return acc > value ? value : acc;
    });

    let maxNumber = nums.reduce((acc, value) => {
        return acc < value ? value : acc;
    });

    const gcd = (a, b) => {
        return b === 0 ? a : gcd(b, a % b);
    }
    return gcd(Math.abs(minNumber), Math.abs(maxNumber));
};
console.log(findGCD);