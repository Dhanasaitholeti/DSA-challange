//Array to sort in incremental order
const arr = [95, 23, 45, 61, 10];

function Bubblesort(arr) {
  for (let i = 0; i < arr.length; i++) {
    // First we start to iterate for lenght times
    for (let j = 0; j < arr.length - i - 1; j++) {
      // we start another loop which value is less than the arr.lenght-i-1 because the bigger value already moved to the last of the array
      if (arr[j] > arr[j + 1]) {
        // check if the adjacent values
        temp = arr[j]; // if before value is higher then swap
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  return arr;
}

console.log(Bubblesort(arr));
