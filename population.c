#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    int ss;  //Variable for Start Size
    int ed;  //Variable for End Size
    int n = 0;  //Variable for years control
    
    do 
    {
        ss = get_int("Start size:\n");   // TODO: Prompt for start size   
    }
    while (ss < 9);    //Condition for user input, to re-prompted
    
    do 
    {
        ed = get_int("End size:\n");     // TODO: Prompt for end size
    }
    while (ed < ss);    //Condition for user input, to re-prompted
        
    if (ss == ed)   //Condition if
    {
        printf("Years: %i\n", n);   
    }
         
        
    
        
    else 
    {
            
        do 
        {
            
            ss = ss + (ss / 3) - (ss / 4);  // TODO: Calculate number of years until we reach threshold
            n++;
        }
            
        while (ss < ed);
        printf("Years: %i\n",   n);   // TODO: Print number of years
    }
        
        
}
