Topic: [http://codeforces.com/problemset/problem/90/B](http://codeforces.com/problemset/problem/90/B)

Ô chữ Châu Phi là một bảng chữ nhật có kích thước **n x m**. Mỗi ô của bảng chứa chính xác một chữ cái. Bảng này (nó còn được gọi là lưới) chứa một số từ được mã hóa cần được giải mã.

Để giải quyết ô chữ, bạn nên bỏ qua tất cả các chữ cái lặp lại trong hàng và cột. Nói cách khác, một lá thư chỉ nên được gạch bỏ khi và chỉ khi cột hoặc hàng tương ứng chứa ít nhất một chữ cái giống hệt nhau. Bên cạnh đó, tất cả các chữ cái đó được gạch chéo hết.

Khi tất cả các chữ cái lặp đi lặp lại đã được gạch chéo, chúng ta nên viết các chữ cái còn lại trong một chuỗi. Các chữ cái chiếm một vị trí cao hơn theo sau các chữ cái chiếm một vị trí thấp hơn. Nếu các chữ cái nằm trong một hàng, thì chữ cái bên trái sẽ xuất hiện trước. Từ kết quả là câu trả lời cho vấn đề.

Bạn được đề nghị để giải quyết một ô chữ châu Phi và in từ được mã hóa ở đó.

## Input:
Dòng đầu tiên chứa hai số nguyên n và m ( 1 ≤  n ,  m  ≤ 100 ) với **n** là số dòng, tiếp theo **m** là chữ thường Latinh. Đó là lưới ô chữ.
## Output:
In từ được mã hóa trên một dòng. Nó được đảm bảo câu trả lời ít nhất một chữ cái.

## Example:

### Input:
```
5 5 
fcofd 
ooedo 
afaoa 
rdcdf 
eofsf
```
### Output:

```
codeforces
```

### Code: []()

