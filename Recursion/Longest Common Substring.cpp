/*
    m = length of string s1,
    n = length of string s2.

    Test Case :- s1 = "AXY"
                 s2 = "BA"
*/

int LCS(string s1, string s2, int m, int n){

    if(m == 0 || n == 0)         // any of the string becomes empty
        return 0;
    if(s1[m-1] == s2[n-1])
        return 1 + LCS(s1, s2, m-1, n-1);
    else
        max(LCS(s1, s2, m-1, n), LCS(s1, s2, m, n-1));
}