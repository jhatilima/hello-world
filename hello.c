#include<stdio.h>

enum week {sunday = 4, monday, tuesday, wednesday, thursday, friday, saturday };
int main()
{
  /*testing enumeration: creating user defined data type for integral constants or a variable */
  /*I hope that is how we do comments in C */
  
  enum week today;
  today = wednesday;
  printf("Day %d",today+1);
  return 0;
}
