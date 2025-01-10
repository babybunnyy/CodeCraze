# --------------------------------------
# 1. Creating a Data Frame
# --------------------------------------

# Create a data frame with different data types
df <- data.frame(
  ID = c(1, 2, 3, 4),                      # Numeric column
  Name = c("Alice", "Bob", "Charlie", "David"),  # Character column
  Age = c(25, 30, 22, 28),                 # Numeric column
  Score = c(90.5, 85.3, 88.9, 92.1)        # Numeric column
)

# Print the data frame
print(df)

# --------------------------------------
# 2. Accessing Data in a Data Frame
# --------------------------------------

# Accessing a single column using "$"
print(df$Age)  # Returns the "Age" column


# Accessing a single column using indexing
print(df[, 3])  # Returns the 3rd column (Age)

# Accessing a specific row (2nd row)
print(df[2, ])

# Filtering: Select rows where Age is greater than 25
filtered_df <- df[df$Age > 25, ]
print(filtered_df)

# Adding a new column "Gender"
df$Gender <- c("F", "M", "M", "M")
print(df)

# Removing a column "Score"
df$Score <- NULL
print(df)

# Adding a new row to the data frame
new_row <- data.frame(ID = 5, Name = "Emma", Age = 27, Gender = "F")
df <- rbind(df, new_row)  # Append the new row
print(df)

# Removing the 3rd row
df <- df[-3, ]  
print(df)

# --------------------------------------
# 4. Checking and Summarizing Data
# --------------------------------------

# Check the structure of the data frame
str(df)

# Get summary statistics
summary(df)

# Get the number of rows and columns
print(nrow(df))  # Number of rows
print(ncol(df))  # Number of columns
print(dim(df))   # Dimensions (rows, columns)

# Get column names
print(colnames(df))

# --------------------------------------
# 5. Sorting Data
# --------------------------------------

# Sort data by Age in ascending order
df <- df[order(df$Age), ]
print(df)

# ------------------------------
# 1. Creating a Factor
# ------------------------------

# Creating a categorical factor
gender <- factor(c("Male", "Female", "Female", "Male", "Male"))
print(gender)  # Print the factor

# ------------------------------
# 2. Checking Factor Levels
# ------------------------------

levels(gender)  # Show unique levels

# ------------------------------
# 3. Ordering a Factor (Ordinal)
# ------------------------------

education <- factor(
  c("Bachelor", "Master", "PhD", "Bachelor", "PhD"),
  levels = c("Bachelor", "Master", "PhD"),  # Define order
  ordered = TRUE
)
print(education)  # Print ordered factor

# ------------------------------
# 4. Changing Factor Levels
# ------------------------------

levels(gender) <- c("M", "F")  # Rename levels
print(gender)

# ------------------------------
# 5. Converting Factors
# ------------------------------

as.character(gender)  # Convert factor to character
as.numeric(education)  # Convert ordered factor to numeric

# ------------------------------
# 6. Counting Factor Levels
# ------------------------------

table(gender)  # Count occurrences of each level
