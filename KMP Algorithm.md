Thuật toán được phát minh năm 1977 bởi hai giáo sư của ĐH Stanford, Hoa Kỳ Donal Knuth và Vaughan Ronald Pratt, Knuth (giải Turing năm 1971) . Thuật toán này còn có tên là KMP lấy tên viết tắt của ba người phát minh ra nó, chữ “M” là chỉ giáo sư J.H.Morris, một người cũng rất nổi tiếng trong khoa học máy tính.

Độ phức tạp: O(n)

Ý tưởng của giải thuật:
+ Đầu tiên xử lý pattern cần tìm trong chuỗi trước khi search. Khi mà chuỗi cần tìm có i kí tự giống nhau thì đánh dấu sự kiện tăng 1 được lưu vào một mảng lps[i] và tiếp tục i++. Còn nếu không giống thì đánh dấu 0

VD:

```
A   B   A    C    X     A
0   0   1    0    0     1
```

```
void computeLPSArray(char *pat, int M, int *lps)
{
    // length of the previous longest prefix suffix
    int len = 0;
    lps[0] = 0; 
    int i = 1;
    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len-1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}
```

VD: Tìm mẫu

Trong **txt[]**

index|0  | 1 | 2  |  3  |   4 | 5 | 6  |  7  |  8   |  9  |    10  |   11 | 12 |
-----|---|---|----|-----|-----|---|----|-----|------|-----|--------|------|----|
value | 1  | 2 |  3 |  4  |  A  | B |  A |   C |   X  |   A |     X  |   Y  |   Z|


Tìm **pattern[]**

index | 0 | 1 | 2 | 3 | 4 | 5 |
------|---|---|---|---|---|---|
value |A  | B | A | C | X | A | 

**lsp[]**

index | 0 | 1 | 2 | 3 | 4 | 5 |
------|---|---|---|---|---|---|
value |0  | 0 | 1 | 0 | 0 | 1 |


+ Để search 1 pattern[] trong txt[] thì chỉ cần sử dụng mảng lps[] ở trên. Ta sử dụng các giá trị của mảng để xác định vị trí kí tự so sánh trong pattern. Ta liên tục so sánh txt[i] và pattern[j]. Nếu kết quả so sánh txt[i] khớp với pattern thì tiếp tục so sánh tới cuối chuỗi. Vị trí so sánh bắt đầu tại pattern[j] với j = lps[M-1] với txt[i]

```
void KMPSearch(char *pat, char *txt)
{
    int M = strlen(pat);
    int N = strlen(txt);
    int lps[M];
 
    // Preprocess the pattern (calculate lps[] array)
    computeLPSArray(pat, M, lps);
 
    int i = 0;  // index for txt[]
    int j  = 0;  // index for pat[]
    while (i < N)
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }
 
        if (j == M)
        {
            printf("Found pattern at index %d n", i-j);
            j = lps[j-1];
        }
        else if (i < N && pat[j] != txt[i])
        {
            if (j != 0)
                j = lps[j-1];
            else
                i = i+1;
        }
    }
}
```
