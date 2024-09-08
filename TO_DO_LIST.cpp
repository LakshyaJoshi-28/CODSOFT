#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task
{
    string description;
    bool IsCompleted;
};

vector<Task> tasks;

void Add_The_Task()
{
    string description;
    cout << "Enter the task : ";
    getline(cin, description);
    tasks.push_back({description, false});
    cout << " Task added successfully " <<endl;
}

void View_The_Tasks()
{
    cout << "Here is the list of your tasks : "<<endl;
    for (int i = 0; i < tasks.size(); i++)
    {
        cout << i + 1 << " . " << tasks[i].description;
        if (tasks[i].IsCompleted)
        {
            cout << " ( Task completed) ";
        }
        cout << endl;
    }
}

void Mark_Task_As_Completed(int index)
{
    if (index >= 0 && index < tasks.size())
    {
        tasks[index].IsCompleted = true;
        cout << "Task marked as completed. "<<endl;
    }

    else
    {
        cout << " Invalid task index. "<<endl;
    }
}

void Remove_Task(int index)
{
    if (index >= 0 && index < tasks.size())
    {
        tasks.erase(tasks.begin() + index);
        cout << " Task removed. "<<endl;
    }

    else
    {
        cout << " Invalid task index. "<<endl;
    }
}

int main()
{
    int User_choice;

    while (true)
    {
        cout << " --To-Do List-- \n";
        cout << "-------------------" << endl;
        cout << "1) Add Task "<<endl;
        cout << "2) View Tasks "<<endl;
        cout << "3) Mark Task as Completed "<<endl;
        cout << "4) Remove Task "<<endl;
        cout << "5) Exit "<<endl;
        cout << " Please enter your choice: ";
        cin >> User_choice;
        cin.ignore();

        switch (User_choice)
        {
        case 1:
            Add_The_Task();
            break;
        case 2:
            View_The_Tasks();
            break;
        case 3:
        {
            int index;
            cout << "Enter task index to mark as completed: ";
            cin >> index;
            Mark_Task_As_Completed(index - 1);
            break;
        }
        case 4:
        {
            int index;
            cout << "Enter task index to remove: ";
            cin >> index;
            Remove_Task(index - 1);
            break;
        }
        case 5:
            cout << "Exiting......"<<endl;
          
        default:
            cout << "Your choice is invalid . Please try again later. "<<endl;
        }
    }
    return 0;
}
