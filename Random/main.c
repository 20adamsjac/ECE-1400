/*************************************************
* Function Title: main
*
* Summary: Creates a random sequence of letters in a 10 by 10 grid
*
* Inputs: None
* Outputs: None
*
* Compile instructions:   visual studios
**************************************************
* Pseudocode
*
* Begin
* Define variables
* Create random starting point
* Loop
*   set letter to A if at Z
*   Switch
*       Case up:
*           if character == 46
*               move up
*           else
*               reset letter
*           endif
*       break
*       Case right:
*           if character == 46
*               move right
*           else
*               reset letter
*           endif
*       break
*       Case down:
*           if character == 46
*               move down
*           else
*               reset letter
*           endif
*       break
*       Default:
*           if character == 46
*               move left
*           else
*               reset letter
*           endif
*       break
*    if all sides != 46
*       endloop
* print grid
* End
*************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {                                      //Begin
    char grid[10][10]={[0 ... 9][0 ... 9] = 46};  //define variables

    int x,y;

    srand(time(NULL));                           //create random starting point
    x=(rand()%10);
    y=(rand()%10);

    for (char i=65;;i++){                         //Loop
        if (i==91) {                              //set letter to A if at Z
            i = 65;
        }
        switch ((rand() % 4)) {                   //Switch
            case 0: {                             //case up:
                if (grid[y+1][x] == 46 && y!=9){  //if character == 46
                    y+=1;                         //move up
                    grid[y][x]=i;
                }
                else {                            //else
                    i-=1;                         //reset letter
                }                                 //endif
            }
                break;                            //break
            case 1: {                             //case right:
                if (grid[y][x+1] == 46 && x!=9){  //if character == 46
                    x+=1;                         //move right
                    grid [y][x]=i;
                }
                else {                            //else
                    i-=1;                         //reset letter
                }                                 //endif
            }
                break;                            //break
            case 2: {                             //case down:
                if (grid[y-1][x] == 46 && y!=0){  //if character == 46
                    y-=1;                         //move down
                    grid [y][x]=i;
                }
                else {                            //else
                    i-=1;                         //reset letter
                }                                 //endif
            }
                break;                            //break
            default: {                            //default
                if (grid[y][x-1] == 46 && x!=0){  //if character == 46
                    x-=1;                         //move left
                    grid [y][x]=i;
                }
                else {                            //else
                    i-=1;                         //reset letter
                }                                 //endif
            }
                break;                            //break
        }
        if((grid[y+1][x]!=46)&&(grid[y][x+1]!=46) //if all sides != 46
           &&(grid[y-1][x]!=46)&&(grid[y][x-1]!=46)){
            break;                                //endloop
        }
    }
    for (int j = 0; j < 10; j++) {                //Print grid
            for (int k = 0; k < 10; k++) {
                printf("%c  ", grid[j][k]);
            }
            printf("\n");
        }
    return 0;
}                                                 //End
