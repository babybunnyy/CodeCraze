
#------------------------DATA STRUCTURES--------------------------------
#------------------------VECTORS--------------------------------

# Vector of strings 
vector1 <- c("name1", "name2", "name3")
vector1
vector2 <- c(1,8,4,6,7,1)
vector2
# Vector with numerical decimals in a sequence
numbers1 <- 1.5:6.5
numbers1

# Vector with numerical decimals in a sequence where the last element is not used
numbers2 <- 1.5:6.3
numbers2

# length of vectors 
length(vector1)

# sort numbers
sort(vector2)

# Access the first item (banana)
vector1[1]

# Access the first and third item (banana and orange)
vector1[c(1, 3)]

# Access all items except for the first item
vector1[c(-1)]

# Repeat Vectors
repeat_each <- rep(c(1,2,3), each = 3)

repeat_each

#  make bigger or smaller steps in a sequence
numbers <- seq(from = 0, to = 100, by = 20)
numbers
#------------------------LISTS--------------------------------
# List of lists
thislist <- list("a1","a2","a3","a4")
thislist

# length of the list 
length(thislist)

# Check if item exists
"a1" %in% thislist
"a9" %in% thislist

# append to a list
thislist <- append(thislist,"a5")
thislist <- append(thislist,"a2.5", after=2)

# remove a2.5 from the list
thislist <- thislist[-3]
thislist

# return the second, third, fourth and fifth item
thislist[2:5]
thislist

# join two lists 
list1 <- thislist
list2 <- list(1,2)
list3 <- c(list1,list2)
list3

#------------------------MATRICES--------------------------------
# create a matrix 
m1 <- matrix(c(1,2,3,4,5,6), nrow = 3, ncol = 2)
# print the matrix
m1
# create a matrix with strings 
m2 <- matrix(c("apple","banana","cherry","orange"), nrow = 2, ncol = 2)
m2

# access matrix items 
m2[1,2]
m2[2,]
m2[,2]
m2[c(1,2),]


# access more than one column 
m3 <- matrix(c("apple", "banana", "cherry", "orange","grape", "pineapple", "pear", "melon", "fig"), nrow = 3, ncol = 3)
m3[,c(1,2)]

# Add column
m4 <- cbind(m3, c("strawberry", "blueberry", "raspberry"))

# Print the new matrix 
m4

# add ro<
m5 <- rbind(m3, c("strawberry", "blueberry", "raspberry"))

# print the new matrix 
m5

# remove rows and columns 
m5 <- m5[-2,]  # Removes the 2nd row
m5
m5 <- m5[,-3]
m5

# Check if an Item Exists
"orange" %in% m5

 
# Number of rows and columns 
dim(m5)

# matrix length 
length(m5)

# loop through a matrix 
for (rows in 1:nrow(m5)) {
  for (columns in 1:ncol(m5)) {
    print(m5[rows, columns])
  }
}

# combine two matrices 
Matrix1 <- matrix(c("apple", "banana", "cherry", "grape"), nrow = 2, ncol = 2)
Matrix2 <- matrix(c("orange", "mango", "pineapple", "watermelon"), nrow = 2, ncol = 2)

# Adding it as a rows
Matrix_Combined <- rbind(Matrix1, Matrix2)
Matrix_Combined

# Adding it as a columns
Matrix_Combined <- cbind(Matrix1, Matrix2)
Matrix_Combined

#------------------------ARRAYS--------------------------------
