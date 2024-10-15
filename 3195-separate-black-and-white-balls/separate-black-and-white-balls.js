/**
 * @param {string} s
 * @return {number}
 */
var minimumSteps = function(s) {
    let blacks = 0;
    let count = 0;
    for(const i of s)
    {
        if(i === '1')
        {
            blacks+=1;
        }
        else
        {
            count+=blacks;
        }
    }
    return count;
};