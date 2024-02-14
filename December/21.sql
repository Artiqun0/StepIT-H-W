--1
SELECT COUNT(*) AS TeacherCount
FROM Teachers t
JOIN Departments d ON t.DepartmentId = d.Id
WHERE d.Name = 'Software Development';
--2
SELECT COUNT(*) AS LectureCount
FROM Lectures l
JOIN Teachers t ON l.TeacherId = t.Id
WHERE t.Name = 'Dave' AND t.Surname = 'McQueen';
--3
SELECT COUNT(*) AS LectureCount
FROM Lectures
WHERE LectureRoom = 'D201';
--4
SELECT LectureRoom, COUNT(*) AS LectureCount
FROM Lectures
GROUP BY LectureRoom;
--5
SELECT COUNT(DISTINCT g.Name) AS StudentCount
FROM Groups g
JOIN GroupsLectures gl ON g.Id = gl.GroupId
JOIN Lectures l ON gl.LectureId = l.Id
JOIN Teachers t ON l.TeacherId = t.Id
WHERE t.Name = 'Jack' AND t.Surname = 'Underhill';
--6
SELECT AVG(Salary) AS AverageSalary
FROM Teachers t
JOIN Departments d ON t.DepartmentId = d.Id
JOIN Faculties f ON d.FacultyId = f.Id
WHERE f.Name = 'Computer Science';
--7
SELECT MIN(StudentCount) AS MinStudentCount, MAX(StudentCount) AS MaxStudentCount
FROM (
    SELECT g.Id, COUNT(*) AS StudentCount
    FROM Groups g
    JOIN GroupsLectures gl ON g.Id = gl.GroupId
    GROUP BY g.Id
) AS GroupStudentCount;
--8
SELECT AVG(Financing) AS AverageFinancing
FROM Departments;
--9
SELECT t.Name AS TeacherName, t.Surname AS TeacherSurname, COUNT(DISTINCT s.Name) AS SubjectCount
FROM Teachers t
JOIN Lectures l ON t.Id = l.TeacherId
JOIN Subjects s ON l.SubjectId = s.Id
GROUP BY t.Id, t.Name, t.Surname;
--10
SELECT DayOfWeek, COUNT(*) AS LectureCount
FROM Lectures
GROUP BY DayOfWeek;
--11
SELECT l.LectureRoom, COUNT(DISTINCT d.Id) AS DepartmentCount
FROM Lectures l
JOIN Subjects s ON l.SubjectId = s.Id
JOIN Departments d ON s.DepartmentId = d.Id
GROUP BY l.LectureRoom;
--12
SELECT f.Name AS FacultyName, COUNT(DISTINCT s.Id) AS SubjectCount
FROM Faculties f
JOIN Departments d ON f.Id = d.FacultyId
JOIN Subjects s ON d.Id = s.DepartmentId
GROUP BY f.Id, f.Name;
--13
SELECT t.Name AS TeacherName, t.Surname AS TeacherSurname, l.LectureRoom, COUNT(*) AS LectureCount
FROM Lectures l
JOIN Teachers t ON l.TeacherId = t.Id
GROUP BY t.Id, t.Name, t.Surname, l.LectureRoom;



