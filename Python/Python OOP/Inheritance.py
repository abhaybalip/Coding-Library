# python - Inheritance

class A:
    def __init__(self) -> None:
        print('class A constructor')

# inherit class A
class B (A):
    def __init__(self) -> None:
        print('class B constructor')

        # parent class super methode
        super().__init__()

class D:
    def __init__(self) -> None:
        pass

# multiple inheritance
class C (A,D):
    def __init__(self) -> None:
        super().__init__()

b = B()