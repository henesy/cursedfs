#include <u.h>
#include <libc.h>
#include "9curses.h"

// Clear the screen
int
clear()
{
	// Stub
	return 0;
}

// Initialize a new WINDOW
WINDOW*
newwin(int nlines, int ncols, int begin_y, int begin_x)
{
	// Stub
	WINDOW* w = calloc(1, sizeof(WINDOW));
	return w;
}

// Clean up and close a WINDOW
int
endwin()
{
	// Stub
	return 0;
}

// Analogue to print for a string from origin y,x
int
mvprintw(int y, int x, char *fmt, ...)
{
	// Stub
	return 0;
}

// Sets a character at y,x
int
mvaddch(int y, int x, char c)
{
	// Stub
	return 0;
}

// Get a 'raw' character input from the user
int
getch()
{
	// Stub
	return 0;
}

// Initialize the screen
WINDOW*
initscr()
{
	// Stub
	WINDOW* w = calloc(1, sizeof(WINDOW));
	return w;
}

// Set raw mode for the screen
int
raw()
{
	// Stub
	return 0;
}

// Don't echo keypress characters to the screen
int
noecho()
{
	// Stub
	return 0;
}

// Place the cursor at location y,x
int
curs_set(int visibility)
{
	// Stub
	return 0;
}

// Set delay until escape sequence potential is ignored
int
set_escdelay(int timems)
{
	// Stub
	return 0;
}

// Refresh the screen
int
refresh()
{
	// Stub
	return 0;
}

// Refresh a window
int
wrefresh(WINDOW* w)
{
	// Stub
	return 0;
}
