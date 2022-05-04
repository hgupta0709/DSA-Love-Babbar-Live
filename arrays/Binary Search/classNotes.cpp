/*

t.c = o(log N)
condition  = increasing or decreasing

Baisc binary search algorithm
s = 0;
e = n-1;
first fing the mid = s+e/2;

if(ans[mid] == target)
    return true;
if(target < arr[mid])
    end = mid -1;
if(target > arr[mid])
    start = mid + 1;
