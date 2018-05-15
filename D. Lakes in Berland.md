## [D. Lakes in Berland](http://codeforces.com/problemset/problem/723/D)

Bản đồ của Berland là một hình chữ nhật có kích thước **n  ×  m** , bao gồm các ô có kích thước **1 × 1**. Mỗi ô là **đất hoặc nước**. Bản đồ được bao quanh bởi đại dương.

Nhiệm vụ của bạn là để lấp đầy đất cho các tế bào nước để có được k chính xác hồ trong Berland

### Input:
+ Dòng đầu tiên chứa 3 số nguyên **n , m và k ( 1 ≤  n ,  m  ≤ 50 , 0 ≤  k  ≤ 50 )** - kích thước của bản đồ và số lượng các hồ cần được để lại trên bản đồ.

+ n dòng tiếp theo in mỗi ký tự m - mô tả của bản đồ. Mỗi ký tự là ' . '(có nghĩa là ô tương ứng là nước) hoặc' * '(có nghĩa là ô tương ứng là đất).

Nó được đảm bảo rằng bản đồ chứa ít nhất k hồ.

### Output:
+ Trong dòng đầu tiên in số lượng tối thiểu của các cell được biến đổi tính chất từ nước sang đất.
+ n dòng tiếp theo in các kí hiệu sau khi đã thay đổi bản đồ 

### Example:
#### Input:

```
5 4 1
****
*..*
****
**.*
..**
```

#### Output:

```
1
****
*..*
****
****
..**
```

### Input:

```
3 3 0
***
*.*
***
```

### Output:
```
1
***
***
***
```

### Code:
