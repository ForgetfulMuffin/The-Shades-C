#ifndef LABGEN
#define LABGEN 1

struct _coord {
	int x,y;
};

typedef struct _coord coord;

struct _area {
	char north, south, east, west;
};

typedef struct _area area;

typedef area * map;

void generate(const int);
void createEmpty(const int);
void createMaze(coord*, int *, coord *, int *, const int);
void printMap(const int);
void printPlayerPosition();
// Checks
int isWallWest();
int isWallEast();
int isWallNorth();
int isWallSouth();
#endif
