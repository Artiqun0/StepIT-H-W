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