## Лабораторна робота 3 з предмету "Архітектура комп'ютерів-2. Процесори".

### Ключі, які пітримуються:
    -h, --help => Виводить повідомлення допомоги.
    -v, --version => Виводить значення версії за замовчуванням.
    -s, -size => Може як і мати аргумети, так і не мати, Виводить аргумент у разі його наявності. 
    -f, -file => Потребує аргумети, виводить аргумент.

### Приклади виконання:
     >run -h --help
    You`ve used help option.
    Unfortunatelly program is help-less :(
    Try -h or --help.
---
     >run --version
    You`ve used version option.
    Current version = 1.0.0.
    Try -v or --version.
---
     >run -s
    You`ve used size option without value
    Try -s or --size.
---
     >run -s1
    You`ve used size option with value 1
    Try -s or --size.
---
     >run -fHello
    You`ve used file option (value is needed).
    File = Hello
    Try -f or --file.
---
     >run -e
    Error.
    Error code: 404.
    You`ve used unknown option or didn`t clarify value for the existing one.
