#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  int num;
  scanf("%d",&num);

  //Left, Right, Downward, Upward
  char turns = 'R';

  //co-ordinate values initially they are null
  int x=0,y=0;
  int distance=10; //every time they are travelling 10 distance more

  while(num){
    switch(turns) {

      case 'R': //right
        x = x + distance ;
        distance = distance + 10;
        turns = 'U';
        break;

      case 'U': //upward
        y = y + distance ;
        distance = distance + 10;
        turns = 'L';
        break;

      case 'L': //left
        x = x - distance ;
        distance = distance + 10 ;
        turns = 'D';
        break;

      case 'D': //downward
        y = y - distance ;
        distance = distance + 10;
        turns = 'A';
        break;

      case 'A': //right
        x = x + distance ;
        distance = distance + 10;
        turns = 'R';
        break;

    }
    num--;
  }
  printf("%d %d",x,y);

  return 0;
}