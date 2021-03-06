//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information. 
//

/*============================================================================
**
** Source:  test1.c
**
** Purpose: Test #1 for the sprintf function. A single, basic, test
**          case with no formatting.
**
**
**==========================================================================*/



#include <palsuite.h>
#include "../sprintf.h"

/* 
 * Depends on memcmp and strlen
 */

int __cdecl main(int argc, char *argv[])
{
    char checkstr[] = "hello world";
    char buf[256];

    if (PAL_Initialize(argc, argv) != 0)
    {
        return FAIL;
    }


    sprintf(buf, "hello world");

    if (memcmp(checkstr, buf, strlen(checkstr)+1) != 0)
    {
        Fail("ERROR: expected %s, got %s\n", checkstr, buf);
    }

    PAL_Terminate();
    return PASS;
}

