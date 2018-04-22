## [B. Devu, the Dumb Guy](http://codeforces.com/contest/439/problem/B)

Devu là một người chậm hiểu, sự học tập của anh ấy rất chậm. Bạn có nghĩa vụ phải dạy cho anh ta **n** môn học, chủ đề thứ **i** có **ci** chương. Khi bạn dạy anh ta, bạn phải dạy tất cả các chương của các môn liên tục.

Ban đầu, anh ấy học các chương của một môn trong x giờ. Môn kế tiếp thì anh ta có thể học các chương nào với thời gian ít hơn chương trước 1 giờ. Và một điều kiện là thời gian học mỗi chương không dưới 1 giờ.

Bạn có thể dạy anh ta **n** môn học trong khả năng có thể. Tìm thời gian tối thiểu mà Devu có thể hiểu tất cả các môn học.

Chú ý: Có một số trường hợp của câu trả lời không thuộc kiểu dữ liệu 32bit:
+ **long int** và **long** có kích thước dữ liệu là 4 bytes có 32bit
+ **long long** và **long long int** có kích thước dữ liệu là 8 bytes có  64 bits
+ **long double** không được đảm bảo trong một số compiler
+ **long** <=> **long int**, **short** <=> **short int**
+ **long long** rộng hơn **long**
