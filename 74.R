# create a 3d array with dimensions (3 rows, 4 columns, 2 layers)
arr <- array(1:24, dim = c(3,4,2))

# print the entire array 
print(arr)

# ------------------------------
# Accessing Elements in a Multiarray
# ------------------------------

# Get a single element: row2, column 3, layer 1
element <- arr[2, 3, 1]
print(element)

# Get the entire 2nd row from the 1st layer 
row_slice <- arr[2,,1]
print(row_slice)

# Get the entire 3rd column from the 2nd layer 
col_slice <- arr[, 3, 2]
print(col_slice)

# Get the entire 1st layer as a 2D matrix 
layer1_matrix <- arr[, , 1]
print(layer1_matrix)

# ------------------------------
# Modifying Elements
# ------------------------------

# Change value at row 1, column 2, layer 1 to 99
arr[1,2,1] <- 99 
print(arr)

# ------------------------------
# Checking Dimensions
# ------------------------------

# Get the dimensions of the array (rows, columns, layers)
dimensions <- dim(arr)
print(dimensions)

# ------------------------------
# Applying Functions Across Dimensions
# ------------------------------

# Sum across rows (1st dimension)
sum_rows <- apply(arr, c(1), sum)  
print(sum_rows)

# Sum across columns (2nd dimension)
sum_columns <- apply(arr, c(2), sum)  
print(sum_columns)

# Sum across layers for each row-column pair
sum_layers <- apply(arr, c(1, 2), sum)  
print(sum_layers)