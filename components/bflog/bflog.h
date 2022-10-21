/**
 * @file bflog.h
 * @brief
 *
 * Copyright (c) 2022 Bouffalolab team
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 */

#ifndef _BFLOG_H
#define _BFLOG_H

#include <stdint.h>

#ifdef BFLOG_USER
#include "bflog_user.h"
#else
#include "bflog_default.h"
#endif

/** @addtogroup BFLOG_CSI Control Sequence Introducer
 * @{
 */
#define BFLOG_CSI_START "\033["
#define BFLOG_CSI_CUU   "A"
#define BFLOG_CSI_CUD   "B"
#define BFLOG_CSI_CUF   "C"
#define BFLOG_CSI_CUB   "D"
#define BFLOG_CSI_CNL   "E"
#define BFLOG_CSI_CPL   "F"
#define BFLOG_CSI_CHA   "G"
#define BFLOG_CSI_CUP   "H"
#define BFLOG_CSI_ED    "J"
#define BFLOG_CSI_EL    "K"
#define BFLOG_CSI_SU    "S"
#define BFLOG_CSI_SD    "T"
#define BFLOG_CSI_SGR   "m"
/**
 * @}
 */

/** @addtogroup BFLOG_SGR Select Graphic Rendition
 * @{
 */
#define BFLOG_SGR_RESET      "0"
#define BFLOG_SGR_BOLD       "1"
#define BFLOG_SGR_FAINT      "2"
#define BFLOG_SGR_ITALICS    "3"
#define BFLOG_SGR_UNDERLINE  "4"
#define BFLOG_SGR_BLINKS     "5"
#define BFLOG_SGR_BLINKR     "6"
#define BFLOG_SGR_REVERSE    "7"
#define BFLOG_SGR_HIDE       "8"
#define BFLOG_SGR_STRIKE     "9"
#define BFLOG_SGR_NORMAL     "22"
#define BFLOG_SGR_FG_BLACK   "30"
#define BFLOG_SGR_FG_RED     "31"
#define BFLOG_SGR_FG_GREEN   "32"
#define BFLOG_SGR_FG_YELLOW  "33"
#define BFLOG_SGR_FG_BLUE    "34"
#define BFLOG_SGR_FG_MAGENTA "35"
#define BFLOG_SGR_FG_CYAN    "36"
#define BFLOG_SGR_FG_WHITE   "37"
#define BFLOG_SGR_BG_BLACK   "40"
#define BFLOG_SGR_BG_RED     "41"
#define BFLOG_SGR_BG_GREEN   "42"
#define BFLOG_SGR_BG_YELLOW  "43"
#define BFLOG_SGR_BG_BLUE    "44"
#define BFLOG_SGR_BG_MAGENTA "45"
#define BFLOG_SGR_BG_CYAN    "46"
#define BFLOG_SGR_BG_WHITE   "47"
/**
 * @}
 */

/** @addtogroup BFLOG_COLOR
 * @{
 */
