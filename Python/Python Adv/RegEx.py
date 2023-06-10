# python - RegEx
import re;

str = "Hello"
str2 = "Hello User"
result = re.match(str,str2)
print("mathch result : ",result)

str = "Hi friend"
str2 = "By friend"
result = re.match(str,str2)
print("matching result : ",result)

str = '[1-9]'
str2 = '234'
result = re.match(str,str2)
print("matching result : ",result)