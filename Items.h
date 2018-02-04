#ifndef ITEMS_H

#define ITEMS_H

struct _item {
	str name, listName ;
	int type, modifier};

typedef struct _item item;

struct _inventory {
	struct _inventory * previous;
	struct _inventory * next;
	item data;
}

typedef struct _inventory * inventory;


#endif /* end of include guard: ITEMS_H */
