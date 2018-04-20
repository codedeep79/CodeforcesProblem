
// Link: http://codeforces.com/problemset/problem/161/A

Vương quốc 2 chiều đang trong thời kỳ khó khăn. Sáng nay vương quốc 3 chiều tuyên chiến với vương quốc 2 chiều. Xung đột vũ trang xảy ra sẽ xác định người chủ cuối cùng của đường thẳng

Quân đội của vương quốc 2 chiều có **n** lính. Mỗi người lính sẽ tự đăng kí áo chống đạn với size áo theo nguyên tắc: Người lính thứ **i** sẽ chỉ size thứ **ai**. Có 1 số người lính khiêm tốn, người chỉ huy giả định người lính sẽ lấy size **ai - x** đến **ai + y** (x,y là các số rõ ràng)

Vương quốc 2 chiều có **m** áo vest đang cần chuyển đi, áo thứ **j** có size **bj**. Hãy giúp huy động các người lính của vương quốc 2 chiều có càng nhiều áo vest càng tốt. Mỗi áo cõ thể dùng 1 lần. Người lính thứ **i** sẽ trang bị vest thứ **j**, nếu thỏa mãn: **ai - x ≤ bj ≤ ai + y**

### Input: 
+ Dòng 1: Nhập **n, m, x, y (1 ≤ n, m ≤ 10^5, 0 ≤ x, y ≤ 10^9)**, lần lượt là số lính, số vest, 2 số x,y của những người lính khiêm tốn kia.
+ Dòng 2: Nhập **a1, a2, a3,... an** theo chiều tăng là kích thước áo yêu cầu.
+ Dòng 3: Nhập **b1, b2, b3,... an** theo chiều tăng là kích thước áo có sẵn.
### Output:
+ Dòng 1: In ra số **k** là tối đa bao nhiêu người lính có vest
+ Dòng 2: In ra **k** số cặp mỗi cặp là **(ui, vi)** , nghĩa là người lính thứ **ui** sẽ có áo thứ **vi**  

Nếu có nhiều câu trả lời tối ưu có thể in bất kỳ câu trả lời

VD:
### Input:

```
5 3 0 0 
1 3 3 3 4 
1 3 5
```

### Output: 

```
2
1 1 
3 3
```
### Mô tả ý tưởng:
- Nhập n: Số lính
- Nhập m: Số áo
- Nhập x,y: Là số cụ thể để chọn áo cho lính theo điều kiện **ai - x ≤ bj ≤ ai + y**
- Nhập a[i] là kích thước áo mong muốn
- Nhập b[j] là kích thước áo có sẵn
- Duyệt vòng lặp cho i: 0 -> n là số lính, j: 0 -> m là số áo
- Nếu lính thứ i không thử từng áo có size đúng thì j++
- Nếu lính thứ i đã thử hết số áo nhưng vẫn chưa tìm ra thì i++
- Nếu lính thứ i chọn áo phù hợp với điều kiện **ai - x ≤ bj ≤ ai + y** thì lưu vào một mảng a[count] = i++, b[count] = j++, count++
- In ra các mảng a[count], b[count] và count
