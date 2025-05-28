/**
 * @param {number[]} nums
 * @param {number} k
 * @param {number} x
 * @return {number[]}
 */
var findXSum = function(nums, k, x) {
    const result = [];

    for (let i = 0; i <= nums.length - k; i++) {
        const freqMap = new Map();

        for (let j = i; j < i + k; j++) {
            freqMap.set(nums[j], (freqMap.get(nums[j]) || 0) + 1);
        }
        const freqList = Array.from(freqMap.entries())
            .map(([val, count]) => ({ val, count }))
            .sort((a, b) => {
                if (b.count !== a.count) return b.count - a.count;
                return b.val - a.val; 
            });

        let sum = 0;
        let xRemaining = x;

        for (const { val, count } of freqList) {
            const occur = Math.min(count, k);
            if (xRemaining <= 0) break;
            sum += val * occur;
            xRemaining--;
        }

        result.push(sum);
    }

    return result;
};