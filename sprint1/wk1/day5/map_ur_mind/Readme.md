# MAP YOUR MIND 

# Flowcharts
## What is a Flowchart?
A flowchart is a type of diagram that visually represents a workflow or process using a set of symbols or icons to denote different actions/decisions/steps within the process with arrows showing the direction of the flow.  

## Why use a Flowchart?
Similarly to pseudo-code, flowcharts provide another way of approaching and/or understanding a workflow. Another benefit is that, when done well, flowcharts can be understood by non-developers and by developers that do not know the language the process is written in.  

## Flowchart Symbols
This type of diagram is extremely versatile and is used across many professional fields. A good symbol set to use is the ISO 5807 symbol set, as they are well-known and often used in the technology industry.  

### Some commonly used ISO 5807 symbols
![flow1](flow1.png?raw=true "flow1")

## An Example
Let’s think about Foundation task, and include a flowchart example for it:

The task instructions are as follows:  
Write a function that draws a straight line in the terminal.  
Prototype: void print_line(int n);  
You can only use _putchar function to print  
Where n is the number of times the character _ should be printed  
The line should end with a \n  
If n is 0 or less, the function should only print \n  

Below is what I came up with.  
Set a variable equal n (int nCopy)  
Set up a while loop (condition: nCopy is greater than 0)  
Print -  
Decrease nCopy by 1  
Print \n  

Now, using the ISO 5807 symbols from the table above, draw out a flowchart for this function.  

![flow2](flow2.png?raw=true "flow2")

## Bonus Info
Some good uses of flowcharts:  
Create a flowchart before coding a task to either help create or validate pseudo-code  
Add to a README.md to visually show how your project/process works  
Use in a presentation to aide audience understanding  

Your function or process is not working as expected? Create a flowchart of how it CURRENTLY is. Then, walk through the chart with some example input.
A flowchart can be as high-level or as detailed as you want. For example, you could break the flowchart above down further to include what is happening in memory. You can even create flowcharts from your everyday non-technical experiences. Choosing a movie or a place to eat could be displayed as a flow-chart!  

A helpful tool to create flowcharts is draw.io. There are premade symbols for you to use and your diagrams can be saved to your Google Drive.  

For more information on Flowcharts and related diagrams, a google search with simply “flowchart” can get you started. ;)


# White boarding
https://alx-intranet.hbtn.io/concepts/100000  
Understand that language and frameworks are just tools, they won’t teach you problem-solving skills. You develop problem-solving skills when you practice a lot of coding questions.  
 
## Step 1: Understand and Analyze the Problem
It doesn’t matter if you have seen the question in the past or not, read the question several times and understand it completely.Sometimes we read a few lines and assume the rest of the things on our own but a slight change in your question can change a lot of things in your code so be careful about that. Now take a paper and write down everything. What is given (input) and what you need to find out (output)? 

While going through the problem you need to ask a few questions yourself…  

Did you understand the problem fully?   
Would you be able to explain this question to someone else?   
What and how many inputs are required?  
What would be the output for those inputs?  
Do you need to separate out some modules or parts from the problem?  
Do you have enough information to solve that question?  

## Step 2: Go Through The Sample Data And Examples Thoroughly
When you try to understand the problem take some sample inputs and try to analyze the output. Consider some simple inputs or data and analyze the output. Consider some complex and bigger input and identify what will be the output and how many cases you need to take for the problem. Consider the edge cases as well. Analyze what would be the output if there is no input or if you give some invalid input.  


## Step 3: Write Pseudocode, make a flowchart
Before you jump into the solution it’s always good to write pseudocode for your problem. Basically, pseudocode defines the structure of your code and it will help you to write every line of code that you need in order to solve the problem. Reading pseudocode gives a clear idea that what your code is supposed to do. Write down every step and logic in your pseudocode.  

## Step 4: Replace Pseudocode With Real Code 
Once you have written the pseudocode it’s time to translate this into actual code. Replace each line of your pseudocode into real code in the language you are working on. If you have divided your problem into subproblems then write down the code for each subproblem. While writing the code keep in mind three things…  

The point where you started   
Where are you right now?  
What is your destination (end result)?  

## Step 5: Break Down The Problem 
When you see a coding question that is complex or big, instead of being afraid and getting confused that how to solve that question, break down the problem into smaller chunks and then try to solve each part of the problem. Below are some steps you should follow in order to solve the complex coding questions…  

**Make a flow chart for the problem at hand.**  

Divide the problem into sub-problems or smaller chunks. Solve the subproblems. Make independent functions for each subproblem. Connect the solutions of each subproblem by calling them in the required order, or as necessary. Wherever it’s required use classes and objects while handling questions (for real-world problems like management systems, etc.)  

## Step 6: Simplify and Optimize your Code
Always try to improve your code. Look back, analyze it once again and try to find a better or alternate solution. We have mentioned earlier that you should always try to write the right amount of good code so always look for the alternate solution which is more efficient than the previous one. Writing the correct solution to your problem is not the final thing you should do. Explore the problem completely with all possible solutions and then write down the most efficient or optimized solution for your code. So once you are done with writing the solution for your code below are some questions you should ask yourself.  

Does this code run for every possible input including the edge cases.  
Is there an alternate solution for the same problem?  
Is the code efficient?   
Can it be more efficient or can the performance be improved?  
How else can you make the code more readable?  
Are there any more extra steps or functions you can take out?  
Is there any repetition in your code? Take it out.  


# How to Think Like a Programmer
https://www.youtube.com/watch?v=rWMuEIcdJP4  

