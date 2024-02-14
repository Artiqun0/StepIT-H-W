

-- 1
SELECT t.Name AS TeacherName, t.Surname AS TeacherSurname, g.Name AS GroupName
FROM Teachers t, Groups g;

--2
SELECT f.Name AS FacultyName
FROM Faculties f
WHERE EXISTS (
    SELECT 1
    FROM Departments d
    WHERE d.FacultyId = f.Id
    AND d.Financing > f.Financing
);
--3
SELECT c.Surname AS CuratorSurname, c.Name AS CuratorName, g.Name AS GroupName
FROM Curators c
JOIN GroupsCurators gc ON c.Id = gc.CuratorId
JOIN Groups g ON gc.GroupId = g.Id;
--4
SELECT t.Name AS TeacherName, t.Surname AS TeacherSurname
FROM Teachers t
JOIN Lectures l ON t.Id = l.TeacherId
JOIN GroupsLectures gl ON l.Id = gl.LectureId
JOIN Groups g ON gl.GroupId = g.Id
WHERE g.Name = 'P107';
--5
SELECT t.Surname AS TeacherSurname, f.Name AS FacultyName
FROM Teachers t
JOIN Lectures l ON t.Id = l.TeacherId
JOIN Subjects s ON l.SubjectId = s.Id
JOIN Departments d ON s.Id = d.Id
JOIN Faculties f ON d.FacultyId = f.Id;
--6
SELECT d.Name AS DepartmentName, g.Name AS GroupName
FROM Departments d
JOIN Groups g ON d.Id = g.DepartmentId;
--7
SELECT s.Name AS SubjectName
FROM Subjects s
JOIN Lectures l ON s.Id = l.SubjectId
JOIN Teachers t ON l.TeacherId = t.Id
WHERE t.Name = 'Samantha' AND t.Surname = 'Adams';
--8
SELECT d.Name AS DepartmentName
FROM Departments d
JOIN Subjects s ON d.Id = s.DepartmentId
WHERE s.Name = 'Database Theory';
--9
SELECT g.Name AS GroupName
FROM Groups g
JOIN Departments d ON g.DepartmentId = d.Id
JOIN Faculties f ON d.FacultyId = f.Id
WHERE f.Name = 'Computer Science';
--10
SELECT g.Name AS GroupName, f.Name AS FacultyName
FROM Groups g
JOIN Departments d ON g.DepartmentId = d.Id
JOIN Faculties f ON d.FacultyId = f.Id
WHERE g.Year = 5;
--11
SELECT t.Name AS TeacherName, t.Surname AS TeacherSurname, l.LectureRoom, s.Name AS SubjectName, g.Name AS GroupName
FROM Teachers t
JOIN Lectures l ON t.Id = l.TeacherId
JOIN Subjects s ON l.SubjectId = s.Id
JOIN GroupsLectures gl ON l.Id = gl.LectureId
JOIN Groups g ON gl.GroupId = g.Id
WHERE l.LectureRoom = 'B103';

