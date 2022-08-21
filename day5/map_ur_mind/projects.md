calculate the sum of squares of given input of numbers
let num1 = INPUT("Enter your desired number")  

let num2 = INPUT("Enter your desired number")

let sum;

IF (num1 is not empty or num2 is not empty) THEN
    sum = (num1 * num1) + (num2 * num2)
ELSE
    return nothing if no num1 or num2  
END IF

print sum  



To develop an algorithm that reads in three numbers and writes them all in sorted order  

let num1 = INPUT("Enter your desired number")  

let num2 = INPUT("Enter your desired number")

let num3 = INPUT("Enter your desired number")

let notEmptyContainer = num1, num2, num3

let lowestNumber;
let sortedNumber;

FOR index = 0, index < notEmptyContainer.length, index + 1 THEN
    lowestNumber = the number at index 0 in notEmptyContainer
    IF lowestNumber < notEmptyContainerNumber at index + 1 THEN
        remove and add to sortedNumber, lowestNumber 
        lowestNumber = notEmptyContainerNumber at index + 1
    ELSE IF lowestNumber > notEmptyContainerNumber at index + 1 THEN
        remove and add to sortedNumber, notEmptyContainerNumber at index + 1
    ELSE
        remove and add to sortedNumber, lowestNumber
END

print sortedNumber  

A user will enter numbers that will be added to the sum and when a negative number is encountered, stop adding numbers and write out the final result

let userNumber = INPUT("Enter your desired positive number")
let sum = 0;

WHILE userNumber > or = 0 THEN
    sum = sum + userNumber
END

print sum

