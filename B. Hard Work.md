Topic: [http://codeforces.com/problemset/problem/61/B](http://codeforces.com/problemset/problem/61/B)

Sau một cuộc tranh luận về vấn đề so sánh số, giảng viên của Shapur nhận ra anh là một thiên tài thật sự và không có công cụ tính toán nào tính nhanh hơn anh ta thậm chí là sử dụng siêu máy tính.

Khoảng một vài ngày trước cuộc tranh luận xảy ra, giảng viên có làm một bài kiểm tra và tất cả các **n** sinh viên đều tham gia. Giảng viên cho họ 3 chuỗi và yêu cầu họ nối chúng lại. Ghép chuỗi ở đây có nghĩa là đặt chúng theo thứ tự tùy ý. Ví dụ từ ghép **Alireza** và **Amir**, chúng ta có thể nối **AlirezaAmir** hoặc **AmirAlireza**.

Thật không may, giáo viên đã quên yêu cầu học sinh nối các chuỗi của chúng theo một thứ tự được xác định trước để mỗi học sinh làm theo cách mà họ thích.

Bây giờ giáo viên biết rằng Shapur là một cậu bé thiên tài tính toán nhanh và yêu cầu cậu sửa lại giấy tờ của học sinh.

Shapur không giỏi trong việc thực hiện nhiệm vụ mất thời gian. Anh ấy thích kết thúc với nó càng sớm càng tốt và dành thời gian của mình để giải quyết **3-SAT** trong thời gian đa thức. Hơn nữa, giáo viên đã đưa ra một số lời khuyên mà Shapur phải tuân theo. Đây là những gì giáo viên nói:

+ Các chuỗi cung cấp cho sinh viên của tôi (bao gồm cả bạn) chỉ chứa chữ thường và chữ cái Ba Tư Mikhi-Script. Những chữ cái này giống với chữ cái Latinh, do đó, để làm cho công việc của bạn khó khăn hơn nhiều, tôi đã chuyển đổi tất cả các chuỗi ban đầu và tất cả các câu trả lời của học sinh sang tiếng Latinh.

+ Như bảng chữ cái latin có ít ký tự hơn Mikhi-Script, tôi đã thêm ba ký tự kỳ lạ vào câu trả lời, chúng bao gồm " - ", " ; " và " _ ". Những kí tự này là yêu cầu của riêng tôi, gọi chúng là **các ký hiệu**.

+ Độ dài của tất cả các chuỗi ban đầu <= 100 và độ dài của câu trả lời của học sinh <= 600

+ Không phải tất cả học sinh đều là thiên tài như bạn. Có thể là họ làm cho những sai lầm trong việc thay đổi với các trường hợp của các kí tự. Ví dụ, họ có thể viết **ALiReZaAmIR** thay vì **AlirezaAmir**. Đừng cầu kỳ và bỏ qua những sai lầm này.

+ **Các ký hiệu** mà tôi đã nói trước đây là không quan trọng. Bạn có thể bỏ qua chúng, vì nhiều sinh viên có tâm trạng để thêm dấu hiệu hoặc quên đi một dấu hiệu. Đừng quan tâm, đặt khó khăn cho các kí hiệu, bỏ qua chúng. Vì vậy, một cái gì đó như **Iran ;; -** là giống như **-; IRAN**
+ Bạn chỉ ra cho bất kỳ sinh viên của tôi nếu câu trả lời của mình là đúng hay sai bằng cách viết **"WA"** cho câu trả lời sai hoặc **"ACC"** để có câu trả lời đúng.

+ Không có chuỗi nào (chuỗi hoặc câu trả lời) là rỗng.

Cuối cùng, hãy thực hiện càng sớm càng tốt. Bạn có ít hơn 2 giờ để hoàn thành việc này.

## Input:
+ Đầu tiên, là 3 dòng gồm có các chuỗi. Là các chuỗi khởi tạo. Chúng bao gồm các kí tự hoa và thường của chữ cái Latin và các kí hiệu **("-", ";" and "_")**. Tất cả các chuỗi khởi tạo có chiều dài từ 1 đến 100.
+ Dòng thứ 4 là **n (0 ≤ n ≤ 1000)**, là số lượng sinh viên.
+ N dòng tiếp theo chứa câu trả lời của mỗi học sinh. Nó được đảm bảo rằng câu trả lời đáp ứng những gì giáo viên nói. Mỗi câu trả lời chỉ có **chữ thường và chữ hoa La-tinh thường và ký hiệu (" - ", " ; " và " _ ")**. Độ dài từ 1 đến 600
## Output:
Đối với câu trả lời mỗi học sinh viết trên một dòng khác nhau. In "WA" nếu câu trả lời của anh sai hoặc "ACC" nếu câu trả lời của anh ấy là OK.

## Example:

### Input:

```
Iran_
Persian;
W_o;n;d;e;r;f;u;l;
7
WonderfulPersianIran
wonderful_PersIAN_IRAN;;_
WONDERFUL___IRAN__PERSIAN__;;
Ira__Persiann__Wonderful
Wonder;;fulPersian___;I;r;a;n;
__________IranPersianWonderful__________
PersianIran_is_Wonderful
```

### Output:
```
ACC
ACC
ACC
WA
ACC
ACC
WA
```

### Input:

```
Shapur;;
is___
a_genius
3
Shapur__a_is___geniUs
is___shapur___a__Genius;
Shapur;;is;;a;;geni;;us;;
```

### Output:
```
WA
ACC
ACC
```
### Giải quyết vấn đề:
+ Chuyển tất các kí tự hoa về kí tự thường và loại bỏ các kí tự đặc biệt
+ Sắp xếp tùy ý

Code: [http://codeforces.com/problemset/submission/61/37915596](http://codeforces.com/problemset/submission/61/37915596)






