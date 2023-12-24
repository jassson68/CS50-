#include <cs50.h>
#include <stdio.h>

int main(void)
{  //declare height as integer
   int height;
   //get user input for height
   do{
    height=get_int("Enter Height: ");
   }
   //continue to receive user input until input is greater than 0 or less than 20
   while(height<1||height>8);

   //iterate while i is less than height
   for(int i=0; i<height; i++){
      //iterate and print space of the height until i is less than 0;
     for (int k = height - i; k > 1; k--){
        printf(" ");
     }
     //iterate while j<=i and print number of "#" in new line based on the number of iteration for i
     for (int j = 0; j <= i; j++){
        printf("#");
     }
     printf("  ");
     for (int j = 0; j <= i; j++){
        printf("#");
     }
     printf("\n");
   }
   return 0;
}
