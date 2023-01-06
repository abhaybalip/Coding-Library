# python - date time module
import datetime;

d1 = datetime.datetime.now()
print('current date time : ',d1)

d2 = datetime.date.today()
print('current date : ',d2)

# date time object
dt = datetime
t1 = dt.datetime(2023,1,1)
t2 = dt.datetime(2022,12,31,24,0,0,0)
print('date object : ',t1)
print('date time object : ',t2)

print('-----------------------------------------------')
print('Attributes of date time module : ',dir(datetime))