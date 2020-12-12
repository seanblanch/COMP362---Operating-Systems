# COMP362---Operating-Systems
CSUCI FALL 2020
Course Description
This is an introductory yet very strict and intense course on the principles of operating systems. The students will learn about the fundamental role that operating systems play in running computer hardware, their functional components, and the application programming interface (API). Principles of system-level programming for a POSIX-compliant operating system will be discussed as case studies and used in programming exercises in the labs.

Student Outcomes
After completing this course, students will be able to :

design and implement elements of computer operating systems
design and implement operating system utilities
design and implement multi-process systems applying dynamic management of processes including process creation, suspension, resuming, and termination
design and implement inter-process communication (IPC) using a variety of mechanisms such as pipes and queues
design and implement multi-threaded applications using POSIX threads
design and implement applications that require sharing of computer resources through a number of synchronization mechanisms such as spinlocks, mutexes, semaphores, and monitors
implement programs in C with standard C libraries
implement applications that interact with the computer platform through operating system's calls
implement applications using the POSIX APIs
implement applications in C with complex data structures employing both static and dynamic memory allocation, and extensive use of pointers
implement and deploy file systems
implement and deploy device drivers
organize and express ideas concerning operation of computer system clearly and convincingly in oral and written forms.

Tentative Outline
Overview of Operating Systems
Operating Systems Structures
Processes
Inter-Process Communication
Threads
CPU Scheduling
Process Synchronization
Deadlocks
Main Memory
Virtual Memory
File Systems
Mass Storage Structure
I/O Systems
 
 Course Prerequisites
This course requires credits with a minimum grade of "C-" for

COMP 151, COMP 162, and COMP 232 for Computer Science students, or
COMP 122 and COMP 162 for Mechatronics Engineering students.
C will be used extensively in this course, so very good practical C programming skills are assumed.

Students that do not satisfy the prerequisite requirements must withdraw from the course.


Communication
Instructors
Lectures: Prof. AJ Bieszczad
Laboratories: Prof. Hassine Letaief
Asynchronous:
Canvas Discussion Boards
Canvas Direct Messaging
The instructors will respond to student messages as soon as possible within 24 hours except of weekends (counted from 5 pm on Friday till 8 am on Monday) and holidays.

Please read carefully the assignment descriptions that include all details necessary to complete the tasks, although in many cases you will need to do your own research as directed in the descriptions. If there is any need for clarification post your question on the lab discussion board.

Please do not post any implementation code on the lab discussion board. You may, however, post generic code addressing the programming techniques and tools. It's a thin line, so please be diligent.

If you have a specific question about your implementation, please submit the complete project in its current state through Canvas, and then use a direct message to send the question to the instructor. The submission should show the evidence that you put considerable effort to solve the problem by yourself (e.g., a gdb debugging session).

Synchronous:
On-Demand by Appointment through Zoom.
A student may request an appointment by sending a Canvas direct message to the instructor with an explanation of the issue.
The instructor will respond either by:

posting an answer on the discussion board, or
sending an answer through a direct message if confidentiality is required, or
sending an invitation to a Zoom meeting if the instructor deems that necessary.
To facilitate effective and efficient communication, please have your questions prepared on paper. You should be able to explain how you have tried to answer the question and why you have problems.

Please manage the communication diligently.

Recommended Textbook
Title:          Operating System Concepts, 10th Edition
Format:      EBook, Enhanced eText
Author:      Abraham Silberschatz
Publisher:   John Wiley & Sons, Incorporated
ISBN:         9781119320913

Recommended Book for Labs
Title:    The Linux Programming Interface
Author:    Michael Kerrisk
ISBN:    978-1-59327-220-3
Publisher:    No Starch Press, Incorporated
Publication Date:    October 27, 2010
Instructional Approach
This is a balanced course that will keep students involved throughout the semester through theoretical studies and intense programming hands-on assignments.

Lectures
The lectures will be delivered in a virtual classroom over a Zoom session. Attendance in all sessions and participation in all activities will be mandatory; a roll call will be taken at some time during the session.

Each session will be divided into three parts:

a video-based lecture during which students will be able to interactively ask for clarifications using Zoom Chat,
group work on study sets that will be published as a quiz with every lecture (in Zoom Breakout Rooms), and
reporting the results of the group work to the whole class in Zoom Main Room by a group member selected by the instructor.
During the subsequent weeks students will be able to discuss further the topics using the lecture discussion board.

Every student will be required to submit answers to the questions in the study sets formally.

The grade for class participation will depend on timely submissions and on student engagement in class activities.

Examination Rules
Students will be tested from the knowledge of the material studied in the course at the examination administered in the Examination Week during the time scheduled in the University Catalog; the details will be further advertised and posted in the calendar. The exam will comprise versions of the questions from the study sets and algorithms from the lab exercises.

