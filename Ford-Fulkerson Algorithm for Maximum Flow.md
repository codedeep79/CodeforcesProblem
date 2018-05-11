Đưa ra một biểu đồ đại diện cho một mạng lưới lưu lượng, nơi mọi cạnh đều có một khả năng thông qua (capacity). Cũng đưa ra hai đỉnh nguồn 's' và đích 't' trong biểu đồ, tìm luồng cực đại từ s đến t với các ràng buộc sau:

+ Luồng (flow) trên một cạnh không vượt quá c (capacity) của cạnh.
+ Luồng đầu vào phải bằng bằng luồng đầu ra 

![](https://www.geeksforgeeks.org/wp-content/uploads/ford_fulkerson2.png)

![](https://www.geeksforgeeks.org/wp-content/uploads/ford_fulkerson11.png)

Hình trên là đồ thị đã xây dựng luồng. Ta cứ xây dựng đồ thị luồng cực đại trên mỗi đường từ s -> t cho đến khi không còn đường nào đi từ s -> t.

### Thuật toán Ford-Fulkerson tìm luồng cực đại
#### Ý tưởng:
+ Bắt đầu từ flow = 0
+ Trong khi tăng một path từ s -> t thì thêm 1 **path_flow** (số luồng cực đại đi từ s -> t)
+ Trả về tổng số **path_flow**

#### Độ phức tạp thuật toán:
Độ phức tạp của thuật toán trên là **O(max_flow * E)**. Chạy một vòng lặp trong khi có một **path_flow** tăng lên. Trong trường hợp xấu nhất, ta có thể thêm 1 luồng trong mỗi lần lặp lại. Do đó độ phức tạp thời gian trở thành **O(max_flow * E)**.

#### 