#define BFLOG_COLOR_START BFLOG_CSI_START
#define BFLOG_COLOR_END   BFLOG_CSI_SGR
#define BFLOG_CLOLR_SEP   ";"
#define BFLOG_COLOR_DEFAULT
#define BFLOG_COLOR_RESET BFLOG_SGR_RESET BFLOG_CLOLR_SEP
#define BFLOG_COLOR_FG_NONE
#define BFLOG_COLOR_FG_BLACK   BFLOG_SGR_FG_BLACK BFLOG_CLOLR_SEP
#define BFLOG_COLOR_FG_RED     BFLOG_SGR_FG_RED BFLOG_CLOLR_SEP
#define BFLOG_COLOR_FG_GREEN   BFLOG_SGR_FG_GREEN BFLOG_CLOLR_SEP
#define BFLOG_COLOR_FG_YELLOW  BFLOG_SGR_FG_YELLOW BFLOG_CLOLR_SEP
#define BFLOG_COLOR_FG_BLUE    BFLOG_SGR_FG_BLUE BFLOG_CLOLR_SEP
#define BFLOG_COLOR_FG_MAGENTA BFLOG_SGR_FG_MAGENTA BFLOG_CLOLR_SEP
#define BFLOG_COLOR_FG_CYAN    BFLOG_SGR_FG_CYAN BFLOG_CLOLR_SEP
#define BFLOG_COLOR_FG_WHITE   BFLOG_SGR_FG_WHITE BFLOG_CLOLR_SEP
#define BFLOG_COLOR_BG_NONE
#define BFLOG_COLOR_BG_BLACK   BFLOG_SGR_BG_BLACK BFLOG_CLOLR_SEP
#define BFLOG_COLOR_BG_RED     BFLOG_SGR_BG_RED BFLOG_CLOLR_SEP
#define BFLOG_COLOR_BG_GREEN   BFLOG_SGR_BG_GREEN BFLOG_CLOLR_SEP
#define BFLOG_COLOR_BG_YELLOW  BFLOG_SGR_BG_YELLOW BFLOG_CLOLR_SEP
#define BFLOG_COLOR_BG_BLUE    BFLOG_SGR_BG_BLUE BFLOG_CLOLR_SEP
#define BFLOG_COLOR_BG_MAGENTA BFLOG_SGR_BG_MAGENTA BFLOG_CLOLR_SEP
#define BFLOG_COLOR_BG_CYAN    BFLOG_SGR_BG_CYAN BFLOG_CLOLR_SEP
#define BFLOG_COLOR_BG_WHITE   BFLOG_SGR_BG_WHITE BFLOG_CLOLR_SEP
/**
 * @}
 */

/** @addtogroup BFLOG_COLOR_CONTROL
 * @{
 */
#ifndef BFLOG_COLOR_FATAL
#define BFLOG_COLOR_FATAL BFLOG_COLOR_FG_MAGENTA BFLOG_COLOR_BG_NONE BFLOG_SGR_BLINKS
#endif

#ifndef BFLOG_COLOR_ERROR
#define BFLOG_COLOR_ERROR BFLOG_COLOR_FG_RED BFLOG_COLOR_BG_NONE BFLOG_SGR_NORMAL
#endif

#ifndef BFLOG_COLOR_WARN
#define BFLOG_COLOR_WARN BFLOG_COLOR_FG_YELLOW BFLOG_COLOR_BG_NONE BFLOG_SGR_NORMAL
#endif

#ifndef BFLOG_COLOR_INFO
#define BFLOG_COLOR_INFO BFLOG_COLOR_FG_GREEN BFLOG_COLOR_BG_NONE BFLOG_SGR_NORMAL
#endif

#ifndef BFLOG_COLOR_DEBUG
#define BFLOG_COLOR_DEBUG BFLOG_COLOR_FG_WHITE BFLOG_COLOR_BG_NONE BFLOG_SGR_NORMAL
#endif

#ifndef BFLOG_COLOR_TRACE
#define BFLOG_COLOR_TRACE BFLOG_COLOR_FG_WHITE BFLOG_COLOR_BG_NONE BFLOG_SGR_FAINT
#endif
/**
 * @}
 */

/** @addtogroup BFLOG_LEVEL_STRING
 * @{
 */
#ifndef BFLOG_LEVEL_FATAL_STRING
#define BFLOG_LEVEL_FATAL_STRING "FATL"
#endif

#ifndef BFLOG_LEVEL_ERROR_STRING
#define BFLOG_LEVEL_ERROR_STRING "ERRO"
#endif

#ifndef BFLOG_LEVEL_WARN_STRING
#define BFLOG_LEVEL_WARN_STRING "WARN"
#endif

#ifndef BFLOG_LEVEL_INFO_STRING
#define BFLOG_LEVEL_INFO_STRING "INFO"
#endif

