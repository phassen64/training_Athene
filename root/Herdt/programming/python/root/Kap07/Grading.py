grade = 4 # Note
text = ""
if grade == 1:
    text = "sehr gut"
elif  grade == 2:
    text = "gut"
elif  grade == 3:
    text = "befriedigend"
elif  grade == 4:
    text = "ausreichend"
elif  grade == 5:
    text = "mangelhaft"
elif  grade == 6:
    text = "ungenügend"
else:
    text = "FEHLER" 
      
print(grade , "entspricht" , text, sep= " ")
