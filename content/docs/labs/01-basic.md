---
title: "Лабораторная 1. Сборка проекта с CMake"
weight: 1
---

# Лабораторная 1. Сборка проекта с CMake

## Цель
Научиться собирать C++-проект с помощью CMake, разделять код на трансляционные единицы и запускать тесты через CTest.

## Материалы
📥 [Скачать шаблон проекта (ZIP)](/cpp-course/downloads/01-basics.zip)

> **Важно:** ссылка выше автоматически ведет на актуальную версию кода, которая гарантированно компилируется.

## Задание
1. Распакуй архив в удобную папку.
2. Настрой сборку для своей платформы (инструкции ниже).
3. Убедись, что встроенные тесты проходят.
4. Добавь в `tests/test_sum.cpp` три собственных тестовых случая (например, с отрицательными числами или большими массивами).

## Инструкция по сборке

### Windows (Visual Studio / PowerShell)
```powershell
cmake -S . -B build -G "Visual Studio 17 2022"
cmake --build build --config Release
ctest --test-dir build -C Release --output-on-failure
```

(Если у тебя MinGW, используй -G "MinGW Makefiles" и просто cmake --build build)

### Linux / macOS
```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
ctest --test-dir build --output-on-failure
```

### Критерии сдачи
- Проект собирается без предупреждений компилятора (-Wall -Wextra).
- Все тесты (включая твои новые) проходят успешно.
- В отчете приведены команды сборки и вывод ctest.
