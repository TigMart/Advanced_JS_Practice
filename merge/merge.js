const merge = function (arr1, arr2, arr3) {
  let size1 = arr1.length;
  let size2 = arr2.length;
  let i = 0,
    j = 0,
    k = 0;

  while (i < size1 && j < size2) {
    if (arr1[i] < arr2[j]) {
      arr3[k++] = arr1[i++];
    } else {
      arr3[k++] = arr2[j++];
    }
  }
  while (i < size1) {
    arr3[k++] = arr1[i++];
  }
  while (j < size2) {
    arr3[k++] = arr2[j++];
  }
  return arr3;
};

let arr1 = [2, 5, 8];
let arr2 = [1, 3, 4, 6, 7];
let arr3 = [];
console.log(merge(arr1, arr2, arr3));
