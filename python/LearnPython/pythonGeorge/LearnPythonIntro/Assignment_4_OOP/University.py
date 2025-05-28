class Person:
    def __init__(self, name, id_number):
        self.name = name
        self.id_number = id_number

    def display_info(self):
        return f"ID: {self.id_number}, Name: {self.name}"

class Student(Person):
    def __init__(self, name, id_number, student_id, gpa):
        super().__init__(name, id_number)
        self.student_id = student_id
        self.gpa = gpa

    # Override display_info to include student-specific details
    def display_info(self):
        return f"Student - ID: {self.id_number}, Name: {self.name}, Student ID: {self.student_id}, GPA: {self.gpa}"

    # Method to check academic standing
    def check_standing(self):
        if self.gpa >= 3.0:
            return f"{self.name} is in good academic standing (GPA: {self.gpa})."
        else:
            return f"{self.name} is on academic probation (GPA: {self.gpa})."

class Lecturer(Person):
    def __init__(self, name, id_number, department, courses_taught=None):
        super().__init__(name, id_number)
        self.department = department
        self.courses_taught = courses_taught if courses_taught is not None else []

    # Override display_info to include lecturer-specific details
    def display_info(self):
        return f"Lecturer - ID: {self.id_number}, Name: {self.name}, Department: {self.department}, Courses: {', '.join(self.courses_taught) or 'None'}"

    # Method to add a course
    def add_course(self, course):
        self.courses_taught.append(course)
        return f"Added course '{course}' to {self.name}'s teaching list."

class Staff(Person):
    def __init__(self, name, id_number, job_title, salary):
        super().__init__(name, id_number)
        self.job_title = job_title
        self.salary = salary

    # Override display_info to include staff-specific details
    def display_info(self):
        return f"Staff - ID: {self.id_number}, Name: {self.name}, Job Title: {self.job_title}, Salary: ${self.salary}"

    # Method to apply a salary raise
    def apply_raise(self, percentage):
        increase = self.salary * (percentage / 100)
        self.salary += increase
        return f"Applied {percentage}% raise to {self.name}. New salary: ${self.salary}"

# Create objects
student = Student("George Lukanaya", "P1001", "S2023001", 3.5)
lecturer = Lecturer("Dr. Mary Nsabagwa", "P2001", "Software Engineering", ["CS101", "CS202"])
staff = Staff("Emma Mujuni", "P3001", "Registrar", 50000)

# Test display_info and unique methods
print(student.display_info())
print(student.check_standing())
print("---")
print(lecturer.display_info())
print(lecturer.add_course("CS303"))
print(lecturer.display_info())
print("---")
print(staff.display_info())
print(staff.apply_raise(10))
print(staff.display_info())

# Display MRO for Student class
print("\nMRO for Student:", Student.__mro__)