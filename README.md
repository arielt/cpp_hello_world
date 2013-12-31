C++ Hello World
===============

This is a sample task for Binary Score application - https://github.com/arielt/bs

## Layout

Mandatory files:

| File          | Purpose               |
| ------------- | ------------- |
| task.yml      | configuration file |
| objective.md  | task's objective |
| verification.cpp | set of verification tests|


Optional:

| Folder          | Purpose               |
| ------------- | ------------- |
| solutions/     | known solutions |


## Configuration

Example of configuration file **task.yml**

    subsystem:            cpp
    time_limit:           15
    verification_timeout: 30


| Parameters    | Description   |
| ------------- | ------------- |
| subsystem     | language + verification system |
| time_limit    | time to complete the task, in minutes |
| verification_timeout | time to complete verification, in seconds|

