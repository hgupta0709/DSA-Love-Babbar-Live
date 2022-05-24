/*
    [-2, 45, 0, 11, -9]
    Round 1 -  -2>45 -> aage badho
                45>0 -> swap [-2, 0, 45, 11, -9]
                45>11 -> swap [-2, 0, 11, 45, -9]
                45>-9 -> swap [-2, 0, 11, -9, 45] 45 reched in its correct position
    Round 2 - -2>0, 0>11 -> aage badho
                11>-9 -> swap [-2, 0, -9, 11, 45]
    finnaly the sorted array will be sorted
    [-9, -2, 0, 11, 45]     

                            TC = best O(n) -> if there eill be sorted array.(we will break thee array when no swapping takes place)
                            worst = O(N2)
                            S.C = O(1)        
*/