#ifndef BFLOG_LEVEL_DEBUG_STRING
#define BFLOG_LEVEL_DEBUG_STRING "DBUG"
#endif

#ifndef BFLOG_LEVEL_TRACE_STRING
#define BFLOG_LEVEL_TRACE_STRING "TRAC"
#endif
/**
 * @}
 */

/** @addtogroup BFLOG_LEVEL
 * @{
 */
#define BFLOG_LEVEL_FATAL 0 /*!< level fatal, create a panic */
#define BFLOG_LEVEL_ERROR 1 /*!< level error                 */
#define BFLOG_LEVEL_WARN  2 /*!< level warning               */
#define BFLOG_LEVEL_INFO  3 /*!< level information           */
#define BFLOG_LEVEL_DEBUG 4 /*!< level debug                 */
#define BFLOG_LEVEL_TRACE 5 /*!< level trace information     */
/**
 * @}
 */

/** @addtogroup BFLOG_FLAG
 * @{
 */
#define BFLOG_FLAG_LEVEL  ((uint8_t)0x01) /*!< supported print level     */
#define BFLOG_FLAG_TAG    ((uint8_t)0x02) /*!< supported record tag      */
#define BFLOG_FLAG_FUNC   ((uint8_t)0x04) /*!< supported record function */
#define BFLOG_FLAG_LINE   ((uint8_t)0x08) /*!< supported record line     */
#define BFLOG_FLAG_FILE   ((uint8_t)0x10) /*!< supported record file     */
#define BFLOG_FLAG_CLK    ((uint8_t)0x20) /*!< supported record clock    */
#define BFLOG_FLAG_TIME   ((uint8_t)0x40) /*!< supported record time     */
#define BFLOG_FLAG_THREAD ((uint8_t)0x80) /*!< supported record thread   */
/**
 * @}
 */

/** @addtogroup BFLOG_BASE_MARCO
 * @{
 */

/** @addtogroup BFLOG_STATUS
 * @{
 */
#define BFLOG_STATUS_ILLEGAL ((uint8_t)0)
#define BFLOG_STATUS_READY   ((uint8_t)1)
#define BFLOG_STATUS_RUNNING ((uint8_t)2)
#define BFLOG_STATUS_SUSPEND ((uint8_t)3)
/**
 * @}
 */

/** @addtogroup BFLOG_MODE
 * @{
 */
#define BFLOG_MODE_SYNC  ((uint8_t)0x00)
#define BFLOG_MODE_ASYNC ((uint8_t)0x01)
/**
 * @}
 */

/** @addtogroup BFLOG_COMMAND
 * @{
 */
#define BFLOG_CMD_ILLEGAL        ((uint32_t)0x00)
#define BFLOG_CMD_FLAG           ((uint32_t)0x01)
#define BFLOG_CMD_LEVEL          ((uint32_t)0x02)
#define BFLOG_CMD_QUEUE_POOL     ((uint32_t)0x03)
#define BFLOG_CMD_QUEUE_SIZE     ((uint32_t)0x04)
#define BFLOG_CMD_QUEUE_RST      ((uint32_t)0x05)
#define BFLOG_CMD_ENTER_CRITICAL ((uint32_t)0x06)
#define BFLOG_CMD_EXIT_CRITICAL  ((uint32_t)0x07)
#define BFLOG_CMD_FLUSH_NOTICE   ((uint32_t)0x08)
#define BFLOG_CMD_MODE           ((uint32_t)0x09)
/**
 * @}
 */

/**
 * @}
 */

/** @addtogroup BFLOG_DIRECT_MARCO
 * @{
 */

/** @addtogroup BFLOG_DIRECT_STATUS
 * @{
 */
