## [B. Devu, the Dumb Guy](http://codeforces.com/contest/439/problem/B)

Devu là một người chậm hiểu, sự học tập của anh ấy rất chậm. Bạn có nghĩa vụ phải dạy cho anh ta **n** môn học, chủ đề thứ **i** có **ci** chương. Khi bạn dạy anh ta, bạn phải dạy tất cả các chương của các môn liên tục.

Ban đầu, anh ấy học các chương của một môn trong x giờ. Môn kế tiếp thì anh ta có thể học các chương nào với thời gian ít hơn chương trước 1 giờ. Và một điều kiện là thời gian học mỗi chương không dưới 1 giờ.

Bạn có thể dạy anh ta **n** môn học trong khả năng có thể. Tìm thời gian tối thiểu mà Devu có thể hiểu tất cả các môn học (không phân biệt thứ tự môn học nào Devu học trước)

Chú ý: Có một số trường hợp của câu trả lời không thuộc kiểu dữ liệu 32bit:
+ **long int** và **long** có kích thước dữ liệu là 4 bytes có 32bit
+ **long long** và **long long int** có kích thước dữ liệu là 8 bytes có  64 bits
+ **long double** không được đảm bảo trong một số compiler
+ **long** <=> **long int**, **short** <=> **short int**
+ **long long** rộng hơn **long**

### Input:
+ Nhập n môn học, x thời gian
+ Nhập các chương của n môn học
### Output:
+ Thời gian tối thiểu để Devu hiểu hết các chương và không phân biệt thứ tự môn học nào Devu học trước.

### Mô tả cách giải:
+ Sắp xếp các chương tăng dần
+ Do thời gian học các chương của mỗi môn học ít hơn 1 giờ so với môn trước nên thời gian mỗi môn được viết **sum_chapter[i] * x--**. Và một điều kiện là thời gian học mỗi chương không dưới 1 giờ nên **if (x == 0) x = 1**  

**Input:**
```
2 3
4 1
```
**Output:**
```
11
```

**Input:**
```
4 2
5 1 2 1
```
**Output:**
```
10
```
**Input:**
```
3 3
1 1 1
```
**Output:**
```
6
```

### Code: [http://codeforces.com/contest/439/submission/37526058](http://codeforces.com/contest/439/submission/37526058)
