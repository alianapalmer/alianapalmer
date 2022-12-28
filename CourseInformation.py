# Driver: Elijah Shuman (U75798573)
# Navigator: Aliana Palmer (U69705951)

# This program provides information on a select number of courses that a user selects
courseNum = ("COP 2510","EGN 3000L","MAC 2281","MUH 3016","PHY 2048")
courseName = {courseNum[0]:"Programming Concepts",courseNum[1]:'Foundations of Engineering Lab',courseNum[2]:'Calculus I',courseNum[3]:'Survey of Jazz',courseNum[4]:'General Physics I'}
instructorName = {courseNum[0]:'Z. Beasley',courseNum[1]:'J. Anderson',courseNum[2]:'A. Makaryus',courseNum[3]:'A. Wilkins',courseNum[4]:'G. Pradhan'}
classTimes = {courseNum[0]:'MW 12:30pm - 1:45pm',courseNum[1]:'TR 11:00am - 12:15pm',courseNum[2]:'MW 9:30am - 10:45am',courseNum[3]:'online asynchronous',courseNum[4]:'TR 5:00pm - 6:15pm'}

#get course number from user
userCourse = input("Please enter a course number: ")

n=0
i=0
found = False
#finds course and validates if it is legitimate
while i<5:
    if userCourse == courseNum[n]:
        found = True
    else:
        n+=1
    i+=1

#outputs the result to console
if found==False:
    print(userCourse,"is an invalid course number.")
else:
    print("The course details are:")
    print("Course name:", courseName[courseNum[n]])
    print("Instructor :", instructorName[courseNum[n]])
    print("Class times:", classTimes[courseNum[n]])