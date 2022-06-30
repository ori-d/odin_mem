/**
 * @file memory.h
 * @author おり (kok.in@yahoo.com)
 * @brief Contains the implementation of the memory allocation using mi-malloc.
 * @version 1.0.0.0
 * @date 2022-06-30
 * 
 * @copyright Copyright (c) ori-d <おり> 2022
 * 
 */
#ifndef ODIN_MEMORY_H_DEFINED
#define ODIN_MEMORY_H_DEFINED 1

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <stddef.h>

/**
 * @brief Allocate memory like @a malloc, but even faster.
 * 
 * @param[in] i_size Count of memory to allocate.
 * @return void* NULL on error, otherwise a pointer to allocated memory.
 */
void *
odin_malloc(size_t i_size);

/**
 * @brief Allocate memory like @a calloc, but even faster, set all bytes to 0.
 * 
 * @param[in] i_count Count of elements to allocate.
 * @param[in] i_item_size Size of each element.
 * @return void* NULL on error, otherwise a pointer to the allocated memory.
 */
void *
odin_calloc(size_t i_count, size_t i_item_size);

/**
 * @brief Reallocates the allocated memory like @a realloc but even faster.
 * 
 * @param[in] p_block pointer to old block of memory to be reallocated.
 * @param[in] i_new_size new size for reallocate memory.
 * @return void* NULL on error, otherwise a pointer to the allocated memory.
 */
void *
odin_realloc(void *p_block, size_t i_new_size);

/**
 * @brief Free memory allocated by @a odin_malloc,
 * @a odin_calloc, @a odin_realloc
 * 
 * @param p_block Pointer to block to be freed.
 */
void
odin_free(void *p_block);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* ODIN_MEMORY_H_DEFINED */
