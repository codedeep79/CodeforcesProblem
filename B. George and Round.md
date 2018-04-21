// Link problem: http://codeforces.com/problemset/problem/387/B

George định chuẩn bị cho cho các vòng thi Codesecrof, anh ấy có m problem cho mỗi vòng. Có từ 1 đến m problem. George ước lượng độ phức tạp của vấn đề i sẽ tương ứng với bi.

+ Dòng thứ 1 nhập n và m (1 ≤ n, m ≤ 3000), với n là số vấn đề tối thiểu để tổ chức cuộc thi tốt, m là số vấn đề mà George chọn.
+ Dòng thứ 2 nhập các con số a1, a2, ..., an (1 ≤ a1 < a2 < ... < an ≤ 10^6) là độ phức tập yêu cầu để tổ chức cuộc thi
+ Dòng thứ 3 nhập các con số b1, b2, ..., bm (1 ≤ b1 ≤ b2... ≤ bm ≤ 10^6) là độ phức tạp vấn đề mà George sẽ chuẩn bị.

Output là kết quả của câu trả lời là còn lại bao nhiêu vấn đề 

**Input:**

```
3 5
1 2 3
1 2 2 3 3

```
**Output:**

```
0
```

**Input:**

```
3 5
1 2 3
1 1 1 1 1
```
**Output:**

```
2
```


**Input:**

```
3 1
2 3 4
1
```
**Output:**

```
3
```
Code: [http://codeforces.com/problemset/submission/387/37501739](http://codeforces.com/problemset/submission/387/37501739)
