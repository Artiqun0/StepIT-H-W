CREATE TABLE Students (
    StudentID INT PRIMARY KEY,
    FirstName NVARCHAR(50),
    LastName NVARCHAR(50),
    Age INT,
    GPA FLOAT
);

CREATE TABLE Courses (
    CourseID INT PRIMARY KEY,
    CourseName VARCHAR(50),
    Difficulty INT,
    Credits INT
);

CREATE TABLE Enrollments (
    EnrollmentID INT PRIMARY KEY,
    StudentID INT,
    CourseID INT,
    Grade FLOAT
);

INSERT INTO Students (StudentID, FirstName, LastName, Age, GPA)
VALUES
    (1, 'Иван', 'Иванов', 20, 3.5),
    (2, 'Мария', 'Петрова', 22, 3.8),
    (3, 'Александр', 'Сидоров', 21, 3.2),
    (4, 'Екатерина', 'Козлова', 23, 3.9),
    (5, 'Дмитрий', 'Федоров', 20, 3.0);

INSERT INTO Courses (CourseID, CourseName, Difficulty, Credits)
VALUES
    (106, 'Математика', 4, 3);


INSERT INTO Enrollments (EnrollmentID, StudentID, CourseID, Grade)
VALUES
    (1, 1, 101, 3.7),
    (2, 1, 102, 4.0),
    (3, 2, 101, 3.9),
    (4, 3, 103, 3.5),
    (5, 3, 105, 3.2),
    (6, 4, 102, 3.8),
    (7, 4, 104, 4.0),
    (8, 5, 105, 3.1),
    (9, 5, 101, 3.0);

--1
SELECT AVG(s.GPA) AS 'Average GPA'
FROM Students s
JOIN Enrollments e ON s.StudentID = e.StudentID
WHERE e.CourseID = 101;
--2
SELECT MAX(s.Age) AS 'Max Age'
FROM Students s
JOIN Enrollments e ON s.StudentID = e.StudentID
WHERE e.Grade > 3.5;
--3
SELECT COUNT(*) AS 'Courses Count'
FROM Courses
WHERE Difficulty > 3;
--4
SELECT c.CourseName, AVG(e.Grade) AS 'Average Grade'
FROM Courses c
JOIN Enrollments e ON c.CourseID = e.CourseID
GROUP BY c.CourseName;
--5
SELECT TOP 1 c.CourseName
FROM Courses c
ORDER BY Difficulty DESC;



