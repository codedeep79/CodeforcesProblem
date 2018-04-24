## [B. Pasha and Tea](http://codeforces.com/problemset/problem/557/B)

Pasha quyết định mời bạn bè đến một bữa tiệc trà. Trong dịp đó, ông có một ấm trà lớn với dung tích **w** ml và **2n** chén trà, mỗi cốc là một trong những bạn bè của Pasha.

Hóa ra là trong số những người bạn của Pasha, có chính xác là **n** chàng trai và chính xác là **n** cô gái và tất cả bọn họ sẽ đến dự buổi tiệc trà. Để làm hài lòng tất cả mọi người, Pasha quyết định đổ nước cho trà như sau:

+ Pasha có thể đun sôi ấm trà đúng một lần bằng cách đổ hết các w ml nước (điểm quan trọng);
+ Pasha đổ cùng một lượng nước cho mỗi cô gái;
+ Pasha đổ cùng một lượng nước cho mỗi cậu bé;
+ Nếu mỗi cô gái nhận được **x** mililít nước, thì mỗi chàng trai nhận được **2 x** ml nước.
Nói cách khác, mỗi chàng trai sẽ có nhiều nước hơn **hai lần** so với mỗi cô gái.

Pasha rất tử tế và lịch sự, vì vậy anh ta muốn tối đa hóa tổng lượng nước mà anh ta đổ cho bạn bè. Nhiệm vụ của bạn là giúp anh ta và xác định sự phân bố tối ưu của ly giữa bạn bè của Pasha.

### Input:
+ Dòng 1: Chứa 2 số nguyên, **n** và **w ( 1 ≤  n  ≤ 10^5 , 1 ≤  w  ≤ 10^9 )**. Lần lượt **n** là số bạn bè của Pasha là con trai (bằng số bạn của Pasha là con gái) và **w** dung tích của ấm trà của Pasha tính bằng mililít.
+ Dòng 2: Các dung lượng là **ai** (1 ≤ ai ≤ 10^9, 1 ≤ i ≤ 2n) được chọn 1 để pha trà cho bạn Pasha. Tổng dung lượng của chúng bằng **w**

### Output: 
Là một số thực, dung lượng tối đa mà Pasha dùng để pha trà cho các bạn

### Describe the idea:

+ Sắp xếp tăng dần
+ Đặt u = a[0], v = a[n - 1] / 2
+ Đặt x = min(u,v) vì chọn dung lượng nhỏ nhất để tìm dung lượng cho nữ và khi áp dụng tính dung lượng tối đa thì không vượt quá dung tích **w**
+ Tìm dung lượng tối đa cần đổ vào bình có w ml: **min(x * n + 2 * x * n, w)** vì tìm được x dung lượng cần pha cho nữ nên nam bằng 2x. Tổng dung lượng phải <= dượng tích ấm trà **w** nên dùng biểu thức **min(x * n + 2 * x * n, w)** để lấy dung lượng cần pha

### Code: http://codeforces.com/contest/557/submission/37530804
