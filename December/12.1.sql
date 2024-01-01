CREATE TABLE Groups(
GroupID INT PRIMARY KEY IDENTITY(1,1),
GroupName NVARCHAR(10) NOT NULL UNIQUE,
GroupRating INT NOT NULL CHECK(0<=GroupRating AND GroupRating < 6),
GroupCourse INT NOT NULL CHECK(0<GroupCourse AND GroupCourse < 6),
);
CREATE TABLE Departments(
DepartmentID INT PRIMARY KEY IDENTITY(1,1),
DepartmentFinancing money NOT NULL CHECK(0<DepartmentFinancing) DEFAULT 0,
DepartmentName NVARCHAR(100) NOT NULL UNIQUE,
);
CREATE TABLE Faculties(
FacultyID INT PRIMARY KEY IDENTITY(1,1),
FacultyName NVARCHAR(100) NOT NULL UNIQUE,
);
CREATE TABLE Teachers(
TeacherID INT PRIMARY KEY IDENTITY(1,1),
TeacherDate DATE NOT NULL CHECK( '01-01-1990' < TeacherDate),
TeacherName NVARCHAR(max) NOT NULL ,
TeacherSurname NVARCHAR(max) NOT NULL ,
TeacherSalary money NOT NULL CHECK(0<TeacherSalary),
TeacherPremium money NOT NULL CHECK(0<TeacherPremium) DEFAULT 0,
);

-- 1
select distinct * from Departments;
-- 2
select GroupName AS "Group Name", GroupRating  AS "Group rating" from Groups;
-- 3
--сказали забить
-- 4

--5
select TeacherSurname from Teachers
where TeacherSalary > 1050 and ISProfessor = 1;
--6
select DepartmentName from Departments
where DepartmentFinancing > 11000 OR DepartmentFinancing < 25000;
-- 7
select DepartmentName from Departments
where DepartmentName <> 'Computer Science';
--8
select TeacherName, JobTitle from Teachers;
--9
select AssistantSurname, AssistantSalary, AssistantAllowances from Assistantwhere AssistantAllowances > 150 and AssistantAllowances < 550;
--10
select AssistantSurname, AssistantAllowances from Assistant;
--11
select TeacherSurname, TeacherJobTitle from Teachers
where TeacherDate > '01.01.2000';
--12