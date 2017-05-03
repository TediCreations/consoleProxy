#include "console.h"

int main()
{
	console_t serial = console_build();
	
	serial.puts( "Enter a string: " );
	const char* s = serial.gets();
	serial.puts( "You entered: " );
	serial.puts( s );
	serial.puts( "\n" );
	
	serial.puts( "Devil = " );
	serial.putNum( 666 );
	serial.puts( "\n" );
	
	return(0);
}