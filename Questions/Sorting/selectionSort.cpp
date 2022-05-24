/*
        For example :- [7, 5, 4, 2]

        1. choose the minimum element of the array
        2. Now swap the min with the current i position ie. 7 (now 2 is at correct position then i++)
        3. round2 - [2, 5, 4, 7] - Choose the min element from 5, 4, 7 i.e 4 and the i is at 5 so we will swap. after swappin [2, 4, 5, 7]
        4. round 3   - now 5 is at it's correct position so 5 will swap by itself 
        5. round 4 -  same as round 3
        so the array is sorted [2, 4, 5, 7]

                                        It will take O(N2) in best case and worst case and S.C = O(1) 
*/