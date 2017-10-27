// stdafx.h�: fichier Include pour les fichiers Include syst�me standard,
// ou les fichiers Include sp�cifiques aux projets qui sont utilis�s fr�quemment,
// et sont rarement modifi�s
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclure les en-t�tes Windows rarement utilis�s
// Fichiers d'en-t�te Windows�:
#include <windows.h>
#include <shlobj.h>
#include <shlwapi.h>
#include <aclapi.h>
#include <sddl.h>
#include <wincrypt.h>
#include <wininet.h>
#include <shellapi.h>
#include <ctime>

#pragma comment(lib, "crypt32.lib")
#pragma comment(lib, "shlwapi.lib")
#pragma comment(lib, "wininet.lib")
#if _DEBUG
#pragma comment(lib, "lua53d.lib")
#else
#pragma comment(lib, "lua53.lib")
#endif

// Fichiers d'en-t�te C RunTime
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>



