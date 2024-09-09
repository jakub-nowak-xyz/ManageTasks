# Task Management System

## Description

This project is a simple task management system implemented in C++. It allows users to create, manage, and remove tasks. Each task can have comments added by users.

## Features

- Create tasks with specific details such as state, area, priority, author, activity, and remaining work.
- Add comments to tasks.
- Remove tasks by ID.
- Display detailed information about tasks.

## Setup Instructions

### Prerequisites

- C++ compiler (e.g., g++)
- Make (optional, for ease of compilation)

### Compilation

To compile the project, you can use the following command:

```sh
g++ -o ManageTasksApp main.cpp User.cpp Comment.cpp Epic.cpp Issue.cpp Task.cpp UserActions.cpp MenuHelpers.cpp WorkItem.cpp -std=c++17 -Wall
```

Alternatively, if you have a Makefile, you can simply run:

```sh
make
./ManageTasksApp
```

## Usage

When you run the program, you will be presented with a menu to manage tasks. You can add new tasks, remove tasks, find tasks by ID, and display all tasks.

```sh
Manage Tasks App Option:
1. Add new work item.
2. Remove work item.
3. Find task by ID
4. Display all tasks
To exit the program type 'exit'
Choose an option: 1
Creating new work item
1. Epic
2. Task
3. Issue
Choose work item TYPE: 1
Enter state value (NEW | IN PROGRESS | DONE): NEW
Enter area value (TEXT): Development
Enter priority (NUMBER): 1
Enter first name: John
Enter last name: Doe
Enter start date (dd-MM-yyyy): 01-01-2023
Enter end date (dd-MM-yyyy): 31-12-2023
```

## License

[MIT](https://choosealicense.com/licenses/mit/)
