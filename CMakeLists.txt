cmake_minimum_required(VERSION 3.29)
project(OOP_presentation)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(YOURFOLDER
    Applicant.h
    Customer.h
    Department.h
    Developer.h
    Employee.h
    main.cpp
    Manager.h
    Person.h
    SalesRepresentative.h
    SupportStaff.h)
