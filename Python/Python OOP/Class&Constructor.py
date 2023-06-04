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

# Example Made During Ganpati Season
class GaneshIdol:
    Price  = 0
    Height = 0
    Weight = 0
    def __init__(self,P,H,W):
        self.Height = H
        self.Price  = P
        self.Weight = W
    def DisplayInfo(self):
        print("Idol Price : ",self.Price," K","\nHeight : ",self.Height,"me Weight : ",self.Weight," Kg")

GI = GaneshIdol(50,10,80)
GI.DisplayInfo()
