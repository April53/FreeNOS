/*
 * Copyright (C) 2009 Niek Linnenbank
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __FILESYSTEM_PROCFILESYSTEM_H
#define __FILESYSTEM_PROCFILESYSTEM_H

#include <File.h>
#include <FileSystem.h>
#include <FileSystemMessage.h>
#include <Types.h>
#include <Error.h>

/**
 * Process filesystem (procfs). Maps processes into a pseudo filesystem.
 */
class ProcFileSystem : public FileSystem
{
    public:
    
	/**
	 * Class constructor function.
	 * @param path Path to which we are mounted.
	 */
	ProcFileSystem(const char *path);
	
    private:

	/**
	 * Refreshes the cache completely.
	 * @param cache Input FileCache which has caused a hit.
	 */
	FileCache * cacheHit(FileCache *cache);
	
	/** String representation of process states. */
	static char *states[];
};

#endif /* __FILESYSTEM_PROCFILESYSTEM_H */
