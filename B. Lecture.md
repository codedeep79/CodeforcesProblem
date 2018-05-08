Topic: [http://codeforces.com/problemset/problem/499/B](http://codeforces.com/problemset/problem/499/B)

Bạn có một ông giáo sư về lý thuyết đồ họa và ông ấy giảng bài rất nhanh. Bạn phải có kế hoạch để học tập và ghi chú để học tập với ông ta.

Bạn biết 2 ngôn ngữ, và giáo sư giảng bài học đầu tiên. Các từ trong cả hai ngôn ngữ bao gồm các ký tự thường tiếng Anh, mỗi ngôn ngữ bao gồm một vài từ. Đối với mỗi ngôn ngữ, tất cả các từ đều khác nhau, tức là chúng được viết khác nhau. Hơn nữa, các từ của các ngôn ngữ này có một sự tương ứng một-một, nghĩa là, đối với mỗi từ trong mỗi ngôn ngữ, có tồn tại chính xác một từ trong ngôn ngữ khác có cùng ý nghĩa nghĩa là chúng cùng nghĩa với nhau

Bạn có thể viết ra từng từ mà giáo sư nói bằng ngôn ngữ thứ nhất hoặc ngôn ngữ thứ hai. Tất nhiên, trong bài giảng bạn viết ra từng từ trong ngôn ngữ mà từ đó ngắn hơn. Trong trường hợp độ dài bằng nhau của các từ tương ứng bạn thích ngôn ngữ đầu tiên.

Bạn được đưa ra văn bản của bài giảng mà giáo sư sẽ đọc. Tìm hiểu cách bài giảng sẽ được ghi lại trong ghi chú của bạn.

## Input:

Dòng đầu tiên chứa hai số nguyên, **n và m (1 ≤  n  ≤ 3000 , 1 ≤  m  ≤ 3000)** - số từ trong bài giảng của giáo sư và số từ trong mỗi ngôn ngữ này.

Các dòng **m** chứa các từ. Các dòng **i** chứa hai chuỗi **ai**, **bi** có nghĩa là từ **ai** thuộc về ngôn ngữ đầu tiên, từ **bi** thuộc về ngôn ngữ thứ hai, và hai từ này có nghĩa tương tự. Nó được đảm bảo rằng không có từ nào xuất hiện trong cả hai ngôn ngữ, và mỗi từ xuất hiện trong ngôn ngữ của nó chính xác một lần.

Dòng tiếp theo chứa **n chuỗi** cách nhau bằng dấu cách **c1, c2 , ..., cn** - văn bản của bài giảng. Nó được đảm bảo rằng mỗi chuỗi **ci** thuộc về tập các chuỗi **{ a1 ,  a2 , ... am }** .

Tất cả các chuỗi trong đầu vào đều không trống, mỗi chuỗi không quá 10 chữ cái tiếng Anh thường.

## Output:
Xuất chính xác n từ: cách bạn sẽ ghi lại bài giảng trong sổ ghi chép của bạn. Xuất ra các từ của bài giảng theo cùng thứ tự như trong đầu vào.

## Example:
### Input:
```
5 3
ngoc ann
thi un
hbnyiyc rsoqqveh
hbnyiyc joll joll thi ann
```

### Output:

```
hbnyiyc joll joll un ann
```
### Giải quyết vấn đề:
+ Nhập **n, m** là số từ trong bài giảng của giáo sư mà sinh viên cần note, m là số từ trong mỗi ngôn ngữ cần chọn để note của 1 trong 2 ngôn ngữ
+ Nhập vào **ai** đại diện cho NN 1, **bi** đại diện cho NN 2 theo **m** lần.
+ So sánh **ai** và **bi**, nếu số kí tự của NN nào nhỏ hơn thì lưu lại vào một mảng **_string[ai]**.
+ Đối chiếu trên **n chuỗi**. Nhập vào 1 kí tự theo NN 1 là **s**, xuất ra **_string[s]** liên tiếp **n** lần.

### Code: 

[http://codeforces.com/contest/499/submission/37917777](http://codeforces.com/contest/499/submission/37917777)







