/*Name: Mazhar Hussain    Reg No:20MDELE098
Email:20MDELE098@uetmardan.edu.pk*/
 #include<stdio.h>
 int main() {
   int number, count=0, number2=2;
   printf("Enter a positive interger: ");
   scanf("%d", &number);
   if(number == 1) {
   count = 1;
   }
   else
   {
     while(number2 <= number/2){
       if(number%number2 == 0)
       {count=1;
         break;}
       number2++;}
	   }
  if(count==1)  {
   printf("%d is Not Prime number\n",number); }
   else
   printf("%d is Prime number\n",number);
   return 0;
   }
