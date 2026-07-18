/**
 * @param {string} s
 * @return {number}
 */
var minLength = function(s) {
    
    let stack = [];
    
    for(character of s) {
        let top = stack[stack.length - 1];
        
        if((top === 'A' && character === 'B') || (top === 'C' && character === 'D')) {
            stack.pop();
        } else {
            stack.push(character);
        }
    }

    return stack.length;
};