#include <stdio.h>
/*Đối với hàm khai báo như này thì hàm trả về con trỏ(hay hàm trả về địa chỉ)
vì nó trả về hai địa chỉ của x và y nên để lấy địa chỉ này và hiển thị nó ra giá trị
thì cần một con trỏ để hứng địa chỉ này. Sau đó dùng toán tử * để in ra giá trị*/
//Ở đây chúng ta sẽ viết hàm truyền vào là 

int* timSoLonNhat(int *x, int *y)
{
   if(*x>*y)
   {
       return x; // trả về địa chỉ con trỏ x trỏ tới
   }
   else
   {
       return y; // trả về địa chỉ con trỏ y trỏ tới
   }
}

int main()
{
   int *result;
   int a = 11;
   int b = 15;
   result = timSoLonNhat(&a,&b); // truyền vào địa chỉ của a và b
   printf("So lon nhat = %d\r\n", *result);
   return 0;
}


/*Nếu không dùng hàm trả về địa chỉ thì ta dùng như sau thu được kết quả tương tự*/

int timSoLonNhat(int *x, int *y)
{
   if(*x>*y)
   {
       return *x; 
   }
   else
   {
       return *y; 
   }
}

int main()
{
   int result;
   int a = 11;
   int b = 15;
   result = timSoLonNhat(&a,&b); 
   printf("So lon nhat = %d\r\n", result);
   return 0;
}

// Công làm sai rồi Công
