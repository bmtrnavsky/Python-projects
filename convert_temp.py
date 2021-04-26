# Fahrenheit to Celcius: 

def f_to_c(f_temp):
  c_temp = (f_temp - 32) * (5/9)
  return c_temp

c_temp = f_to_c(100)
print(c_temp)

# Celcius to Fahrenheit

def c_to_f(c_temp):
  f_temp = (c_temp * 5/9) + 32
  return f_temp

f_temp = c_to_f(0)
print(f_temp)
