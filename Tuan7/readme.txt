1. output của đoạn lệnh:
*p3 = B, p3 = 0x5678
*p3 = A, p3 = 0x1234
*p1 = B, p1 = 0x1234
2. Lệnh gán cho i giá trị 5:
*p = 5;
3. Lỗi:
char c = ‘C';
double *p = &c;
Lỗi này đang cố gán một con trỏ kiểu double cho biến kiểu char, điều này gây ra lỗi biên dịch