#define BFLOG_DIRECT_STATUS_ILLEGAL ((uint8_t)0x00)
#define BFLOG_DIRECT_STATUS_READY   ((uint8_t)0x01)
#define BFLOG_DIRECT_STATUS_RUNNING ((uint8_t)0x02)
#define BFLOG_DIRECT_STATUS_SUSPEND ((uint8_t)0x03)
#define BFLOG_DIRECT_STATUS_INIT    ((uint8_t)0x04)
#define BFLOG_DIRECT_STATUS_IOERR   ((uint8_t)0x05)
/**
 * @}
 */

/** @addtogroup BFLOG_DIRECT_COMMAND
 * @{
 */
#define BFLOG_DIRECT_CMD_ILLEGAL ((uint32_t)0x00)
#define BFLOG_DIRECT_CMD_LEVEL   ((uint32_t)0x02)
#define BFLOG_DIRECT_CMD_COLOR   ((uint32_t)0x0A)
/**
 * @}
 */

/** @addtogroup BFLOG_DIRECT_TYPE
 * @{
 */
#define BFLOG_DIRECT_TYPE_ILLEGAL   ((uint8_t)0x00)
#define BFLOG_DIRECT_TYPE_BUFFER    ((uint8_t)0x01)
#define BFLOG_DIRECT_TYPE_STREAM    ((uint8_t)0x02)
#define BFLOG_DIRECT_TYPE_FILE      ((uint8_t)0x03)
#define BFLOG_DIRECT_TYPE_FILE_TIME ((uint8_t)0x04)
#define BFLOG_DIRECT_TYPE_FILE_SIZE ((uint8_t)0x05)
/**
 * @}
 */

/** @addtogroup BFLOG_DIRECT_COLOR
 * @{
 */
#define BFLOG_DIRECT_COLOR_DISABLE ((uint8_t)0)
#define BFLOG_DIRECT_COLOR_ENABLE  ((uint8_t)1)
/**
 * @}
 */

/**
 * @}
 */

/** @addtogroup BFLOG_LAYOUT_MARCO
 * @{
 */

/** @addtogroup BFLOG_LAYOUT_STATUS
 * @{
 */
#define BFLOG_LAYOUT_STATUS_ILLEGAL ((uint8_t)0x00)
#define BFLOG_LAYOUT_STATUS_READY   ((uint8_t)0x01)
#define BFLOG_LAYOUT_STATUS_INIT    ((uint8_t)0x04)
/**
 * @}
 */

/** @addtogroup BFLOG_LAYOUT_TYPE
 * @{
 */
#define BFLOG_LAYOUT_TYPE_SIMPLE ((uint8_t)0)
#define BFLOG_LAYOUT_TYPE_FORMAT ((uint8_t)1)
#define BFLOG_LAYOUT_TYPE_YAML   ((uint8_t)2)
/**
 * @}
 */

/**
 * @}
 */

/** @addtogroup BFLOG_STRUCT_TIMESTAMP
 * @{
 */

typedef struct
{
    uint8_t sec;
    uint8_t min;
    uint8_t hour;
    uint8_t mday;
    uint8_t mon;
    uint16_t year;
    uint8_t wday;
} bflog_tm_t;

/**
 * @}
 */

/** @addtogroup BFLOG_STRUCT
 * @{
 */

/**
 *   @brief         dual list
 */
struct _bflog_list {
    struct _bflog_list *next;
    struct _bflog_list *prev;
};

/**
 *   @brief         message
 */
struct _bflog_msg {
    union {
        uint32_t head; /*!< first 4byte */
        struct
        {
            uint16_t size; /*!< msg total size */
            uint8_t level; /*!< msg level */
            uint8_t zero;  /*!< always zero */
        };
    };

    uint32_t time; /*!< rtc timestamp */
    union {
        uint64_t clk; /*!< cpu clock tick */
        struct
        {
            uint32_t clkl; /*!< low 4byte */
            uint32_t clkh; /*!< high 4byte */
        };
    };

