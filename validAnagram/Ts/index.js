var s = "anagram";
var t = "nagaram";
function isAnagram(s, t) {
    if (s.length !== t.length)
        return false;
    var maps = {};
    for (var _i = 0, s_1 = s; _i < s_1.length; _i++) {
        var i = s_1[_i];
        maps[i] ? (maps[i] += 1) : (maps[i] = 1);
    }
    for (var _a = 0, t_1 = t; _a < t_1.length; _a++) {
        var k = t_1[_a];
        if (maps[k] !== 0) {
            maps[k] -= 1;
        }
        else {
            return false;
        }
    }
    console.log(maps);
    var keys = Object.keys(maps);
    for (var _b = 0, keys_1 = keys; _b < keys_1.length; _b++) {
        var key = keys_1[_b];
        console.log(maps[key]);
        if (maps[key])
            return false;
    }
    return true;
}
console.log(isAnagram(s, t));
