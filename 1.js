let arr = [10 , 20 , 30];
arr.map((num)=>{
    console.log(num=>num--);
})
console.log(arr);

arr = arr.map(num=>num-1);
console.log(arr);