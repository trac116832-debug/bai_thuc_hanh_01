Input: Nhập 2 số nguyên a, b

Output: BCNN của a và b

Ví dụ:

Input: 4, 12
/// Output: 12

Giải thích

Bước 1: Kiểm tra điều kiện a*b!=0. Nếu điều kiện sai tính BCNN, nếu điều kiện đúng tiếp tục bước 2

Bước 2: So sánh a > b, nếu đúng thì gán a = a % b; nếu sai thì gán b = b % a;

Bước 3: Quay lại bước 1 và tiếp tục thực hiện cho đến khi a*b==0

Bước 4: Khi một trong 2 số bằng 0, số còn lại là UCLN(a,b)

Bước 5: Tính BCNN = (a*b)/UCLN(a,b) và in ra kết quả
