const isChar = (c: string) => {
  const regex = /^[A-Za-z0-9]+$/;
  return regex.test(c);
};

function isPalindrome(s: string) {
  let newstr: string = "";
  for (let i of s) {
    if (isChar(i)) {
      newstr += i.toLowerCase();
    }
  }

  for (let i = 0; i < newstr.length / 2; i++) {
    console.log(newstr[i], " ", newstr[newstr.length - i - 1]);
    if (newstr[i] !== newstr[newstr.length - i - 1]) return false;
  }
  return true;
}

const str = "0P";

console.log(isPalindrome(str));
