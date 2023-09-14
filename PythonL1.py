## @file PythonL1.py 
#  @brief this program accepts year from user and checks whether it is leap year or not  

"""
 Accept year from user
 Args:
 	
"""
year=int(input("Enter year: "))    
# @param year year (int):stores year accepted from user				 
if(year % 4==0 and year % 100 !=0 or year % 400 ==0 ):	
	print(year, "is a leap year.")			
else:
	print(year, "is not a leap year.")
