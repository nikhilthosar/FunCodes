#Variables, Datatypes and Typecasting

var1 = "Hello World"  #string variable
var2 = 4              #integer variable
var3 = 36.7           #float variable
print(type(var1))
print(type(var2))
print(type(var3))
print(var2+var3)

var4 = "I am Nikhil"
print(var1 + var4)

var5 = "32"
var6 = "54"
print(int(var5) + int(var6)) #Typecasting

#=================================================================

print(10*"Hello World \n") #------> prints Hello World 10 times
print(10*var2)
print(10*str(var2))


#=================================================================

print("Enter the Number")
invar = input() #--------> Input function always take input as string datatype
print("You Entered", int(invar) + 10) #Typecasted invar to integer for adding 10 in string type input

#=================================================================
