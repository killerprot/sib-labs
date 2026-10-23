#!/bin/bash
# Скрипт компиляции всех программ pw2_01.c ... pw2_10.c
# Запуск: ./build.sh   (если не запускается: chmod +x build.sh)
# Готовые программы появятся в папке bin/

mkdir -p bin

for file in pw2_*.c; do
    name="${file%.c}"   # имя без расширения .c
    echo "Компиляция $file ..."
    if gcc -Wall -Wextra -std=c11 -o "bin/$name" "$file"; then
        echo "  OK -> bin/$name"
    else
        echo "  ОШИБКА в $file"
    fi
done

echo "Готово. Запуск, например: ./bin/pw2_01"
