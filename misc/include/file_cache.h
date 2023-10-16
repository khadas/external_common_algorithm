/*
 *  Copyright (c) 2016 Rockchip Electronics Co. Ltd.
 *  Author: Huaping Liao <huaping.liao@rock-chips.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * 	 http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __FILE_CACHE_H__
#define __FILE_CACHE_H__

#include <stdint.h>

typedef struct _FILE_CACHE_ARG {
	int write_cache;
	int tatal_cache;
} FILE_CACHE_ARG;

int file_cache_init(FILE_CACHE_ARG *cache_arg);
int file_cache_deinit();
int64_t file_cache_lseek(int fd, int64_t offset, int whence);
ssize_t file_cache_write(int fd, const void *buf, size_t count, int64_t mdat_pos);
int file_cache_open(const char *filename, int flags, ...);
int file_cache_close(int fd);

#if 0
FILE *file_cache_fopen(const char *file_name, const char *mode);
int file_cache_fclose(FILE *fp);
ssize_t file_cache_read(int fd, void *buf, size_t count);
int file_cache_writetrail(int fd);
int file_cache_get_tailoff(int fd);
int file_cache_blocknotify(int prev_num, int later_num, char *filename);
int file_cache_fstat(int fd, struct stat *filestat);
#endif

#endif
