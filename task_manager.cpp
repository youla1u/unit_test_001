#include <iostream>
#include <vector>

class Task {
public:
    Task(const std::string& name, const std::string& description, const std::string& deadline)
        : name(name), description(description), deadline(deadline) {
    }

    // Méthodes pour manipuler les propriétés de la tâche
    const std::string& getName() const {
        return name;
    }

    const std::string& getDescription() const {
        return description;
    }

    const std::string& getDeadline() const {
        return deadline;
    }

private:
    std::string name;
    std::string description;
    std::string deadline;
    // Autres propriétés et méthodes pertinentes
};

class TaskManager {
public:
    void addTask(const Task& task) {
        tasks.push_back(task);
    }

    void removeTask(const std::string& taskName) {
        for (auto it = tasks.begin(); it != tasks.end(); ++it) {
            if (it->getName() == taskName) {
                tasks.erase(it);
                break;
            }
        }
    }

    void displayTasks() const {
        std::cout << "Tasks:\n";
        for (const Task& task : tasks) {
            std::cout << "Name: " << task.getName() << "\n";
            std::cout << "Description: " << task.getDescription() << "\n";
            std::cout << "Deadline: " << task.getDeadline() << "\n";
            std::cout << "------------------------\n";
        }
    }

    //size_t
    int getTaskCount() const {
        return tasks.size();
    }

private:
    std::vector<Task> tasks;
};

/*
int main() {
    TaskManager taskManager;

    Task task1("Task 1", "Description 1", "2023-08-31");
    Task task2("Task 2", "Description 2", "2023-09-15");

    taskManager.addTask(task1);
    taskManager.addTask(task2);

    taskManager.displayTasks();

    taskManager.removeTask("Task 1");

    taskManager.displayTasks();

    return 0;
}*/
