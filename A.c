
/*************************************************
* Function Title: A.c
*
* Summary: Finds the highest and lowest integers of a given set
*
*Inputs: None
*Outputs: None
*
* Compile instructions: gcc A.c -o A.exe
**************************************************
* Pseudocode:
* BEGIN
* DEFINE VARIABLES
* PRINT "ENTER NUMBERS"
* SCAN FOR VARIABLES
* IF (n1>=n2)
*   l1=n1
*   s1=n2
* ELSE
*   l1=n2
*   s1=n1
* ENDIF
* IF (n3>=n4)
*   l2=n3
*   s2=n4
* ELSE
*   l2=n4
*   s2=n3
* ENDIF
* IF (l1>=l2)
*   IF (l1>=n5)
*   ELSE
*       l1=n5
*   ENDIF
* ELSE
*   IF (l2>=n5)
*       l1=l2
*   ELSE
*       l1=n5
*   ENDIF
* ENDIF
IF (s1<=s2)
*   IF (s1<=n5)
*   ELSE
*       s1=n5
*   ENDIF
* ELSE
*   IF (s2<=n5)
*       s1=s2
*   ELSE
*       s1=n5
*   ENDIF
* ENDIF
* PRINT HIGHEST INTEGER
* PRINT LOWEST INTEGER
* RETURN 0
* END
*************************************************/

#include "A.h"

int main(void)
{
    int n1, n2, n3, n4, n5, l1, s1, l2, s2;         //DEFINE VARIABLES
    
    printf ("Enter five integers in any order: ");  //PRINT "ENTER NUMBERS"
    
    scanf ("%d %d %d %d %d"
           , &n1, &n2, &n3, &n4, &n5);              //SCAN FOR VARIABLES

    if (n1>=n2) {                                   //IF (n1>=n2)
        l1=n1;                                      //l1=n1
        s1=n2;                                      //s1=n2
    }
    else {                                          //ELSE
        l1=n2;                                      //l1=n2
        s1=n1;                                      //s1=n1
    }                                               //ENDIF

    if (n3>=n4) {                                   //IF (n3>=n4)
        l2=n3;                                      //l2=n3
        s2=n4;                                      //s2=n4
    }
    else {                                          //ELSE
        l2=n4;                                      //l2=n4
        s2=n3;                                      //s2=n3
    }                                               //ENDIF

    if (l1>=l2){                                    //IF (l1>=l2)
        if (l1>=n5){}                               //IF (l1>=n5)
        else {                                      //ELSE
            l1=n5;                                  //l1=n5
        }                                           //ENDIF
    }
    else {                                          //ELSE
        if (l2>=n5) {                               //IF (l2>=n5)
            l1=l2;                                  //l1=l2
        }
        else {                                      //ELSE
            l1=n5;                                  //l1=n5
        }                                           //ENDIF
    }                                               //ENDIF

    if (s1<=s2){                                    //IF (s1<=s2)
        if (s1<=n5){}                               //IF (s1<=n5)
        else {                                      //ELSE
            s1=n5;                                  //s1=n5
        }                                           //ENDIF
    }
    else {                                          //ELSE
        if (s2<=n5) {                               //IF (s2<=n5)
            s1=s2;                                  //s1=s2
        }
        else {                                      //ELSE
            s1=n5;                                  //s1=n5
        }                                           //ENDIF
    }                                               //ENDIF

    printf("Largest integer: %d\n", l1);            //PRINT HIGHEST INTEGER

    printf("Smallest integer: %d\n", s1);           //PRINT LOWEST INTEGER

    return 0;                                       //RETURN 0
}                                                   //END
