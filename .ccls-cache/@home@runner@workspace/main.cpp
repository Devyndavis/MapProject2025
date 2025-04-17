#include <iostream>
#include "Schedule.h"
#include "ScheduleItem.h"

int main() {
    // Create a Schedule object
    Schedule mySchedule;

    // Add ScheduleItems to the Schedule
    mySchedule.addItem(ScheduleItem("AUT", "101", "50H", "LEC", "10W", 3, 3, 5, "Dr. Smith"));
    mySchedule.addItem(ScheduleItem("AUT", "236", "01H", "LEC", "10W", 4, 4, 5, "Dr. Johnson"));
    mySchedule.addItem(ScheduleItem("BIO", "101", "01H", "LEC", "8W1", 4, 4, 5, "Dr. Lee"));
    mySchedule.addItem(ScheduleItem("BIO", "101", "01HL", "LAB", "8W1", 0, 0, 5, "Dr. Lee"));
    mySchedule.addItem(ScheduleItem("BIO", "101", "01W", "LEC", "8W1", 4, 4, 5, "Dr. Lee"));
    mySchedule.addItem(ScheduleItem("BIO", "101", "01WL", "LAB", "8W1", 0, 0, 5, "Dr. Lee"));
    mySchedule.addItem(ScheduleItem("BIO", "101", "50H", "LEC", "8W1", 4, 4, 2, "Dr. Lee"));
    mySchedule.addItem(ScheduleItem("BIO", "101", "50HL", "LAB", "8W1", 0, 0, 2, "Dr. Lee"));

    // Display the schedule
    mySchedule.display();

    return 0;
}