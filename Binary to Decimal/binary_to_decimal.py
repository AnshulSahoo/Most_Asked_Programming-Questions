#WAP in Python to find the decimal number of a given binary number

binary_num = list(input("Input a binary number: "))
decimal_num = 0

for i in range(len(binary_num)):
	digit = binary_num.pop()
	if digit == '1':
		decimal_num = decimal_num + pow(2, i)
print("The decimal value of the number is", decimal_num)
