const prices = [1, 2, 3, 4, 5];

function overallProfit(prices) {
  let totalProfit = 0;
  let diff;
  for (let i = 1; i < prices.length; i++) {
    diff = prices[i] - prices[i - 1];
    if (diff > 0) totalProfit += prices[i] - prices[i - 1];
  }

  return totalProfit;
}

console.log(overallProfit(prices));
