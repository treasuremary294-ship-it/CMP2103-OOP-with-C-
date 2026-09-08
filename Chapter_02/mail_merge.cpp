#include <iostream>
#include <string>
#include <ctime>

int main() {
    std::string firstName, lastName, program, academicYear;

    std::cout << "Enter first name: ";
    std::getline(std::cin, firstName);

    std::cout << "Enter last name: ";
    std::getline(std::cin, lastName);

    std::cout << "Enter study program: ";
    std::getline(std::cin, program);

    std::cout << "Enter academic year (e.g. 2027/2028): ";
    std::getline(std::cin, academicYear);

    // Get today's date
    std::time_t t = std::time(NULL);
    std::tm* now = std::localtime(&t);
    int day = now->tm_mday;

    std::string suffix;
    if (day % 10 == 1 && day != 11) suffix = "st";
    else if (day % 10 == 2 && day != 12) suffix = "nd";
    else if (day % 10 == 3 && day != 13) suffix = "rd";
    else suffix = "th";

    static const char* months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    std::string monthName = months[now->tm_mon];
    int year = now->tm_year + 1900;

    std::cout << "\n";
    std::cout << "Date: " << day << suffix << " " << monthName << " " << year << "\n\n";
    std::cout << "To: " << firstName << " " << lastName << ",\n\n";
    std::cout << "Dear " << firstName << ",\n\n";
    std::cout << "CONGRATULATIONS! I am pleased to inform you that the Makerere University\n";
    std::cout << "Admissions Board has approved your application for admission to the\n";
    std::cout << academicYear << " academic year.\n\n";
    std::cout << "You have been offered a place for the following course:\n";
    std::cout << "PROGRAM: " << program << "\n\n";
    std::cout << "As a student of Makerere University, you will be part of a historic\n";
    std::cout << "institution dedicated to academic excellence and innovation. Please ensure\n";
    std::cout << "that you report to the Academic Registrar's office with your original\n";
    std::cout << "academic documents for verification during the orientation week.\n\n";
    std::cout << "We look forward to welcoming you to the Makerere University.\n\n";
    std::cout << "Yours sincerely,\n\n\n";
    std::cout << "John Doe\n";
    std::cout << "Registrar\n";

    return 0;
}