// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers



// TODO: reference additional headers your program requires here

#include <windows.h>

#if (defined(WIN32) || defined(WIN64))
#include <WinSock2.h>
#include <ws2tcpip.h>
#include <mswsock.h>
#endif

#include "mysql.h"
#include "errmsg.h"

/////////////////////////////////////////////////////////////

#include "MGTypes.h"
#include "MGDefine.h"

#include "MGDB.h"

#include "MGMisc.h"
#include "MGThread.h"
#include "MGMemory.h"