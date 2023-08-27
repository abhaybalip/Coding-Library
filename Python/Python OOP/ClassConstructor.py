# python - OOP - constructor 

class ClassRoom:
    No = 0
    Branch = '0'
    # Initialise Constructor by __init__ Methode
    def __init__(self,No,Branch):
        self.No  = No
        self.Branch = Branch

    def Display(self):
        print("Branch : ",self.Branch," RoomNo : ",self.No)

New = ClassRoom(137,"Computer")
New.Display()