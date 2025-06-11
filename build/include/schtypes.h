/* Editor Settings: expandtabs and use 4 spaces for indentation
 * ex: set softtabstop=4 tabstop=8 expandtab shiftwidth=4: *
 */

/*
 * Copyright © BeyondTrust Software 2004 - 2019
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * BEYONDTRUST MAKES THIS SOFTWARE AVAILABLE UNDER OTHER LICENSING TERMS AS
 * WELL. IF YOU HAVE ENTERED INTO A SEPARATE LICENSE AGREEMENT WITH
 * BEYONDTRUST, THEN YOU MAY ELECT TO USE THE SOFTWARE UNDER THE TERMS OF THAT
 * SOFTWARE LICENSE AGREEMENT INSTEAD OF THE TERMS OF THE APACHE LICENSE,
 * NOTWITHSTANDING THE ABOVE NOTICE.  IF YOU HAVE QUESTIONS, OR WISH TO REQUEST
 * A COPY OF THE ALTERNATE LICENSING TERMS OFFERED BY BEYONDTRUST, PLEASE CONTACT
 * BEYONDTRUST AT beyondtrust.com/contact
 */

/*
 * Authors: Rafal Szczesniak (rafal@likewisesoftware.com)
 */


#ifndef _SCHN_TYPES_H_
#define _SCHN_TYPES_H_

#ifndef HAVE_UINT8
typedef unsigned char          uint8;
#endif

#ifndef HAVE_UINT16
typedef unsigned short int     uint16;
#endif

#ifndef HAVE_UINT32
typedef unsigned int           uint32;
#endif

#ifndef HAVE_UINT64
typedef unsigned long long int uint64;
#endif

#ifndef HAVE_INT8
typedef char                   int8;
#endif

#ifndef HAVE_INT16
typedef short int              int16;
#endif

#ifndef HAVE_INT32
typedef int                    int32;
#endif

#ifndef HAVE_INT64
typedef long long int          int64;
#endif

/* To avoid conflict with lwrpc/types.h */
#define DEFINED_UINT32


#endif /* _SCHN_TYPES_H_ */


/*
local variables:
mode: c
c-basic-offset: 4
indent-tabs-mode: nil
tab-width: 4
end:
*/
