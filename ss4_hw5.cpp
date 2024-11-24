#include <stdio.h> 
int main (){

   
	int num1, num2, num3;
     // nhap vao ba so nguyen
	 printf ("nhap so thu nhat:");
	 scanf ("%d",&num1);
	 
	 //nhap vao so thu hai
	 printf ("nhap vao so thu hai:");
	 scanf ("%d",&num2);
	 
	 //nhap vao so thu ba
	 printf ("nhap vao so thu ba:");
	 scanf("%d",&num3);
	 
	 
	//kiem tra dieu kien xem num3 co nam giua num1 va num2 khong
	if ((num3>num1&&num3<num2)||(num3<num1&&num3>num2)){
	printf ("so thu ba(%d)nam giua so thu nhat (%d)	va so thu hai (%d).\n",num1,num2,num3 );
}else{
	printf ("so thu ba (%d) khong nam giua so thu nhat (%d) va so thu hai(%d)",num1,num2,num3); 
} 
  return 0;
}
