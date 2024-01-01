
-- 1
select distinct * from Departments;
-- 2
select GroupName AS "Group Name", GroupRating  AS "Group rating" from Groups;
-- 3
--сказали забить
-- 4
SELECT 'The dean of faculty ' + FacultyName + ' is ' + Dean AS 'Faculty Information'
FROM Faculties;
--5
select TeacherSurname from Teachers
WHERE Position = 'Professor' AND TeacherSalary > 1050;
--6
select DepartmentName from Departments
where DepartmentFinancing > 11000 OR DepartmentFinancing < 25000;
-- 7
select DepartmentName from Departments
where DepartmentName <> 'Computer Science';
--8
select TeacherName, TeacherJobTitle from Teachers;
--9
select AssistantSurname, AssistantSalary, AssistantAllowances from Assistant where AssistantAllowances > 150 and AssistantAllowances < 550;
--10
select AssistantSurname, AssistantAllowances from Assistant;
--11
select TeacherSurname, TeacherJobTitle from Teachers
where TeacherDate > '01.01.2000';
--12
SELECT DepartmentName AS 'Name of Department'
FROM Departments
WHERE DepartmentName < 'Software Development'
ORDER BY DepartmentName;
--13
SELECT TeacherSurname
FROM Teachers
WHERE Position = 'Assistant' AND (TeacherSalary + TeacherPremium) <= 1200;
--14
SELECT GroupName
FROM Groups
WHERE GroupCourse = 5 AND GroupRating BETWEEN 2 AND 4;
-- 15
SELECT AssistantSurname, Assistant as a
FROM Teachers
WHERE Position = 'Assistant' AND (AssistantSalary < 550 OR AssistantPremium < 200);

