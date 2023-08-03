const prices = [1, 2, 3, 4, 5];

function overallProfit(prices) {
  let l = 0;
  let r = 1;
  let n = 0;
  let ovpr = 0;
  while (r < prices.length) {
    n = prices[r] - prices[l];
    if (n > 0) {
      ovpr += n;
    }
    l++;
    r++;
  }

  return ovpr;
}

console.log(overallProfit(prices));
