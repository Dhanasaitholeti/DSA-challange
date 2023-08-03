const prices = [2, 1, 1, 2, 0, 1, 2];

function maxProfit(prices) {
  let l = 0;
  let r = 1;
  let n = 0;
  let mxpr = 0;

  while (r < prices.length) {
    n = prices[r] - prices[l];
    if (n < 0) {
      prices[l] > prices[r] ? (l = r) : l++;
      r++;
    } else {
      mxpr < n ? (mxpr = n) : (mxpr = mxpr);
      r++;
    }
  }
  return mxpr;
}

console.log(maxProfit(prices));
