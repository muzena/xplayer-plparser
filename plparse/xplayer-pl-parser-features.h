/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 8; tab-width: 8 -*-

  Copyright (C) 2006 William Jon McCann <mccann@jhu.edu>

   The Gnome Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The Gnome Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the Gnome Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301  USA.

   Authors: William Jon McCann <mccann@jhu.edu>
 */

#ifndef __XPLAYER_PL_PARSER_VERSION_H__
#define __XPLAYER_PL_PARSER_VERSION_H__

/* compile time version
 */
#define XPLAYER_PL_PARSER_VERSION_MAJOR	(3)
#define XPLAYER_PL_PARSER_VERSION_MINOR	(10)
#define XPLAYER_PL_PARSER_VERSION_MICRO	(2)

/* check whether a version equal to or greater than
 * major.minor.micro is present.
 */
#define	XPLAYER_PL_PARSER_CHECK_VERSION(major,minor,micro)	\
    (XPLAYER_PL_PARSER_VERSION_MAJOR > (major) || \
     (XPLAYER_PL_PARSER_VERSION_MAJOR == (major) && XPLAYER_PL_PARSER_VERSION_MINOR > (minor)) || \
     (XPLAYER_PL_PARSER_VERSION_MAJOR == (major) && XPLAYER_PL_PARSER_VERSION_MINOR == (minor) && \
      XPLAYER_PL_PARSER_VERSION_MICRO >= (micro)))


#endif /* __XPLAYER_PL_PARSER_VERSION_H__ */

