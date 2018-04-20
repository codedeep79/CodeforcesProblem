Mã đi tuần (hay hành trình của quân mã) là bài toán về việc di chuyển một quân mã trên bàn cờ vua ( 8 x 8). Quân mã được đặt ở một ô trên một bàn cờ trống nó phải di chuyển theo quy tắc của cờ vua để đi qua mỗi ô trên bàn cờ đúng một lần.

Ý tưởng:
+ Ta cần lưu trữ các vị trí con mã đi qua: int a[N][N], với N là số dòng (cột) của bàn cờ.
+ Giả sử con mã đang ở vị trí (x, y). Ta có 8 khả năng  con mã có thể đi qua (x-2, y-1), (x-1, y-2), (x+1, y-2), (x+2, y-1), (x+2, y+1), (x+1, y+2), (x-1, y+2), (x-2, y+1). Dùng thuật toán thử và sai để tìm vị trí kế tiếp của con mã. Vị trí kế tiếp (u, v) là vị trí phải nằm trong bàn cờ (0 <= u, v < n) và con mã chưa đi qua (a[u][v] == 0).

