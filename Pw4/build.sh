#!/bin/bash
# Скрипт компиляции всех программ pw4_01.c ... pw4_05.c
# Запуск: ./build.sh

mkdir -p bin

for file in pw4_*.c; do
    name="${file%.c}"
    echo "Компиляция $file ..."
    if gcc -Wall -Wextra -std=c11 -o "bin/$name" "$file"; then
        echo "  OK -> bin/$name"
    else
        echo "  ОШИБКА в $file"
    fi
done

echo "Готово. Запуск, например: ./bin/pw4_01"
