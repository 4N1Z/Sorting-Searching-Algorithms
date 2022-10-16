// Algorithm
// The task is to compare each element with it's adjacent element, identify the larger one and swap it's position with the smaller one.

// After every iteration we would end up assigning the largest element at last.

// It's called Bubble sort as it is analogous to larger bubbles getting burst before the smaller ones just as in our algorithm we find end up arranging the heavier elements at their correct places.

const bubbleSort=(array)=>{
    for(let i=0;i<array.length;i++){
        for(let j=i+1;j<array.length;j++){
            if(array[i]>array[j]){
                [array[i],array[j]]=[array[j],array[i]];
            }
        }
    }
    return array;
}
const res=bubbleSort();
console.log(res);

