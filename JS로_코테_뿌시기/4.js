function quickSort(array) {
    if (array.length < 2) {
        return array;
    }

    const pivot = [array[0]];
    const left = [];
    const right = [];

    for (let i = 1; i < array.length; i++) {
        if (array[i] < pivot) {
            left.push(array[i]);
        } else if (array[i] > pivot) {
            right.push(array[i]);
        } else {
            pivot.push(array[i]);
        }
    }

    return quickSort(left).concat(pivot, quickSort(right));
}

function findMaxSum(numbers) {
    numbers.sort(function (a, b) {
        return b - a;
    });
    let ret = numbers[0] + numbers[1];
    return ret;
}

console.log(findMaxSum([5, 9, 7, 11]));