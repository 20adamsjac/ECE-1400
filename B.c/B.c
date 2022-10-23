/*************************************************
* Function Title: B.c
*
* Summary: Displays the spoken word form of a given two-digit number
*
*Inputs: None
*Outputs: None
*
* Compile instructions: gcc B.c -o B.exe
**************************************************
* Pseudocode:
* BEGIN
* DEFINE VARIABLES
* PRINT "ENTER NUMBER"
* SCAN FOR VARIABLES
* PRINT "ANSWER IS"
* IF (t>1)
*       SWITCH (t)
*               CASE 2: PRINT ANSWER
*               BREAK
*               CASE 3: PRINT ANSWER
*               BREAK
*               CASE 4: PRINT ANSWER
*               BREAK
*               CASE 5: PRINT ANSWER
*               BREAK
*               CASE 6: PRINT ANSWER
*               BREAK
*               CASE 7: PRINT ANSWER
*               BREAK
*               CASE 8: PRINT ANSWER
*               BREAK
*               DEFAULT: PRINT ANSWER
*               BREAK
* ELSE
*       IF (t==1)
*              SWITCH (o)
*                       CASE 1: PRINT ANSWER
*                       BREAK
*                       CASE 2: PRINT ANSWER
*                       BREAK
*                       CASE 3: PRINT ANSWER
*                       BREAK
*                       CASE 4: PRINT ANSWER
*                       BREAK
*                       CASE 5: PRINT ANSWER
*                       BREAK
*                       CASE 6: PRINT ANSWER
*                       BREAK
*                       CASE 7: PRINT ANSWER
*                       BREAK
*                       CASE 8: PRINT ANSWER
*                       BREAK
*                       DEFAULT: PRINT ANSWER
*                       BREAK
* ENDIF
* IF (t!=1)
*       SWITCH (o)
*               CASE 1: PRINT ANSWER
*               BREAK
*               CASE 2: PRINT ANSWER
*               BREAK
*               CASE 4: PRINT ANSWER
*               BREAK
*               CASE 5: PRINT ANSWER
*               BREAK
*               CASE 6: PRINT ANSWER
*               BREAK
*               CASE 7: PRINT ANSWER
*               BREAK
*               CASE 8: PRINT ANSWER
*               BREAK
*               DEFAULT: PRINT ANSWER
*               BREAK
* ENDIF
* RETURN 0
* END
*************************************************/
#include "B.h"

int main(void)
{                                                   //BEGIN
    
    int t, o;                                       //DEFINE VARIABLES
    
    printf ("Enter a two-digit number (01-99): ");   //PRINT "ENTER NUMBER"
    
    scanf ("%1d%1d", &t, &o);                        //SCAN FOR VARIABLES
    
    printf ("The English representation of %d%d is " //PRINT "ANSWER IS"
           , t, o);
    
    if (t>1)                                        //IF (t>1)
    {
        switch (t) {                                //SWITCH (t)
            case 2:                                 //CASE 2: PRINT ANSWER
                printf("twenty-");
                break;                              //BREAK
            case 3:                                 //CASE 3: PRINT ANSWER
                printf("thirty-");
                break;                              //BREAK
            case 4:                                 //CASE 4: PRINT ANSWER
                printf("forty-");
                break;                              //BREAK
            case 5:                                 //CASE 5: PRINT ANSWER
                printf("fifty-");
                break;                              //BREAK
            case 6:                                 //CASE 6: PRINT ANSWER
                printf("sixty-");
                break;                              //BREAK
            case 7:                                 //CASE 7: PRINT ANSWER
                printf("seventy-");
                break;                              //BREAK
            case 8:                                 //CASE 8: PRINT ANSWER
                printf("eighty-");
                break;                              //BREAK
            default:                                //DEFAULT: PRINT ANSWER
                printf("ninety-");
                break;                              //BREAK
        }
    }
    else                                            //ELSE
    {
        if (t==1) {                                 //IF (t==1)
            switch (o) {                            //SWITCH (o)
                case 1:                             //CASE 1: PRINT ANSWER
                    printf("eleven.\n");
                    break;                          //BREAK
                case 2:                             //CASE 2: PRINT ANSWER
                    printf("twelve.\n");
                    break;                          //BREAK
                case 3:                             //CASE 3: PRINT ANSWER
                    printf("thirteen.\n");
                    break;                          //BREAK
                case 4:                             //CASE 4: PRINT ANSWER
                    printf("fourteen.\n");
                    break;                          //BREAK
                case 5:                             //CASE 5: PRINT ANSWER
                    printf("fifteen.\n");
                    break;                          //BREAK
                case 6:                             //CASE 6: PRINT ANSWER
                    printf("sixteen.\n");
                    break;                          //BREAK
                case 7:                             //CASE 7: PRINT ANSWER
                    printf("seventeen.\n");
                    break;                          //BREAK
                case 8:                             //CASE 8: PRINT ANSWER
                    printf("eighteen.\n");
                    break;                          //BREAK
                default:                            //DEFAULT: PRINT ANSWER
                    printf("nineteen.\n");
                    break;                          //BREAK
            }
        }
        
        }                                           //ENDIF
    if (t!=1) {                                     //IF (t!=1)
        switch (o) {                                //SWITCH (o)
            case 1:                                 //CASE 1: PRINT ANSWER
                printf("one.\n");
                break;                              //BREAK
            case 2:                                 //CASE 2: PRINT ANSWER
                printf("two.\n");
                break;                              //BREAK
            case 3:                                 //CASE 3: PRINT ANSWER
                printf("three.\n");
                break;                              //BREAK
            case 4:                                 //CASE 4: PRINT ANSWER
                printf("four.\n");
                break;                              //BREAK
            case 5:                                 //CASE 5: PRINT ANSWER
                printf("five.\n");
                break;                              //BREAK
            case 6:                                 //CASE 6: PRINT ANSWER
                printf("six.\n");
                break;                              //BREAK
            case 7:                                 //CASE 7: PRINT ANSWER
                printf("seven.\n");
                break;                              //BREAK
            case 8:                                 //CASE 8: PRINT ANSWER
                printf("eight.\n");
                break;                              //BREAK
            default:                                //DEFAULT: PRINT ANSWER
                printf("nine\n");
                break;                              //BREAK
        }
    }                                               //ENDIF
    return 0;                                       //RETURN 0
    
}                                                   //END
