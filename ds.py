import numpy as np

# Number of products
n = int(input("Enter number of products: "))

product_names = []
prices = []

# Input product names and prices
for i in range(n):
    name = input(f"\nEnter name of product {i+1}: ")
    price = float(input(f"Enter price of {name}: "))
    
    product_names.append(name)
    prices.append(price)

# Convert prices into NumPy array
prices_array = np.array(prices)

# Maximum price product
max_index = np.argmax(prices_array)
max_product = product_names[max_index]
max_price = prices_array[max_index]

# Minimum price product
min_index = np.argmin(prices_array)
min_product = product_names[min_index]
min_price = prices_array[min_index]

# Average price
average_price = np.mean(prices_array)

# Standard deviation
std_deviation = np.std(prices_array)

# 24-hour sales analysis display
print("\n========== 24 HOURS SALES ANALYSIS ==========")

print("\nProduct Details:")
for i in range(n):
    print(f"{product_names[i]} --> Price: ₹{prices_array[i]:.2f}")

print("\n---------------------------------------------")

print(f"Maximum Price Product : {max_product}")
print(f"Price                 : ₹{max_price:.2f}")

print("\n---------------------------------------------")

print(f"Minimum Price Product : {min_product}")
print(f"Price                 : ₹{min_price:.2f}")

print("\n---------------------------------------------")

print(f"Average Product Price : ₹{average_price:.2f}")

print(f"Standard Deviation    : {std_deviation:.2f}")

print("\n=============================================")