#include <stdio.h>

 int main () {
 int month;
   
   
   //yeu cau nhap so thang
   printf("nhap so thang(1-12):");
   scanf ("%d",&month);
   
   
    
   //kiem tra so thang va hien thi so ngay trong thang 
   if (month < 1|| month > 12){
        printf ("so thang khong hop le .\n");
   } else if (month==1||month==3||month==5||month==7||month==8||month==10||month==12){
   	    printf ("thang %d co 31 ngay", month); 
   } else if (month==4||month==6||month==9||month==11){	
	printf("thang %d co 30 ngay .\n",month); 

}   
  
  
   return 0; 
} 