    uint32_t line;      /*!< msg line */
    const char *func;   /*!< msg function, must be static string, only record pointer */
    const char *file;   /*!< msg file,     must be static string, only record pointer */
    const char *tag;    /*!< msg tag,      must be static string, only record pointer */
    const char *thread; /*!< msg thread,   must be static string, only record pointer */
    char string[0];     /*!< msg string */
};

/**
 *   @brief         recorder base type
 */
typedef struct
{
    struct _bflog_list direct; /*!< dlist */
    void (*enter_critical)(void);
    void (*exit_critical)(void);
    void (*flush_notice)(void);

    uint8_t status;
    uint8_t flags;
    uint8_t level;
    uint8_t mode;

    struct
    {
        uint16_t free;
        uint16_t size;
        uint16_t wpos;
        uint16_t rpos;
        void *pool;
    } queue;
} bflog_t;

#define _BFLOG_STRUCT_LAYOUT_EXTENDS \
    uint8_t status;                  \
    uint8_t _rsvd0;                  \
    uint8_t _rsvd1;                  \
    uint8_t type;

/**
 *   @brief         layout base type
 */
typedef struct
{
    _BFLOG_STRUCT_LAYOUT_EXTENDS
} bflog_layout_t;

/**
 *   @brief         layout simple type
 */
typedef struct
{
    _BFLOG_STRUCT_LAYOUT_EXTENDS
} bflog_layout_simple_t;

/**
 *   @brief         layout format type
 */
typedef struct
{
    _BFLOG_STRUCT_LAYOUT_EXTENDS
    int (*snprintf)(void *ptr, uint16_t size, char *color, char *level, bflog_tm_t *tm, struct _bflog_msg *msg);
} bflog_layout_format_t;

/**
 *   @brief         layout yaml type
 */
typedef struct
{
    _BFLOG_STRUCT_LAYOUT_EXTENDS
} bflog_layout_yaml_t;

#define _BFLOG_STRUCT_DIRECT_EXTENDS                                       \
    struct _bflog_list list;                                               \
    void (*write)(struct bflog_direct * direct, void *ptr, uint16_t size); \
    bflog_layout_t *layout;                                                \
    uint8_t status;                                                        \
    uint8_t color;                                                         \
    uint8_t level;                                                         \
    uint8_t type

/**
 *   @brief         direct base type
 */
typedef struct bflog_direct {
    _BFLOG_STRUCT_DIRECT_EXTENDS;
} bflog_direct_t;

/**
 *   @brief         direct buffer type
 */
typedef struct
{
    _BFLOG_STRUCT_DIRECT_EXTENDS;
} bflog_direct_buffer_t;

/**
 *   @brief         direct stream type
 */
typedef struct
{
    _BFLOG_STRUCT_DIRECT_EXTENDS;
    uint16_t (*stream_output)(void *, uint16_t);
} bflog_direct_stream_t;

/**
 *   @brief         direct file type
 */
typedef struct
{
    _BFLOG_STRUCT_DIRECT_EXTENDS;
    void (*lock)(void);
    void (*unlock)(void);
    void *fp;
    const char *path;
} bflog_direct_file_t;

/**
 *   @brief         direct file time division type
 */
typedef struct
{
    _BFLOG_STRUCT_DIRECT_EXTENDS;
    void (*lock)(void);   /*!< lock */
    void (*unlock)(void); /*!< unlock */
    void *fp;             /*!< file pointer now */
    const char *path;     /*!< file path */
    uint32_t interval;
    uint32_t keep;
    uint32_t timestamp;
} bflog_direct_file_time_t;

/**
 *   @brief         direct file size division type
 */
typedef struct
{
    _BFLOG_STRUCT_DIRECT_EXTENDS;
    void (*lock)(void);
    void (*unlock)(void);
    void *fp;
    const char *path;
    uint32_t size;
    uint32_t keep;
} bflog_direct_file_size_t;

