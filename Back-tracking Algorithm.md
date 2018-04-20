Bài toán đặt ra là liệt kê tất cả các cách xếp **n** quân hậu trên bàn cờ có  **n** hàng **n** cột sao cho chúng không ăn được nhau.

Đánh số **dòng và cột** của bàn cờ từ **0 đến n-1**, mỗi hàng chỉ xếp được đúng **một quân hậu**, nên chúng ta chỉ cần quan tâm đến quân hậu được xếp ở cột nào. Một sắp xếp được biểu diễn bằng bộ **( x(0), x(1), … , x(n-1) ), trong đó x(i) = j có nghĩa là quân hậu dòng i xếp vào cột j**. Thành phần **x(i) có thể nhận giá trị từ 0 đến n-1, giá trị j là chấp nhận được nếu ô (i, j) chưa bị các quân hậu trước chiếu đến**. **Ta cần ghi nhận trạng thái của bàn cờ trước cũng như sau khi xếp 1 quân hậu.**
Việc kiểm soát theo chiều ngang là không cần thiết vì mỗi dòng chỉ xếp 1 quân hậu. Việc kiểm soát theo chiều dọc được ghi nhận nhờ mang a: **Quy ước a(j) = 1 nếu cột j còn trống**.

**Đối với 2 đường chéo** ta có nhận xét rằng:  **Đường chéo nghiêng sang phải** có phương trình là **i + j = const ( i+j nhận giá trị từ 0 đến 2n-2)**, **đường chéo nghiêng sang trái có phương trình là i – j = const ( i – j nhận giá trị từ 1 – n đến n – 1). Do đó đường chéo thứ nhất được ghi nhận từ biến mảng b(j) với j nhận giá trị từ 0 đến 2n-2, đường chép thứ hai nhờ biến mảng c(j) với j nhận giá trị từ 1 – n đến n – 1** với quy ước các **đường này còn trống nếu  biến tương ứng có giá trị bằng 1.**

Lúc đầu các biến trạng thái **a(j), b(j), c(j)** đều nhận giá trị 1. Như vậy giá trị j được chấp nhận nếu cả 3 biến **a(j), b(i+j), c(i-j)** cùng có giá trị bằng 1.Các biến này cần gán lại bằng 0 khi xếp xong quân hậu thứ i và trả lại = 1 sau khi gọi Print() hay XepHau().

+ a(j): Đường nằm ngang
+ b(j): Đường chéo nghiêng phải
+ c(j): Đường chéo nghiêng trái
 
**Mảng x và mảng a có n phần tử, mảng b và mảng c có 2n-1 phần tử (Vì mảng b và c chạy từ 0 tới 2n - 2)**. Đối với đường chéo thứ hai nếu ta lấy  **i – j + (n -1)** thì nó sẽ nhận giá trị từ **0 đến 2n – 2.**
![](https://lh3.googleusercontent.com/EZiHMVlt213yYfLvFVFI_tgVKXfj7UX7ceKa5DOqpRKi76VjWdr0G4Yp_8u9QFBDAz9y8sFTlld6Ya8k2jWBdn0T1hgCNFwEgYkOiCnIl6neIqFfiPTC1F9URGInmuV69ASLTgEi5nuutrzuMY8NP-EVaO_h2LmdBWM5b8BV3UV2dtBA2Mo_Dro0BaXpIcl5EQxGYgciPbOEbzxfqjJ7Fcari_RCk2BSwWHMjQLehM0xHzw3OMhhqZckmPFiU2Nu5FbK95igMXx-Ye3THWBC0aWD3u6enlSSdiittmn1iuWBoB9NmJ7sSFkw7IV5lzvklL2O5qm4Oh6nntlve1DEB2B4c8zn6E-y9qvbH-uLg6gXmG7Py-NftTWQ8E8dWE_Oh5Kh4j6H9hm65ckN-IxDGxcGh68UnVv3pKZLw8W3IxNa0nTc5udxbhyjrL1Zq-bqXnhaeuNanDMMUe2Mp6mAflNliQduk0sWDADPtxyX4Hu6m-ImnRMaQQpq2hrh_wPR1z7to5NuTOxfaPF0k_uHrrg5yhMuYAHZqKyY1b-g3NDfeupn6A4a5VVQQ1rFDl5m3NkNa5-J4OFYHHGzI4F09-zzWScI8l3NRT6MpRQNE8Ce799fGc2MGguCRyDltOinSVHT7RtGXcCkOuUAbE1bEz-C56Bi8qb8=w713-h351-no)
