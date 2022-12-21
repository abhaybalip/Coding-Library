# python - Array - By Tuple 
# import Array Module as Object ar
import array as ar;
import sys;
# Declaring Array 
IntA = ar.array('i',[1,2,3,4,5,6,7,8,9,0]);
print(type(IntA),"\nArray Length : ",len(IntA),"\nArray : ",IntA);

IntA2 = IntA[0:4];
print(type(IntA2),"\nNew Array : ",IntA2);

# Data Access
IntA[0] = 100;
print("Data Change At Pos 0 : ",IntA[0]);

# Array PreDefined Defs
# count
print("No Of 0 In intA : ",IntA.count(0));
# insert - Pos and data 
print("old Array : ",IntA);
for i in range(0,len(IntA)) :
    IntA2.insert(i,i*10);
print("New Array : ",IntA2)
# pop - remove element at pop
IntA2.pop(0);
# clear - clear all element
IntA2.clear();
# reverse 
print(IntA.reverse());

# Array of Different Data Type
FltA = ar.array('d',[1.1 , 2.1 ,3.1,2.6,7.8])  
print(type(FltA)," : ",FltA);

ChA = ar.array('u','hello \u2641');
print(type(ChA)," : ",ChA);