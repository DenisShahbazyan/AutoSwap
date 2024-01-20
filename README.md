# AutoSwap

## Описание:
- Приложение для автоматической смены экипировки в игре Perfect World, по одному нажатию клавиши. 
- Программа только для пиратских серверов!

### Для корректного запуска необходимо настроить:
- Свойства -> Компоновщик -> Точка входа -> main
- Свойства -> Компоновщик -> Система -> Windows (/SUBSYSTEM:WINDOWS)

## Настройка среды разработки для запуска проекта:
- Установить [Microsoft Visual Studio 2022 Community Edition](https://visualstudio.microsoft.com/ru/vs/older-downloads/)
- При установке выбрать "Разработка классических приложений на С++" и "Разработка классических приложений .NET" (Как на скрине)
<img src="/data/Screenshots/Screenshot_1.png" alt="sch" style="max-width: 100%;">
- Выбрать дополнительные (отдельные) компоненты: 

1. "Поддержка С++/CLI для средств сборки версии 141 (14.16)"
2. "Пакет SDK для Windows 11 (10.0.22000.0)"

<img src="/data/Screenshots/Screenshot_2.png" alt="sch" style="max-width: 100%;">

## Развертывание:
- Склонировать проект
```sh 
git clone https://github.com/DenisShahbazyan/AutoSwap.git
``` 
- Открыть проект и запустить в x86.

## Системные требования:
- C++ 17
- Visual Studio 2022 Community Edition
- Windows 10 Pro x64

## Планы по доработке:
>Это учебный проект, я его переписывал с Delphi. В планах переписать это на C# и уже окончательно выбрать язык для написания ботов и различных приложух для игр.

## Используемые технологии:
- С++ 17

## Авторы:
- [Denis Shahbazyan](https://github.com/DenisShahbazyan)

## Лицензия:
- MIT