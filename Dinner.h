#ifndef DINNER_H
#define DINNER_H

struct recipes *read_file_dinner();
struct recipes *allocate_struct_dinner();
int dinner_meal(int consumption);

#endif