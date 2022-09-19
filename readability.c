#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

//Declaring functions 
int compute_letters(string text);
int compute_words(string text);
int compute_sentences(string text);

int main(void) 
{
    string text = get_string("Text: "); //Getting the text from the user
    
    //Calling and getting the variables from de functions 
    float letters = compute_letters(text);
    float words = compute_words(text);
    float sentences = compute_sentences(text);
    
    //Calculating the average
    letters = (letters * 100) / words;
    sentences = (sentences * 100) / words;
   
    float grade = 0.0588 * letters - 0.296 * sentences - 15.8;
    
    //Creating conditions if grade < 1 && grade >= 16 and printing the following result
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
        
    else 
    {
        printf("Grade %.0f\n", round(grade));
    }

  
}

//Function to calculate the number of letters
int compute_letters(string text) 
{
    int let = 0;
    
    for (int i = 0, n = strlen(text); i < n; i++) 
    {
        if (isalpha(tolower(text[i]))) 
        {
            let++;   
        }
    }
    return let; 
}

//Function to calculate the number of words
int compute_words(string text) 
{
    int wd = 0;
    
    for (int i = 0, n = strlen(text); i < n; i++) 
    {
        if (isspace(text[i]) != 0) 
        {
            wd++;    
        }    
    }
    return wd + 1;
}

//Function to calculate the number of sentences 
int compute_sentences(string text) 
{
    int sent = 0;
    
    for (int i = 0, n = strlen(text); i < n; i++) 
    {
        if ((text[i] == 63) || (text[i] == 33) || (text[i] == 46))
        {
            sent++;    
        }    
    }
    return sent;
}