The exams will be conducted online through simultaneous sessions through Zoom and CI Learn.
To gain access to an exam, students will be required to submit answers to all study set quizzes in the block by the start of the exam for that block.
Students will have to join the Zoom examination session and set the audio off and the video on, so they are seen all the time while taking the exam.
The exams will be administered as CI Learn quizzes. Access to all the study sets in the block will be enabled.
Students will be able to request clarifications through Zoom Chat.
The exams will be strictly timed; the CI Learn session will be closed and submitted automatically on the deadline. Students that start an exam past its start time will have correspondingly less time to work on the questions.
Any violation of Student Conduct Code will result in "F" from the exam and filing a report with Judicial Affairs.
Laboratories
Labs are hands-on exercises in which students will be working on a programming task each week. Most of the labs have extensive instructions that must be followed very strictly.

Unless announced differently, each lab will be released (made visible) on Thursdays, and the submission will be due by 11:59 pm on Wednesdays. The deadlines will be strictly enforced; the submission facility for a given lab will not be visible after the deadline for that lab.

A virtual classroom over Zoom will be open during the scheduled lab time to explain the tasks in the assignment, and interactively clarify any ambiguities and address any forthcoming question.

Students will also be able to use the lab discussion board to discuss any arising issues with peers and the instructor (Prof. Letaief) asynchronously. Posting of code will not be allowed on the discussion board however, since students should work on the code for the assignments independently and submit only their own work. Any violation of Student Conduct Code will result in "F" from the whole lab or project assignment and filing a report with Judicial Affairs.

To expose the students to a development of larger-scale complex system-level software, there will be two substantial projects concluding the lab section of the course. Students will have multiple weeks to complete each of the project.

Students must follow the Lab Submission Standards stated in the Canvas lab component of the course.

Tools
There are abundant Web resources supporting C programmers. One of the best reference sites is https://en.cppreference.com/w/c (Links to an external site.) that is a very concise yet completely thorough reference to all aspects of the language and the fundamental libraries.

Students will use Linux Ubuntu (http://www.ubuntu.com/) (Links to an external site.) in this class. Many of the programming exercises should also run on any POSIX (http://en.wikipedia.org/wiki/POSIX) (Links to an external site.)-compliant systems such as other Linux distributions, macOS, WSL (https://docs.microsoft.com/en-us/windows/wsl/ (Links to an external site.)), or Cygwin (https://www.cygwin.com/ (Links to an external site.)), but some (especially the projects) will have to be implemented on Linux.

There are a number of options to install Ubuntu on students home computers as explained in https://help.ubuntu.com/community/Installation (Links to an external site.).

The course will take a pragmatic approach to UNIX development with the focus on using command line tools (http://cb.vu/unixtoolbox.xhtml) (Links to an external site.). All needed command-line tools (like gcc, gdb, cmake, make, etc.) will be briefly introduced in the initial tutorial and throughout the lab descriptions. GEdit is a standard GUI text editor in Ubuntu, but there are numerous other text editors available on UNIX platforms including command line tools like vi, nano, or emacs, and sophisticated GUI programmer editors such as Sublime Text or Atom.



Grading Policy
There will be one combined course grade for the course. The final grade will be calculated automatically by CI Learn as a weighted average of the student's average grades from the exams (i.e., the theory), the lab assignments, and the projects using the following weight distribution:

Theory: 50%
   Participation: 5% (timely submissions of study set quizzes and student engagement in class activities)
   Exam: 45% 

Labs: 25% (distributed evenly over 10 labs) 

Projects: 25%
   Project 1: 15%
   Project 2: 10%
To pass the course, students must pass each of the course components (theory, laboratories, and projects) with a grade of "C-" or better. If a student fails to score at least "C-" from any of the course components, then the final overall grade from the course will be at most "D+", and the student will not receive credit for the course.

The instructor reserves the right to adjust any grade in response to any new forthcoming relevant information that was unknown when the grade was determined. For example, if a student submitted work that was not based on her or his efforts, and that becomes known at some later time, then the grade will be changed accordingly retroactively.

Lab Grading Rules
Copying any portion of the code from others violates the Student Conduct Code and will be reported to the Judicial Affairs.
Unless a student requests otherwise, the most recent lab submission made before the deadline will be graded.
Programs that do not compile will not be graded and the student will get no credit.
Parts of the submitted code that are commented out will not be graded, and the student will get no credit.
Submissions missing session scripts that show compilation and test runs, as well as submission with missing elements necessary for verification of test results (such as input and output files) will be rejected and the student will get no credit.
Files that are not signed by the submitting student will be rejected, and the student will get no credit.
Submissions with file names that do not conform to the submission naming standards will imply 10% penalty.
Programs that are not well-formatted will imply a 10% penalty.
Grading Scheme
The following grade scheme will be used in this course:

>= 95% - A+ 
>= 90% - A 
>= 85% - A- 
>= 80% - B+ 
>= 75% - B 
>= 70% - B- 
>= 65% - C+ 
>= 60% - C 
>= 55% - C- 
>= 50% - D+
>= 45% - D 
>= 40% - D-
 < 40% - F 
