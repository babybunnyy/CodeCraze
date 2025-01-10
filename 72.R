# call a function 
func1 <- function() {
  print("hello world!")
}
func1()
# number of arguments 
func2 <- function(fname, lname) {
  paste(fname, lname)
}

func2("David", "Goggins")
# Return Value 
func3 <- function(x) {
  return (5 * x)
}
print(func3(2))
# Nested function 
func4 <- function(x,y) {
  return (x + y)
}
func4(func4(1,1),func4(2,5))
# Define the outer function that takes one argument 'x'
Outer_func <- function(x) {
  
  # Define an inner function that takes one argument 'y'
  Inner_func <- function(y) {
    
    # 'Inner_func' has access to 'x' from 'Outer_func' (closure concept)
    a <- x + y  # Add 'x' (from outer function) and 'y' (from inner function)
    
    return(a)  # Return the computed sum
  }
  
  return(Inner_func)  # Return the inner function itself (not its result!)
}

# Call 'Outer_func' with 'x = 3'
# This returns 'Inner_func' where 'x' is stored (closure)
output <- Outer_func(3)  

# Now, 'output' is actually 'Inner_func', but with 'x' remembered as 3
# Calling 'output(5)' is equivalent to calling 'Inner_func(5)', with 'x = 3'
output(5)  # 3 + 5 = 8



# Recursion
# Define a recursive function named 'tri_recursion'
tri_recursion <- function(k) {
  
  # Base case: If k is 0 or negative, return 0 and stop recursion
  if (k > 0) {
    
    # Recursive case: Compute 'result' by adding k to the result of calling the function with (k-1)
    result <- k + tri_recursion(k - 1)
    
    # Print the current result at each step
    print(result)
    
  } else {
    # Base case: When k <= 0, set result to 0 and return it (end recursion)
    result <- 0
    return(result)
  }
}

# Call the function with an initial value of 6
tri_recursion(6)

# Global Variables 
txt <- "awesome"
func5 <- function() {
  txt <<- "umm"
  paste("R is", txt)
}
func5()
print(txt)
