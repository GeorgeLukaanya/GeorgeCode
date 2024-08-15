#Using *args and **kwargs 
def f(*args, **kwargs):
    print("Positional: ", args)
    print("Named: ", kwargs)

f(100, 50, 25)
f(galleons = 100, sickles = 50, knuts = 25)