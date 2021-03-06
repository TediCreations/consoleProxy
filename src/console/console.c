﻿/******************************************************************************
	Code
******************************************************************************/

/******************************************************************************
	Include files
******************************************************************************/

#include "console.h"

#include <stdio.h>

/******************************************************************************
	Local function declarations
******************************************************************************/

/**
 * \brief Waits until it reads a string from the console.
 *  
 * \param[in]	me		The console.
 * 
 * \return The string.
 */
static char* getString( console_t* me )
{
	scanf( "%s", me->str );
	return me->str;
}

/**
 * \brief Writes a string to the console
 *  
 * \param[in]	s		The string
 */
static void putString( const char* s )
{
	printf( s );
}

/**
 * \brief Writes an integer number to the console.
 *  
 * \param[in]	num		The number.
 */
static void putNum( const int num )
{
	printf( "%i", num );
}

/**
 * \brief Initializes the console.
 *  
 * \param[in]	obj		The console object.
 */
static void console_init( console_t* obj )
{
	obj->gets = getString;
	obj->puts = putString;
	obj->putNum = putNum;
}

/******************************************************************************
	Function definitions
******************************************************************************/

/**
 * \brief Builds the console and provides a handler.
 *  
 * \return	The console object.
 */
console_t console_build( void )
{
	console_t aux;
	console_init( &aux );
	return aux;
}