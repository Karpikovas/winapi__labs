// stdafx.h: включаемый файл для стандартных системных включаемых файлов
// или включаемых файлов для конкретного проекта, которые часто используются, но
// не часто изменяются
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Исключите редко используемые компоненты из заголовков Windows
// Файлы заголовков Windows:
#include <windows.h>

#define EXPORT extern "C" __declspec(dllexport)
EXPORT void ClearScreen(HDC, int, int, int, int);
EXPORT void DrawLine(HDC, int, int, int, int);

// TODO: Установите здесь ссылки на дополнительные заголовки, требующиеся для программы
