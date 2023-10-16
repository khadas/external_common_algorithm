/*
 *  Copyright (c) 2017 Rockchip Electronics Co. Ltd.
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

#ifndef __FILE_MSG_H__
#define __FILE_MSG_H__

typedef enum _FILE_NOTIFY{
	FILE_NEW = 0, /* Recording now */
	FILE_END, /* Record end */
	FILE_OVERLONG, /* File size overlong */
	OPEN_FAILED,
	WRITE_FAILED,
	WRITE_SLOW,
} FILE_NOTIFY;

typedef void (*FILE_EVENT_CALLBACK)(int cmd, void *msg0, void *msg1);

void file_msg_reg_callback(FILE_EVENT_CALLBACK call);
void file_msg_notify(FILE_NOTIFY notify, const char *filename, int arg);
#endif
