#include <stdio.h>
int main(void)
{
  int a, b, c;   // ส่วนประกาศตัวแปร : จองหน่วยความจำไว้เก็บข้อมูล    
  float ans;     // ส่วนประกาศตัวแปร : จองหน่วยความจำไว้เก็บข้อมูล
  printf("Enter A : ");
  scanf("%d", &a);		 // รับค่าที่ต้องการ
  printf("Enter B : ");
  scanf("%d", &b);		 // รับค่าที่ต้องการ
  printf("Enter C : ");
  scanf("%d", &c);		 // รับค่าที่ต้องการ
  ans = a + b + c;		 // คำนวณ ตามสูตร
  printf("Answer is %f", ans); // แสดงผลลัพธ์ที่คำนวณได้
  return 0;
}
