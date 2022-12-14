
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


/* ========== PREPROCESSOR DEFINITIONS			==========	*/
#define WIN32_LEAN_AND_MEAN
#define _CTR_SECURE_NO_WARNINGS


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

#define COMPONENTS_MAX			0x100
#define VOBJECT_NODE_SIZE		0x800
#define VOBJECT_MAX_COMPONENTS	0x10

#define WORKERS_MAX						 0x40
#define WORKER_TASKLIST_NODE_SIZE		 0x100
#define WORKER_COMPONENT_CYCLE_NODE_SIZE 0x200

#define HEAP_ALLOCATE_MIN NULL
#define HEAP_ALLOCATE_MAX NULL

#define MAX_ENTRIES_IN_MEMORY		0x100
#define MAX_ENTRYLOGS_ON_DISK		0x008
#define ENTRYLOG_DUMP_INTERVAL_SEC	0x020

#define MAX_BUFFERS		0x800
#define MAX_DBUFFERS	0x800

#define MAX_LOCKS		0x800
#define UNUSED_LOCK		0xDEAD

/* ========== ENTRY TYPES						==========	*/
#define ENTRY_UNUSED	0x00
#define ENTRY_INFO		0x01
#define ENTRY_WARNING	0x02
#define ENTRY_ERROR		0x03


/* ========== STRINGS							==========	*/
#define ENTRYLOG_DIR			"eventlog"
#define ENTRYLOG_FILENAME		"log"
#define ENTRYLOG_FILEEXTENSION	".txt"
#define FATAL_ERROR_CAPTION		"VCore Fatal Error"

#endif
