/**
C++ program:
Steps:
Read and store the student information from "StudentInf.txt", "SubjectInf.txt", "Grading.txt" ,  into a data structure, such as an array a map or vector.
Read and store the subject marks from "SubjectMark.txt" into a suitable data structure, such as a 2D vector.
Calculate the earned credit hours and weighted credit GPA for each student based on their subject marks and
the grading information.
Print the desired output to both the console and an output file, "OOPstudent_grades.txt".
**/

/**


Classes:

Class: Student
+------------------------+
| Private Attributes     |
| - roll                 |
| - name                 |
| - sl                   |
|                        |
| Methods                |
| - getRoll()            |
| - getName()            |
| - getSl()              |
|                        |
| Relationships          |
| - Has StudentMarks     |
+------------------------+

Class: Subject
+------------------------+
| Private Attributes     |
| - subjectName          |
| - credit               |
|                        |
| Methods                |
| - getSubjectName()     |
| - getCredit()          |
|                        |
| Relationships          |
| - None                 |
+------------------------+

Class: Grading
+------------------------+
| Private Attributes     |
| - letterGrade          |
| - lowerBound           |
| - upperBound           |
|                        |
| Methods                |
| - getLetterGrade()     |
| - getLowerBound()      |
| - getUpperBound()      |
|                        |
| Relationships          |
| - None                 |
+------------------------+

Class: StudentMarks
+------------------------+
| Private Attributes     |
| - marks                |
|                        |
| Methods                |
| - addMark()            |
| - getMarks()           |
| - calculateCreditAndGPA() |
|                        |
| Relationships          |
| - Belongs to Student   |
| - Uses Subject         |
| - Uses Grading         |
+------------------------+

Objects:

- student: Instance of Student class
  - Has: StudentMarks

- subject: Instance of Subject class

- grading: Instance of Grading class

Relationships:

- student has a StudentMarks object.
- StudentMarks belongs to Student.
- StudentMarks uses Subject.
- StudentMarks uses Grading.



Class Diagram for Student Information System

Classes:
* Student
* Subject
* Grading
* StudentMarks

Relationships:
* StudentMarks has a one-to-many relationship with Student, meaning that a Student can have multiple StudentMarks,
 but a StudentMark can only belong to one Student.
* StudentMarks has a many-to-many relationship with Subject, meaning that a Student can have marks for multiple Subjects,
 and a Subject can have marks for multiple Students.
* StudentMarks has a many-to-many relationship with Grading, meaning that a StudentMark can have a corresponding Grading,
 and a Grading can have multiple corresponding StudentMarks.

Objects:
* students: A map of Student objects, keyed by their roll number.
* subjects: A map of Subject objects, keyed by their subject name.
* gradingInfo: A map of Grading objects, keyed by their letter grade.
* studentMarks: A map of StudentMarks objects, keyed by student roll number.

* The main() function reads the input data from the four text files and populates the students, subjects, gradingInfo, and studentMarks maps.
* The calculateCreditAndGPA() method on the StudentMarks class calculates the earned credit hours and GPA for a student based on their marks and the subject and grading information.
* The main() function then writes the calculated GPA for each student to the StudentGPA.txt file.


**/
