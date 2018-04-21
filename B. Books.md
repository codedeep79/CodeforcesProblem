// Link: http://codeforces.com/problemset/problem/279/B

Khi Valera rãnh, anh ta đi đến thư viện để đọc một số quyển sách. Hôm nay anh ấy có t phút rãnh để đọc. Đó là lý do tại sao Valera lấy n sách trong thư viện và mỗi cuốn sách ông ước tính thời gian ông sẽ cần phải đọc nó. Số sách để theo số nguyên từ 1 đến n. Valera cần i phút để đọc mỗi cuốn sách thứ i.


Input:
+ Dòng 1: Nhập vào n sách và t phút rãnh để đọc sách (1 ≤ n ≤ 10^5; 1 ≤ t ≤ 10^9)
+ Dòng 2: Tuần tự n phút: n1, n2, n3,...  mà anh ấy cần để đọc cho mỗi quyển sách. Và anh ấy đọc liên tiếp các quyển sách. Mỗi quyển sách cần đọc t phút

Output: Tối đa bao nhiêu sách đọc được trong thời gian t

### input:
```
4 5
3 8 10 1 2
```
### Output:
```
1
```

Mô tả cách giải:
+ Nhập n sách, nhập t phút
+ Cho vòng lặp nhập a1, a2, a3,... phút cần đọc cho mỗi quyển sách
+ Dùng kỹ thuật two pointer cho 2 biến start = 0, finish = 0
+ When (finish < n) then sumFreeTime += a[finish++]
  + When (sumFreeTime > t) then start++; sumFreeTime -= a[start++]
  + output = 0, if (output < finish - start) output = finish - start
  
  Code: [http://codeforces.com/problemset/submission/279/37502248](http://codeforces.com/problemset/submission/279/37502248)
