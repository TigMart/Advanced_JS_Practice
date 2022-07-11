"use strict";

const reverse = function (str) {
  let newstr = "";
  for (let i = str.length - 1; i >= 0; --i) {
    newstr += str[i];
  }
  return newstr;
};

console.log(reverse("hello"));
