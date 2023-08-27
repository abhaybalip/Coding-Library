# python - Aggregation

class Address:
    def __init__(self,country='',city='') -> None:
        self.city = city
        self.country = country

class Person:
    def __init__(self,id,address) -> None:
        self.addr = Address(address['country'],address['city'])
        self.id = id
    def intro(self):
        print('id= ',self.id)
        print('address= ',self.addr.city,' ',self.addr.country)

p = Person(100,{'city':'mumbai','country':'india'})
p.intro()