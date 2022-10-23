#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * Function Title: Main
 *
 * Summary: Asks for a state abbreviation and provides the name of the state
 *
 * Compile Instructions: Visual Studio
 *
 * Inputs: None
 * Outputs: int
 *******************************************
 * Pseudocode
 *
 * begin
 * define structure
 * define variables
 * initialize structure
 * print prompt
 * scan for state abbreviation
 * start loop
 *  if (scanned abbreviation == structure abbreviation)
 *      print name of structure state
 *      exit
 *  endif
 * endloop
 * print error
 * end
 */

int main() {//begin
    //define structure
    struct states
    {
        char abr [3];
        char name [15];
    };
    //define variables
    char x[3];
    //initialize structure
    const struct states array[]=
            {{"AL", "Alabama"}, {"AK", "Alaska"},
             {"AZ", "Arizona"}, {"AR", "Arkansas"},
             {"CA", "California"}, {"CO", "Colorado"},
             {"CT", "Connecticut"}, {"DE", "Delaware"},
             {"FL", "Florida"}, {"GA", "Georgia"},
             {"HI", "Hawaii"}, {"ID", "Idaho"},
             {"IL", "Illinois"}, {"IN", "Indiana"},
             {"IA", "Iowa"}, {"KS", "Kansas"},
             {"KY", "Kentucky"}, {"LA", "Louisiana"},
             {"ME", "Maine"}, {"MD", "Maryland"},
             {"MA", "Massachusetts"}, {"MI", "Michigan"},
             {"MN", "Minnesota"}, {"MS", "Mississippi"},
             {"MO", "Missouri"}, {"MT", "Montana"},
             {"NE", "Nebraska"}, {"NV", "Nevada"},
             {"NH", "New Hampshire"}, {"NJ", "New Jersey"},
             {"NM", "New Mexico"}, {"NY", "New York"},
             {"NC", "North Carolina"}, {"ND", "North Dakota"},
             {"OH", "Ohio"}, {"OK", "Oklahoma"},
             {"OR", "Oregon"}, {"PA", "Pennsylvania"},
             {"RI", "Rhode Island"}, {"SC", "South Carolina"},
             {"SD", "South Dakota"}, {"TN", "Tennessee"},
             {"TX", "Texas"}, {"UT", "Utah"},
             {"VT", "Vermont"}, {"VA", "Virginia"},
             {"WA", "Washington"}, {"WV", "West Virginia"},
             {"WI", "Wisconsin"}, {"WY", "Wyoming"}};
    //Print prompt
    printf_s("Enter a 2-letter U.S. state abbreviation: ");
    //scan for state abbreviation
    scanf_s("%2s", x, sizeof(x));
    //start loop
    for (int i = 0; i < 49; ++i)
    {
        //if (scanned abbreviation == structure abbreviation)
        if (strcmp(x, array[i].abr)==0)
        {
        //print name of structure state
        printf_s("%s is an abbreviation for %s.",array[i].abr,array[i].name);
        //exit
        exit(0);
        }//endif
    }//endloop
    //print error
    printf_s("%s is not an abbreviation for any of the 50 U.S. states.", x);
    return 0;
}//end
