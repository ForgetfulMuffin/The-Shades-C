struct _player {
  str name;
  int[2] position;
  int maxHp, hp, power, xp, time, visited;
  item[] inventory, equip};

typedef struct _player player;