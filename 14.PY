# In today’s world, a lot of data is being generated on a daily basis. And sometimes to analyze this data for certain trends, patterns may become difficult if the data is in its raw format. To overcome this data visualization comes into play. Data visualization provides a good, organized pictorial representation of the data which makes it easier to understand, observe, analyze. In this tutorial, we will discuss how to visualize data using Python.

# __init__ function

class Employee:
    no_of_leaves = 8

    def __init__(self, abc, de, ghi):
        self.Name = abc
        self.Salary = de
        self.Role = ghi

    def printdetails(self):
        return f"Name is{self.Name}.Salary is {self.Salary} & Role is{self.Role}"


harry = Employee("Harry", 455, "Instructor")


# harry = Employee()
# Rohan = Employee()

# harry.Name = "Harry"
# harry.Salary = 256
# harry.Role = "Instructor"


# Rohan.Name = "Rohan"
# Rohan.Salary = 976
# Rohan.Role = "Student"


print(harry.printdetails())
