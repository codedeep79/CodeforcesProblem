# CodeforcesProblem
Some problem algorithm of Codeforces

+ What does this mean in C : 

```
while (scanf ("%d %d\n", &p, &q) == 2)
```

Trả về 2 biến integer được đọc được.

```
while (scanf ("% d% d", & n, & m) != EOF)
```
Trả về 2 biến n, m cho đến cuối tập tin được ghi

### Cấp phát bộ nhớ động trong C : **malloc**, **calloc**
  + void* malloc (size_t size)
  + void* calloc (size_t num, size_t size)
  
Vd: Cấp phát n phần tử:
- int *a = (int *) malloc( n * sizeof( int* ));
- int *b = (int *) calloc( n, sizeof( int* ));

+ **Hiệu suất**: **malloc** nhanh hơn so với **calloc**. Lý do là **calloc** ngoài việc có nhiệm vụ cấp phát vùng nhớ như **malloc**, nó còn phải gán giá trị cho tất cả các phần tử của vùng nhớ vừa cấp phát bằng 0
+ Việc chọn **malloc** hay **calloc** là do mục tiêu sử dụng. Nếu mình không quan tâm đến giá mặc định của vùng nhớ được cấp thì dùng **malloc** còn nếu muốn tất cả là 0 thì dùng **calloc**.

VD:

```
#include <stdlib.h>     

int main ()
{
  int * buffer1, * buffer2, * buffer3;
  buffer1 = (int*) malloc (100 * sizeof(int));
  buffer2 = (int*) calloc (100,sizeof(int));
  buffer3 = (int*) realloc (buffer2, 500 * sizeof(int));
  free (buffer1);
  free (buffer3);
  return 0;
}
```

### Cấp phát bộ nhới trong C++:

```
#include <iostream>

struct MyClass {
  MyClass() {std::cout <<"MyClass constructed\n";}
  ~MyClass() {std::cout <<"MyClass destroyed\n";}
};

int main () {
  MyClass * pt;

  pt = new MyClass[3];
  delete[] pt;

  return 0;
}
```

```
#include <iostream>
using namespace std;
 
int main ()
{
    // Pointer initialization to null
    int* p = NULL;

    p = new int;
    if (!p)
        cout << "allocation of memory failed\n";
    else
    {
        // Store value at allocated address
        *p = 29;
        cout << "Value of p: " << *p << endl;
    }
 
    float *r = new float(75.25);
 
    cout << "Value of r: " << *r << endl;
 
    int n = 5;
    int *q = new int[n];
 
    if (!p)
        cout << "allocation of memory failed\n";
    else
    {
        for (int i = 0; i < n; i++)
            q[i] = i+1;
 
        cout << "Value store in block of memory: ";
        for (int i = 0; i < n; i++)
            cout << q[i] << " ";
    }
 
    delete p;
    delete r;

    delete[] q;
 
    return 0;
}
```
### Sự khác nhau giữa new và malloc

Based | **new** | **malloc()**
------|---------|-----------
**Language** | C++, Java, C# | C
**Nature** | new là toán tử | malloc() là hàm
**sizeof()** | không dụng toán tử sizeof() trong new, new cấp đủ vùng nhớ các kiểu đối tượng cụ thể. Kích thước được tính bởi compiler | malloc yêu cầu sizeof() tính toán kích thước của memory. 
**Constructor** | Cấp phát bộ nhớ và gọi hàm dựng của đối tượng khởi tạo| Không gọi được constructor
**Initialization** | Có thể khởi tạo đối tượng trong khi cấp phát bộ nhớ cho đối tượng đó | Không khởi tạo bộ nhớ trong malloc
**Overloading** | Có thể được ghi đè | không thể ghi đè hàm malloc()
**Failure** | Khi không đủ vùng nhớ hay bị lỗi thì new quăng ra ngoại lệ | Trả về NULL
**Deallocation** | delete a; delete[] b | free(c);
**Reallocation** | Không thay đổi được kích thước phần tử sau khi cấp phát | Thay đổi kích thước phần tử bởi **realloc()**
**Execution** | new nhanh hơn malloc vì toán tử luôn nhanh hơn hàm | malloc() yêu cầu nhiều thời gian để thực thi

### Copy an array in C/C++

```
void * memcpy ( void * destination, const void * source, size_t num );
```

### Allocate memory for 2 pointer:

```
//allocate the array
int** arr = new int*[row];
for(int i = 0; i < row; i++)
    arr[i] = new int[col];

// use the array

//deallocate the array
for(int i = 0; i < row; i++)
    delete[] arr[i];
delete[] arr;
```
