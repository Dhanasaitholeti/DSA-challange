var isChar = function (c) {
    var regex = /^[A-Za-z0-9]+$/;
    return regex.test(c);
};
function isPalindrome(s) {
    var newstr = "";
    for (var _i = 0, s_1 = s; _i < s_1.length; _i++) {
        var i = s_1[_i];
        if (isChar(i)) {
            newstr += i.toLowerCase();
        }
    }
    for (var i = 0; i < newstr.length / 2; i++) {
        console.log(newstr[i], " ", newstr[newstr.length - i - 1]);
        if (newstr[i] !== newstr[newstr.length - i - 1])
            return false;
    }
    return true;
}
var str = "0P";
console.log(isPalindrome(str));