/**
 * @}
 */

extern uint64_t bflog_clock(void);
extern uint32_t bflog_time(void);
extern char *bflog_thread(void);

extern int bflog_create(bflog_t *log, void *pool, uint16_t size, uint8_t mode);
extern int bflog_delete_s(bflog_t *log);
extern int bflog_append_s(bflog_t *log, bflog_direct_t *direct);
extern int bflog_remove_s(bflog_t *log, bflog_direct_t *direct);
extern int bflog_suspend_s(bflog_t *log);
extern int bflog_resume_s(bflog_t *log);
extern int bflog_control_s(bflog_t *log, uint32_t command, uint32_t param);
extern void bflog_s(bflog_t *log, uint8_t level, const char *const tag, const char *const file, const char *const func, const long line, const char *format, ...);
extern void bflog_flush_s(bflog_t *log);

extern int bflog_direct_create(bflog_direct_t *direct, uint8_t type, uint8_t color);
extern int bflog_direct_delete(bflog_direct_t *direct);
extern int bflog_direct_suspend_s(bflog_direct_t *direct);
extern int bflog_direct_resume_s(bflog_direct_t *direct);
extern int bflog_direct_link(bflog_direct_t *direct, bflog_layout_t *layout);
extern int bflog_direct_control(bflog_direct_t *direct, uint32_t command, uint32_t param);

extern int bflog_direct_init_buffer(bflog_direct_t *direct, void *buffer, void *size);
extern int bflog_direct_deinit_buffer(bflog_direct_t *direct);

extern int bflog_direct_init_stream(bflog_direct_t *direct, uint16_t (*stream_output)(void *, uint16_t));
extern int bflog_direct_deinit_stream(bflog_direct_t *direct);

extern int bflog_direct_init_file(bflog_direct_t *direct, const char *path, void (*lock)(void), void (*unlock)(void));
extern int bflog_direct_deinit_file(bflog_direct_t *direct);

extern int bflog_direct_init_file_size(bflog_direct_t *direct, const char *path, uint32_t size, uint32_t keep, void (*lock)(void), void (*unlock)(void));
extern int bflog_direct_deinit_file_size(bflog_direct_t *direct);

extern int bflog_direct_init_file_time(bflog_direct_t *direct, const char *path, uint32_t interval, uint32_t keep, void (*lock)(void), void (*unlock)(void));
extern int bflog_direct_deinit_file_time(bflog_direct_t *direct);

extern int bflog_layout_create(bflog_layout_t *layout, uint8_t type);
extern int bflog_layout_delete(bflog_layout_t *layout);
extern int bflog_layout_format(bflog_layout_t *layout, int (*u_snprintf)(void *ptr, uint16_t size, char *color, char *level, bflog_tm_t *tm, struct _bflog_msg *msg));

#ifdef BFLOG_TIMESTAMP_ENABLE
extern void bflog_unix2time(uint32_t timestamp, bflog_tm_t *time);
#endif

#ifdef BFLOG_ENABLE

#ifndef BFLOG_LEVEL_ENABLE
#define BFLOG_LEVEL_ENABLE BFLOG_LEVEL_INFO
#endif

#ifndef __BFLOG_FILENAME__
#ifndef BFLOG_FILENAME_ENABLE
#define __BFLOG_FILENAME__ ""
#else
#ifndef BFLOG_SHORT_FILENAME
#define __BFLOG_FILENAME__ __FILE__
#else
#define __BFLOG_FILENAME__ (strrchr(__FILE__, '/') + 1)
#endif
#endif
#endif

#ifndef BFLOG_FUNCTION_ENABLE
#define __BFLOG_FUNCTION__ ""
#else
#define __BFLOG_FUNCTION__ __FUNCTION__
#endif

#ifndef BFLOG_LINE_ENABLE
#define __BFLOG_LINE__ 0
#else
#define __BFLOG_LINE__ __LINE__
#endif

