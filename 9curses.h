/* This header is cursed.
 *
 * The functions and whatnot here are aimed at providing a layer of compatibility
 * between ncurses-like interfaces and cursedfs to avoid too much rewriting.
 */
 
//  stub
#define KEY_UP L'↑'
//  stub
#define KEY_DOWN L'↓'
// Stub
#define stdscr 0

typedef struct WINDOW WINDOW;

// Clear the screen
void clear();

// Initialize a new WINDOW
WINDOW* newwin(uint, uint, uint, uint);

// Clean up and close a WINDOW
endwin();

// Analogue to print for a string from origin y,x
int mvprintw(int y, int x, char *fmt, ...);

// Sets a character at y,x
mvaddch(int y, int x, char c);

// Get a 'raw' character input from the user
getch();

// Initialize the screen
initscr();

// Set raw mode for the screen
raw();

// Don't echo keypress characters to the screen
noecho();

// Place the cursor at location y,x
curs_set();

// Set delay until escape sequence potential is ignored
set_escdelay();

// Refresh the screen
refresh();

// Refresh a window
wrefresh(WINDOW*);

struct WINDOW{
	s8int naught;// Stub
};
