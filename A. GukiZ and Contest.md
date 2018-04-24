## [A. GukiZ and Contest](http://codeforces.com/problemset/problem/551/A)

Giáo sư GukiZ thích các cuộc thi lập trình. Ông đặc biệt thích xếp hạng các sinh viên của mình trong các cuộc thi mà ông chuẩn bị. Bây giờ, anh ấy đã quyết định chuẩn bị một cuộc thi mới.

Tổng cộng, n học sinh sẽ tham dự, và trước khi bắt đầu, mỗi người trong số họ có một số xếp hạng số nguyên dương. Học sinh được lập chỉ mục từ 1 đến n . Đánh giá của sinh viên i như là i . Sau khi cuộc thi kết thúc, mỗi học sinh sẽ kết thúc với một số vị trí số nguyên dương. GukiZ hy vọng rằng sinh viên của mình sẽ theo học các địa điểm theo xếp hạng của họ.

Cách xếp hạng như sau: 1 + (số sinh viên có hạng cao hơn họ)

### Input:
+ Dòng 1: Số nguyên n ( 1 ≤  n  ≤ 2000 ), số lượng sinh viên của GukiZ.
+ Dòng 2: Chứa ni với n1 ,  n2 , ... ni ( 1 ≤  i  ≤ 2000 ), i là đánh giá của giáo sư ( 1 ≤  i  ≤  n ).

### Output:
Vị trí xếp hạng n sinh viên theo thứ tự như đầu vào.

#### Input:

```
5 
3 5 3 4 5
```

#### Output:

```
4 1 4 3 1
```
### Describe the idea:

+ Duyệt vòng lặp 1 từ i: 0 -> n - 1
+ Duyệt vòng lặp 2 trong vòng lặp 1 từ j = i + 1 -> n - 1
+ Nếu a[i] < a[j] thì ++count, cuối vòng lặp 2 thì in ra vị trí xếp hạng là count + 1

### Code: http://codeforces.com/contest/551/submission/37533009


