struct _cell {
  int north, south, west, east;
  item[] items;
  monster[] monsters;
  bool visited};

typedef struct _cell Cell;

typedef Cell[] Row;

typedef Row[] Map;
