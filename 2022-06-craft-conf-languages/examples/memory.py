from dataclasses import dataclass

@dataclass
class Person:
    name: str
    age: int

def process_family():
    me = Person("Doug", 42)
    print(f"{me.name} is {me.age} years old")

process_family()
