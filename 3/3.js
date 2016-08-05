/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    var h = 0;
    var l = 0;
    // c store the last position of charactor
    var c = {};
    for (var t = 0; t < s.length; ++t){
        // check t-th charactor in s appear or not
        if (typeof(c[s[t]]) == 'number' && c[s[t]] >= h) {
            h = c[s[t]] + 1;
        }
        c[s[t]] = t;
        if (t - h + 1 > l) {
            l = t - h + 1;
        }
    }
    return l;
};


// console.log(lengthOfLongestSubstring("abcabcbb"));
// console.log(lengthOfLongestSubstring("bbbbb"));
// console.log(lengthOfLongestSubstring("pwwkew"));
console.log(lengthOfLongestSubstring("abba"));
