const statement = "()]";
console.log(isValidParanthesis(statement));

function isValidParanthesis(str) {
  let stk = [];
  for (let c of str) {
    if (c === "(" || c === "{" || c === "[") stk.push(c);
    else {
      if (stk.length === 0) return false;
      if (
        (c === ")" && stk[stk.length - 1] === "(") ||
        (c === "}" && stk[stk.length - 1] === "{") ||
        (c === "]" && stk[stk.length - 1] === "[")
      )
        stk.pop();
      else return false;
    }
  }
  return stk.length === 0;
}
