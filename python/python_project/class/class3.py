class Cohort:
    name=""
    region=""
    number=""

    def __init__(self, c_name, c_region, c_number):
        self.__name=c_name
        self.__region=c_region
        self.__number=c_number

#assigning values to attributes
cohort_14=Cohort("cohort 14", "Kampala", "14")
COHORT_14.name="Cohort 15"

print(cohort_14.name)
print(cohort_14.region)
print(cohort_14.number)