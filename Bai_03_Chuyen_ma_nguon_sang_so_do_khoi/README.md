Input: Nhập số nguyên N và mảng gồm N phần tử

Output: Giá trị lớn nhất trong mảng

 Ví dụ:

 Input: N=4; a={12;15;9;10}
 ////Output: max=15; vitri=2

 Giải thích:
 Bước 1: Gán giá trị max = a[0] va vitri = 0

 Bước 2: Duyệt các phần tử mảng từ i=1 đến i=n-1
 
 Bước 3: So sánh giá trị nếu a[i] > max thì gán max = a[i] và vitri=i

 Bước 4: Kết thúc vòng lặp và xuất ra giá trị max và vitri
 
