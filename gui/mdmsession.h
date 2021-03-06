/* MDM - The MDM Display Manager
 * Copyright (C) 1999, 2000 Martin K. Petersen <mkp@mkp.net>
 *
 * This file Copyright (c) 2003 George Lebl
 * - Common routines for the greeters.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef MDM_SESSION_H
#define MDM_SESSION_H

#include "misc.h"

#define LAST_SESSION "Last"
#define SESSION_NAME "SessionName"

typedef struct {
        char *name;
        char *comment;
} MdmSession;

void		mdm_session_list_init		(void);
void		_mdm_session_list_init		(GHashTable **sessnames,
						 GList **sessions,
						 gchar **default_session,
						 const gchar **current_session);
gint		mdm_session_sort_func		(const char *a, const char *b);
const char *	mdm_session_name 		(const char *name);
void		mdm_session_list_from_hash_table_func (const char *key,
						const char *value,
						GList **sessions);
gint		mdm_session_sort_func		(const char *a,
						 const char *b);
const char *    mdm_get_default_session         (void);

#endif /* MDM_SESSION_H */
