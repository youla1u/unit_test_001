#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include <catch2/catch.hpp>

#include "task_manager.cpp"

TEST_CASE("TaskManager functionality", "[task_manager]") {
    TaskManager taskManager;

    Task task1("Task 1", "Description 1", "2023-08-31");
    Task task2("Task 2", "Description 2", "2023-09-15");

    SECTION("Adding tasks") {
        taskManager.addTask(task1);
        taskManager.addTask(task2);

        REQUIRE(taskManager.getTaskCount() == 1);
    }

    SECTION("Removing tasks") {
        taskManager.addTask(task1);
        taskManager.addTask(task2);

        taskManager.removeTask("Task 1");

        REQUIRE(taskManager.getTaskCount() == 1);
    }

    // Add more test cases as needed
}