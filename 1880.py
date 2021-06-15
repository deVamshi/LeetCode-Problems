

first_word = "j"
second_word = "j"
third_word = "bi"

fN = ""
sN = ""
tN = ""

values = ['a','b','c','d','e','f','g','h','i','j']

for i in first_word:
  fN += str(values.index(i))
for i in second_word:
  sN += str(values.index(i))
for i in third_word:
  tN += str(values.index(i))

if(int(fN) + int(sN) == int(tN)):
  print(True)
else:
  print(False)