Programming === Speaking
## Steps
Break dw d problem  
Talk it out  
Collaborate  
One step at a time, break it dw into chunk  
Start Simply  
Learn d foundation, dont try to memorize  
Short cut can hurt  
Dont rush to look up soln from d internet  
Seeking help is normal  
Try Documentation  
Debug  
Read Documentatn  
Test  
Get out of your comfort zone. Look for how ur soln solve d problem

# What is Pseudocode?
## What is pseudocode and how do you use it?  
https://www.youtube.com/watch?v=PwGA4Lm8zuE  

Pseudocode is a simpler version of a programming code in plain English bf it is implemted in a specific programming lang.  

### How to write Pseudocode?
Capitalize key commands(IF number is > 10 THEN)  
Write one statement per line  
Use indentation  
Be specific  
Keep it simple  
 
# what is an algorithm 
https://www.youtube.com/watch?v=6hfOvs8pY1k  
It is a set of instructions for solving some problem, step-by-step.  

Pseudo + code = Resembling prog lang  

# How to write pseudocode
https://www.geeksforgeeks.org/how-to-write-a-pseudo-code/  

 It is a methodology that allows the programmer to represent the implementation of an algorithm. It’s simply an implementation of an algorithm in the form of annotations and informative text written in plain English.  

 ## Advantages of Pseudocode
Improves the readability of any approach. It’s one of the best approaches to start implementation of an algorithm.  
Acts as a bridge between the program and the algorithm or flowchart. Also works as a rough documentation, so the program of one developer can be understood easily when a pseudo code is written out.  
The main goal of a pseudo code is to explain what exactly each line of a program should do, hence making the code construction phase easier for the programmer.  

## How to write a Pseudo-code?
Arrange the sequence of tasks and write the pseudocode accordingly.    
Start with the statement of a pseudo code which establishes the main goal or the aim.    
`Example: This program will allow the user to check the number whether it's even or odd.`  

The way the if-else, for, while loops are indented in a program, indent the statements likewise, as it helps to comprehend the decision control and execution mechanism. They also improve the readability to a great extent.  

```
Example:

if "1"
    print response
        "I am case 1"

if "2"
    print response
        "I am case 2"
```
Use appropriate naming conventions.   

Use appropriate sentence casings, such as CamelCase for methods, upper case for constants and lower case for variables.  
Elaborate everything which is going to happen in the actual code. Don’t make the pseudo code abstract.  
Use standard programming structures such as ‘if-then’, ‘for’, ‘while’, ‘cases’ the way we use it in programming.  
Check whether all the sections of a pseudo code is complete, finite and clear to understand and comprehend.   
Don’t write the pseudo code in a complete programmatic manner. It is necessary to be simple to understand even for a layman or client, hence don’t incorporate too many technical terms.  

### Example:
Let’s have a look at this code  

```
// This program calculates the Lowest Common multiple
// for excessively long input values

import java.util.*;

public class LowestCommonMultiple {

	private static long
	lcmNaive(long numberOne, long numberTwo)
	{

		long lowestCommonMultiple;

		lowestCommonMultiple
			= (numberOne * numberTwo)
			/ greatestCommonDivisor(numberOne,
									numberTwo);

		return lowestCommonMultiple;
	}

	private static long
	greatestCommonDivisor(long numberOne, long numberTwo)
	{

		if (numberTwo == 0)
			return numberOne;

		return greatestCommonDivisor(numberTwo,
									numberOne % numberTwo);
	}
	public static void main(String args[])
	{

		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter the inputs");
		long numberOne = scanner.nextInt();
		long numberTwo = scanner.nextInt();

		System.out.println(lcmNaive(numberOne, numberTwo));
	}
}
```

And here’s the Pseudo Code for the same.  

```
This program calculates the Lowest Common multiple
for excessively long input values

function lcmNaive(Argument one, Argument two){

        Calculate the lowest common variable of Argument
        1 and Argument 2 by dividing their product by their
        Greatest common divisor product

        return lowest common multiple
    end
}

function greatestCommonDivisor(Argument one, Argument two){
        if Argument two is equal to zero
            then return Argument one

        return the greatest common divisor

    end
}

{
    In the main function
        
    print prompt "Input two numbers"
            
    Take the first number from the user
    Take the second number from the user

    Send the first number and second number
    to the lcmNaive function and print
    the result to the user
}
```




# Real life examples of pseudocode
How Do I Write Pseudocode?  
https://www.youtube.com/watch?v=preyTbKXDoQ&t=400s  

Pseudocode is meant to be a high level way of representing an algorithm without tying it to a specific language.  

At 10min of d video:  
Write an algorithm (using eida pseudocode or flowchat) dt cal d amt of fuel a train will need to complete a journey. The algorithm must:  
ask d user hw many km d journey will be  
only continue if d user enters a value greater than zero  
set d amount of fuel to a number 100 times greater than d number of km  
nt allow d amt of fuel to be less than 1500  
finally, display d amt of fuel needed.  

soln:  
Capitalize keywords e.g IF, WHILE etc  
Indentation: Nesting  
Closing off block e.g END IF, END WHILE, END  

```
amountFuel = 0    
kilometers = INPUT("How many kms?")  

IF kilometers > 0 THEN    
    amountFuel = 100 * kilometers    
    IF amountFuel < 1500 THEN  
        amountFuel = 1500  
    END IF  

    OUTPUT amountFuel  
END IF
```
### Top Tips
To write and understand pseudocode u need to understand real code first. Learn d basics  
Make it look like real code but SIMPLIFY IT  
Practise it! Do questns  
Be consistent with ur pseudocode format  
Your pseudocode will never be run!  








# Practice examples of Pseudocode
