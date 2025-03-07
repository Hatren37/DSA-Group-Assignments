BEGIN
    // Prompt the user to enter two numbers
    PRINT "Enter first number: "
    READ num1
    PRINT "Enter second number: "
    READ num2

    // Swap without using a temporary variable
    num1 = num1 + num2
    num2 = num1 - num2
    num1 = num1 - num2

    // Display the swapped numbers
    PRINT "After swapping: "
    PRINT "First number: ", num1
    PRINT "Second number: ", num2
END