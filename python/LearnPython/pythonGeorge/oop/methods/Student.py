class Student:
    
    school_name = "Greenwood High"
    
    def __init__(self, name):
        self.name = name
        
    def introduce(self):
        print(f"Hi, I'm {self.name}")
        
    @classmethod
    def get_school_name(cls):
        return cls.school_name
    
    @staticmethod
    def add_marks(m1, m2):
        return m1 + m2
    
s = Student("Alice")
s.introduce()                        # Hi, I'm Alice
print(Student.get_school_name())    # Greenwood High
print(Student.add_marks(40, 45))    # 85
