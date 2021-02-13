/**
 * @param {string[]} words
 * @return {string[]}
 */
var stringMatching = function(words) {
    const output = []
    for(let i = 0; i < words.length; i++){
        for(let j = 0; j < words.length; j++){
            if(j == i) continue;
            if(words[j].includes(words[i])){
                output.push(words[i]);
                break;
            }
        }
    }
    return output;
};