const arr = [1, 2, 3, 4];
interface objType {
  [key: number]: number;
}
function containDuplicates(arr: number[]): boolean {
  const maps: objType = {};
  for (let i of arr) {
    if (maps[i]) return true;
    maps[i] = 1;
  }
  return false;
}

console.log(containDuplicates(arr));