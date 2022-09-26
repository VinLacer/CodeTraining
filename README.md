# CodeTraining
A repo to save problems solved to programming training.

## Mario

This code recreates a Mario pyramid in C using rashes (#). So the user decides the tall of the pyramid by typing an integer number between 1 and 8.

Here’s how the program might work if the user inputs 8 when prompted:

``` 
$ ./mario
Height: 8
       #
      ##
     ###
    ####
   #####
  ######
 #######
########

```
 For more details, you can see the problem in the CS50 [website](https://cs50.harvard.edu/x/2022/psets/1/mario/less/).
 
 ## Cash

Cash.c is a program that prompts the user for the number of cents that a customer is owed and then prints the smallest number of coins with which that change can be made. 

Assuming that a cashier owes a customer change and that in the cash drawer there are coins (25 cents), dimes (10 cents), cents (5 cents), and cents (1 cent). Here is the [website](https://cs50.harvard.edu/x/2022/psets/1/cash/) if you want more details.

Here is how the program works:
```
$ ./cash
Change owed: -41
Change owed: foo
Change owed: 41
4
```

## Credit

In the file called credit.c, the program prompts the user for a credit card number and then reports (via printf) whether it is a valid American Express, MasterCard, or Visa card number, per the definitions of each’s format herein. 

Also, the code verifies if a credit card is valid using Luhn’s Algorithm. Here is the problem [website](https://cs50.harvard.edu/x/2022/psets/1/credit/#luhns-algorithm).

Example:

```
$ ./credit
Number: 4003-6000-0000-0014
Number: foo
Number: 4003600000000014
VISA
```

## Population

Say we have a population of n llamas. Each year, n / 3 new llamas are born, and n / 4 llamas pass away.

For example, if we were to start with n = 1200 llamas, then in the first year, 1200 / 3 = 400 new llamas would be born and 1200 / 4 = 300 llamas would pass away. At the end of that year, we would have 1200 + 400 - 300 = 1300 llamas.

For more details go to the problem [page](https://cs50.harvard.edu/x/2021/labs/1/population/).

Determine how long it takes for a population to reach a particular size:
```
$ ./population
Start size: 100
End size: 200
Years: 9
```
## Readability

This program receives a string and calculates the ability of reading/writing of the user, printing the grade that your phrases give you, according to the words, letters, and sentences.

You can get more details on the problem [website](https://cs50.harvard.edu/x/2022/psets/2/readability/).

Here is an example of how the program works:

```
$ ./readability
Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!
Grade 3
```

## Scrabble 

In the game Scrabble, players create words to score points, and the number of points is the sum of the point values of each letter in the word.

![image](https://user-images.githubusercontent.com/71742380/192309798-6f159dd1-7770-4289-aff2-82051a1128cd.png)

For example, if we wanted to score the word Code, we would note that in general Scrabble rules, the C is worth 3 points, the o is worth 1 point, the d is worth 2 points, and the e is worth 1 point. Summing these, we get that Code is worth 3 + 1 + 2 + 1 = 7 points.

The problem website is [here](https://cs50.harvard.edu/x/2022/labs/2/).

See the examples below:

```
$ ./scrabble
Player 1: Question?
Player 2: Question!
Tie!
```
```
$ ./scrabble
Player 1: Oh,
Player 2: hai!
Player 2 wins!
```






