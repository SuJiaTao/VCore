
/* ========== <vdefs.h>							==========	*/
/* Bailey Jia-Tao Brown							2022		*/
/* All 'magic-numbers' and macros of VCore					*/

#ifndef _VCORE_DEFS_INCLUDE_
#define _VCORE_DEFS_INCLUDE_ 

/* ========== INCLUDES							==========	*/
#include "vtypes.h"


/* ========== API DEFINITION					==========	*/
#ifdef VCORE_EXPORTS
#define VAPI __declspec(dllexport)
#else
#define VAPI __declspec(dllimport)
#endif


/* ========== MACROS							==========	*/
#define ZERO		0
#define NOTHING		0
#define NO_FLAGS	(DWORD)0
#define NO_HANDLE	(HANDLE)0
#define NO_WINDOW	(HWND)0
#define THIS_FUNC	__FUNCTION__


/* ========== MAGIC NUMBERS						==========	*/
#define BUFF_TINY		0x20
#define BUFF_SMALL		0x40
#define BUFF_MEDIUM		0x80
#define BUFF_LARGE		0x100
#define BUFF_MASSIVE	0x200

#define HEAP_ALLOCATE_MIN 0x010000
#define HEAP_ALLOCATE_MAX 0x100000

#define ENTRIES_SAVED_IN_MEMORY 0x100


/* ========== ENTRY TYPES						==========	*/
#define ENTRY_UNUSED	0x00
#define ENTRY_EVENT		0x01
#define ENTRY_WARNING	0x02
#define ENTRY_ERROR		0x03


/* ========== STRINGS							==========	*/
#define FATAL_ERROR_CAPTION		"VCore Fatal Error"

#endif