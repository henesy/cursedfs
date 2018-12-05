/* This header is cursed.
 *
 * The functions and whatnot here are aimed at providing a layer of compatibility
 * between ncurses-like interfaces and cursedfs to avoid too much rewriting.
 */
#pragma lib "lib9curses.a"
 
//  stub
#define KEY_UP L'↑'
//  stub
#define KEY_DOWN L'↓'
// Stub
#define stdscr 0

typedef struct WINDOW WINDOW;

// Clear the screen
int clear();

// Initialize a new WINDOW
WINDOW* newwin(int, int, int, int);

// Clean up and close a WINDOW
int endwin();

// Analogue to print for a string from origin y,x
int mvprintw(int y, int x, char *fmt, ...);

// Sets a character at y,x
int mvaddch(int y, int x, char c);

// Get a 'raw' character input from the user
int getch();

// Initialize the screen
WINDOW* initscr();

// Set raw mode for the screen
int raw();

// Don't echo keypress characters to the screen
int noecho();

// Place the cursor at location y,x
int curs_set(int);

// Set delay until escape sequence potential is ignored
int set_escdelay(int timems);

// Refresh the screen
int refresh();

// Refresh a window
int wrefresh(WINDOW*);

struct WINDOW{
	s8int naught;// Stub
};