#if (BFLOG_LEVEL_ENABLE >= BFLOG_LEVEL_FATAL)
#define BFLOG_F(_log, _tag, ...) bflog_s((void *)(_log), BFLOG_LEVEL_FATAL, (_tag), __BFLOG_FILENAME__, __BFLOG_FUNCTION__, __BFLOG_LINE__, __VA_ARGS__)
#else
#define BFLOG_F(_log, _tag, ...) (void)(_log), (void)(_tag), (void)(__VA_ARGS__)
#endif

#if (BFLOG_LEVEL_ENABLE >= BFLOG_LEVEL_ERROR)
#define BFLOG_E(_log, _tag, ...) bflog_s((void *)(_log), BFLOG_LEVEL_ERROR, (_tag), __BFLOG_FILENAME__, __BFLOG_FUNCTION__, __BFLOG_LINE__, __VA_ARGS__)
#else
#define BFLOG_E(_log, _tag, ...) (void)(_log), (void)(_tag), (void)(__VA_ARGS__)
#endif

#if (BFLOG_LEVEL_ENABLE >= BFLOG_LEVEL_WARN)
#define BFLOG_W(_log, _tag, ...) bflog_s((void *)(_log), BFLOG_LEVEL_WARN, (_tag), __BFLOG_FILENAME__, __BFLOG_FUNCTION__, __BFLOG_LINE__, __VA_ARGS__)
#else
#define BFLOG_W(_log, _tag, ...) (void)(_log), (void)(_tag), (void)(__VA_ARGS__)
#endif

#if (BFLOG_LEVEL_ENABLE >= BFLOG_LEVEL_INFO)
#define BFLOG_I(_log, _tag, ...) bflog_s((void *)(_log), BFLOG_LEVEL_INFO, (_tag), __BFLOG_FILENAME__, __BFLOG_FUNCTION__, __BFLOG_LINE__, __VA_ARGS__)
#else
#define BFLOG_I(_log, _tag, ...) (void)(_log), (void)(_tag), (void)(__VA_ARGS__)
#endif

#if (BFLOG_LEVEL_ENABLE >= BFLOG_LEVEL_DEBUG)
#define BFLOG_D(_log, _tag, ...) bflog_s((void *)(_log), BFLOG_LEVEL_DEBUG, (_tag), __BFLOG_FILENAME__, __BFLOG_FUNCTION__, __BFLOG_LINE__, __VA_ARGS__)
#else
#define BFLOG_D(_log, _tag, ...) (void)(_log), (void)(_tag), (void)(__VA_ARGS__)
#endif

#if (BFLOG_LEVEL_ENABLE >= BFLOG_LEVEL_TRACE)
#define BFLOG_T(_log, _tag, ...) bflog_s((void *)(_log), BFLOG_LEVEL_TRACE, (_tag), __BFLOG_FILENAME__, __BFLOG_FUNCTION__, __BFLOG_LINE__, __VA_ARGS__)
#else
#define BFLOG_T(_log, _tag, ...) (void)(_log), (void)(_tag), (void)(__VA_ARGS__)
#endif

#else

#define BFLOG_F(_log, _tag, ...) (void)(_log), (void)(_tag), (void)(__VA_ARGS__)
#define BFLOG_E(_log, _tag, ...) (void)(_log), (void)(_tag), (void)(__VA_ARGS__)
#define BFLOG_W(_log, _tag, ...) (void)(_log), (void)(_tag), (void)(__VA_ARGS__)
#define BFLOG_I(_log, _tag, ...) (void)(_log), (void)(_tag), (void)(__VA_ARGS__)
#define BFLOG_D(_log, _tag, ...) (void)(_log), (void)(_tag), (void)(__VA_ARGS__)
#define BFLOG_T(_log, _tag, ...) (void)(_log), (void)(_tag), (void)(__VA_ARGS__)

#endif

#endif
