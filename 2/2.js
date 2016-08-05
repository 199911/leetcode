/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function(l1, l2) {
    var s = {};
    var d = s;
    var d1 = l1;
    var d2 = l2;
    // sum
    do {
        d.val = 0 ;
        if (d1){
            d.val += d1.val;
            d1 = d1.next;
        }
        if (d2){
            d.val += d2.val;
            d2 = d2.next;
        }
        if (d1 || d2) {
            d.next = {};
            d = d.next;
        }
    } while(d1 || d2);

    // carry
    d = s;
    do {
        if (d.val >= 10) {
            d.val -= 10;
            if (d.next) {
                d.next.val += 1;
            } else {
                d.next = {
                    val: 1
                }
            }
        }
        d = d.next;
    } while(d);

    // convert answer to array
    var ans = [];
    d = s;
    while(d){
        ans.push(d.val);
        d = d.next;
    }
    return ans;
};

var num1 = {
    val: 2,
    next: {
        val: 4,
        next: {
            val: 3
        }
    }
};

var num2 = {
    val: 5,
    next: {
        val: 6
        // next: {
        //     val: 4
        // }
    }
};

console.log(addTwoNumbers(num1, num2));
