/*
 * phase3b.c
 *
 */

#include <assert.h>
#include <phase1.h>
#include <phase2.h>
#include <usloss.h>
#include <string.h>
#include <libuser.h>

#include "phase3.h"
#include "phase3Int.h"

#ifdef DEBUG
int debugging3 = 1;
#else
int debugging3 = 0;
#endif

void debug3(char *fmt, ...)
{
    va_list ap;

    if (debugging3) {
        va_start(ap, fmt);
        USLOSS_VConsole(fmt, ap);
    }
}

/*
 *----------------------------------------------------------------------
 *
 * P3FrameInit --
 *
 *  Initializes the frame data structures.
 *
 * Results:
 *   P3_ALREADY_INITIALIZED:    this function has already been called
 *   P1_SUCCESS:                success
 *
 *----------------------------------------------------------------------
 */
int
P3FrameInit(int pages, int frames)
{
    int result = P1_SUCCESS;

    // initialize the frame data structures, e.g. the pool of free frames
    // set P3_vmStats.freeFrames

    return result;
}

/*
 *----------------------------------------------------------------------
 *
 * P3FrameFreeAll --
 *
 *  Frees all frames used by a process
 *
 * Results:
 *   P3_NOT_INITIALIZED:    P3FrameInit has not been called
 *   P1_INVALID_PID:        pid is invalid
 *   P1_SUCCESS:            success
 *
 *----------------------------------------------------------------------
 */

int
P3FrameFreeAll(int pid)
{
    int result = P1_SUCCESS;

    // free all frames in use by the process (P3PageTableGet)

    return result;
}

/*
 *----------------------------------------------------------------------
 *
 * P3PageFaultResolve --
 *
 *  Frees all frames used by a process
 *
 * Results:
 *   P3_NOT_INITIALIZED:    P3FrameInit has not been 
 *   P3_NOT_IMPLEMENTED:    this function has not been implemented
 *   P1_INVALID_PID:        pid is invalid
 *   P1_INVALID_PAGE:       page is invalid
 *   P3_OUT_OF_SWAP:        there is no more swap space
 *   P1_SUCCESS:            success
 *
 *----------------------------------------------------------------------
 */
int 
P3PageFaultResolve(int pid, int page, int *frame) 
{
    /*******************
    if there is a free frame
        frame = a free frame
    else
        rc = P3SwapOut(&frame)
        if rc == P3_OUT_OF_SWAP
            return rc
    rc = P3SwapIn(pid, page, frame)
    if rc == P3_PAGE_NOT_FOUND
        fill frame with zeros
    return P1_SUCCESS
    *******************/
    return P3_NOT_IMPLEMENTED;
}

