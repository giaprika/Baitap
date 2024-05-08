#include <iostream>

int* allocateMemory(int value) {
    int localVar = value;
    return &localVar;
}
int main(){
    int* ptr = allocateMemory(5);
    std::cout << *ptr << std::endl;
    delete ptr;
    return 0;
}

//kết quả chạy chương trình không in ra gì hết. Nó không rõ hoạt động.
//lỗi này xảy ra do việc giải phóng con trỏ dẫn đến việc truy cập vào vùng nhớ không hợp lệ khi biến địa phương đã bị hủy
