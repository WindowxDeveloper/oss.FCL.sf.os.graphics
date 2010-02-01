/*
* Copyright (c) 2004 Nokia Corporation and/or its subsidiary(-ies).
* All rights reserved.
* This component and the accompanying materials are made available
* under the terms of the License "Eclipse Public License v1.0"
* which accompanies this distribution, and is available
* at the URL "http://www.eclipse.org/legal/epl-v10.html".
*
* Initial Contributors:
* Nokia Corporation - initial contribution.
*
* Contributors:
*
* Description: Platform specific configuration
*
*/


#ifndef __M3G_CONFIG_H__
#define __M3G_CONFIG_H__

/*! \file
 * \brief Platform specific configuration for the Nokia M3G API implementation.
 */

#define M3G_NATIVE_LOADER

/* Constants that work for MBX and Gerbera */
#define M3G_MAX_VIEWPORT_DIMENSION  1024
#define M3G_MAX_TEXTURE_DIMENSION   1024

/* Support antialiasing */
#define M3G_SUPPORT_ANTIALIASING    M3G_TRUE

#if defined(M3G_DEBUG)
/*
#define M3G_ENABLE_PROFILING
#define M3G_LOGLEVEL \
    M3G_LOG_FATAL_ERRORS|M3G_LOG_USER_ERRORS|M3G_LOG_WARNINGS \
    |M3G_LOG_MEMORY_USAGE|M3G_LOG_INTERFACE|M3G_LOG_OBJECTS \
    |M3G_LOG_STAGES
*/
#endif

#endif /*__M3G_CONFIG_H__*/
