#include <iostream>
#include <vector>
#include <string>
#include <algorithm>    // std::find()

// Example on Array of Pointers


class Student;      // Forward declation [ Since `SchoolDepartment` uses `Student*` before `Student` is defined ]


#pragma region SchoolDepartment
class SchoolDepartment 
{
private:
    int                         m_deptId;
    std::string                 m_deptName;
    std::vector<Student*>    m_students;    // Non-owning pointers

public:
    SchoolDepartment(int id, std::string name) 
        : m_deptId(id),
            m_deptName(std::move(name)) 
    {}

    virtual void Room() 
    {
        std::cout << "This is school department room" << "\n";
    }

    virtual ~SchoolDepartment() = default;


    void AddStudent(Student* student) 
    {
        if (std::find(m_students.begin(), m_students.end(), student) == m_students.end())
            m_students.push_back(student);
    }

    void RemoveStudent(Student* student) 
    {
        auto it = std::find(m_students.begin(), m_students.end(), student);
        if (it != m_students.end()) 
            m_students.erase(it);
    }

    void ListStudents() const; 

    int GetDeptId() const { return m_deptId; }
    const std::string& GetDeptName() const { return m_deptName; }
};


class ScienceDepartment : public SchoolDepartment 
{
public:
    ScienceDepartment(int id, std::string name)
        : SchoolDepartment(id, std::move(name))  // Call base constructor
    {}

    void Room() override
    {
        std::cout << "Science Department" << "\n";
    }
};

class CommerceDepartment : public SchoolDepartment 
{
public:
    CommerceDepartment(int id, std::string name) 
        : SchoolDepartment(id, std::move(name)) 
    {}

    void Room() override 
    {
        std::cout << "Commerce Department" << "\n";
    }
};

class ArtsDepartment : public SchoolDepartment 
{
public:
    ArtsDepartment(int id, std::string name) 
        : SchoolDepartment(id, std::move(name)) 
    {}

    void Room() override 
    {
        std::cout << "Arts Department" << "\n";
    }
}; 
#pragma endregion



#pragma region Student Section
class Student 
{
private:
    int             m_studentId;
    std::string     m_studentName;
    int             m_studentAge;
    SchoolDepartment*   m_department = nullptr;

public:
    virtual ~Student() = default;
    // virtual method
    virtual void Study() = 0;


    int GetStudentId() const { return m_studentId; }
    const std::string& GetStudentName() const { return m_studentName; }
    int GetStudentAge() const { return m_studentAge; }

    void SetStudentId(int id) { m_studentId = id; }
    void SetStudentName(const std::string& name) { m_studentName = name; }
    void SetStudentAge(int age) { m_studentAge = age; }


    void AssignDepartment(SchoolDepartment* dept) 
    {
        if (m_department)
            m_department->RemoveStudent(this);  // remove from old
        
        m_department = dept;
        
        if (dept) 
            dept->AddStudent(this);     // add to new
    }
};

class ScienceStudent : public Student
{
public:
    ScienceStudent(int id, std::string name, int age)  
    {
        SetStudentId(id);
        SetStudentName(name);
        SetStudentAge(age);
    }

    ~ScienceStudent() override = default;


    void Study() override 
    {
        std::cout << "Student ID: " << GetStudentId() << "\n";
        std::cout << "Student Name: " << GetStudentName() << "\n";
        std::cout << "Student Age: " << GetStudentAge() << "\n";
    }
};

class CommerceStudent : public Student
{
public:
    CommerceStudent(int id, std::string name, int age)  
    {
        SetStudentId(id);
        SetStudentName(name);
        SetStudentAge(age);
    }

    ~CommerceStudent() override = default;


    void Study() override 
    {
        std::cout << "Student ID: " << GetStudentId() << "\n";
        std::cout << "Student Name: " << GetStudentName() << "\n";
        std::cout << "Student Age: " << GetStudentAge() << "\n";
    }
};

class ArtsStudent : public Student
{
public:
    ArtsStudent(int id, std::string name, int age)  
    {
        SetStudentId(id);
        SetStudentName(name);
        SetStudentAge(age);
    }

    ~ArtsStudent() override = default;


    void Study() override 
    {
        std::cout << "Student ID: " << GetStudentId() << "\n";
        std::cout << "Student Name: " << GetStudentName() << "\n";
        std::cout << "Student Age: " << GetStudentAge() << "\n";
    }
};
#pragma endregion


void SchoolDepartment::ListStudents() const 
{
    std::cout << m_deptName << " students:\n";
    for (Student* s : m_students) 
        std::cout << " - " << s->GetStudentName() << "\n";
}



int main() 
{
    SchoolDepartment science(1, "Science");
    ScienceStudent s1(01, "Anirban Chakraborty", 17);
    ScienceStudent s2(02, "Bidisha Roy", 17);
    
    s1.AssignDepartment(&science);
    s2.AssignDepartment(&science);


    SchoolDepartment arts(2, "Arts");
    ArtsStudent a1(21, "Chandrani Bandhopadhay", 18);
    ArtsStudent a2(22, "Debhargha Sen", 18);

    a1.AssignDepartment(&arts);
    a2.AssignDepartment(&arts);

    science.ListStudents();
    arts.ListStudents();

    ArtsStudent newArtsStudent1(23, "Esha Chatterjee", 18);
    arts.AddStudent(&newArtsStudent1);
    
    newArtsStudent1.AssignDepartment(&arts);
    
    std::cout << "New Arts Student List" << "\n";
    arts.ListStudents();

    return 0;
}
