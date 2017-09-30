#include "console/console.h"

int main( void )
{
	/* Create and ask input for console 1 */
	console_t tmp1 = console_build();
	tmp1.puts( "Give input for cmd1:\n" );
	char* input1 = tmp1.gets( &tmp1 );

	/* Create and ask input for console 2 */
	console_t tmp2 = console_build();
	tmp2.puts( "Give input for cmd2:\n" );
	char* input2 = tmp2.gets( &tmp2 );

	/* Retreive input of console 1 */
	tmp1.puts( "User tmp1: " );
	tmp1.puts( input1 );
	tmp1.puts( "\n" );

	/* Retreive input of console 2 */
	tmp2.puts( "User tmp2: " );
	tmp2.puts( input2 );
	tmp2.puts( "\n" );

/*
	console_t cmd = console_build();
	cmd.puts( "Give input:\n" );
	char* input = cmd.gets( &cmd );
	cmd.puts( "You entered: " );
	cmd.puts( input );
	cmd.puts( "\n" );
*/

	return 0;
}
