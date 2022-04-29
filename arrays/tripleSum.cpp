/*
Question link :- https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1#
            logic
    First we will sort the array
    -We Will Apply Two pointer Approch
    -we will Fix the first element as A
    -Take 2 pointer Low and High
    -an arr = [1, 4, 6, 8, 10, 45]
    -a + b + c = x
    -b + c = X - a => 13 - 1 = 12
    -so now we have to find low + high that is equal to 12
    low is 4 and high is 45 so 45 + 4 = 49 which is greater than 12 so high--
    -now high is 10 i.e 4+10 = 14, high--
    -now high is 8 i.e 4 + 8 = 12, 12=12
    -now we found the element so we will return 1;
*/

sort(A, A + n);
for (int i = 0; i < n; i++)
{
    int y = X - A[i];
    int low = i + 1, high = n - 1;
    while (low < high)
    {
        if (A[low] + A[high] == y)
        {
            return 1;
        }
        else if (A[low] + A[high] > y)
        {
            high--;
        }
        else if (A[low] + A[high] < y)
        {
            low++;
        }
    }
}
return 0;



// ----------------------------------------------------------------           Brute Force         --------------------------------------------------------------

// int main() {
// int t;
// cin>>t;
// while(t--)                                                               //T.C = N3
// {
// int n,x;
// cin>>n>>x;
// int a[n];
// for (int i=0;i<n;i++)
// cin>>a[i];
// int ans=0;
// for (int i=0;i<n;i++)
// {
// for(int j=i+1;j<n; j++)
// {
// for (int k=j+1; k<n; k++)
// {
// }
// return 0;
// if(a[i]+a[j]+a[k] ==x)
// ans=1;
// }
// cout<<ans<<endl;