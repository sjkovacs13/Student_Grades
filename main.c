//
//  main.c
//  Student Grades
//
//  Created by Samuel Kovacs on 11/14/12.
//  Copyright (c) 2012 Samuel Kovacs. All rights reserved.
//
//  Asks for number of students and grades on a test. Calculates class average and number of students who failed.

#include <stdio.h>

int main(int argc, const char * argv[])
{
    // Asks for number of students
    printf("How many students are there? ");
    int numStudent;
    scanf("%i", &numStudent);
    
    // Initializes variables
    int counter;
    double totalGrade;
    int numFail=0;
    
    // Asks what the grade was for each student and adds them together
    for (counter=1, totalGrade=0; counter<=numStudent; counter++) {
        printf("Please enter grade: ");
        int studentGrade;
        scanf("%i", &studentGrade);
        
        // Adds up number of students who failed
        if (studentGrade<60) {
            numFail++;
        }
        totalGrade=totalGrade+studentGrade;
    }
    
    // Calculates average with the total grades calculated above
    double avgGrade;
    avgGrade=totalGrade/numStudent;
    
    // Prints results
    printf("Average grade is %.2lf\n", avgGrade);
    printf("%i students failed.", numFail);
    return 0;
}

