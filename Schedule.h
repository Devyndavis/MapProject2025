#ifndef SCHEDULE_H
#define SCHEDULE_H

#include "ScheduleItem.h"
#include <vector>
#include <iostream>

class Schedule {
public:
    std::vector<ScheduleItem> items;

    // Add a ScheduleItem to the schedule
    void addItem(const ScheduleItem& item) {
        items.push_back(item);
    }

    // Display the entire schedule
    void display() const {
        std::cout << "All Schedule Entries:\n";
        std::cout << std::setw(8) << "Subject" 
                  << std::setw(8) << "Catalog" 
                  << std::setw(8) << "Section" 
                  << std::setw(12) << "Component" 
                  << std::setw(8) << "Session" 
                  << std::setw(6) << "Units" 
                  << std::setw(10) << "Enrolled" 
                  << std::setw(10) << "Capacity" 
                  << std::setw(20) << "Instructor" << std::endl;
        std::cout << "---------------------------------------------------------------------------------------------------\n";

        for (const auto& item : items) {
            item.display();
        }
    }
};

#endif // SCHEDULE_H