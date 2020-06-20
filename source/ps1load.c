#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *ptr_loadavg;
  double load1, load5, load15;
  int workload, process;

  ptr_loadavg = fopen("/proc/loadavg", "r");
  if (!ptr_loadavg)
    return 1;

  rewind(ptr_loadavg);
  fscanf(ptr_loadavg, "%lf %lf %lf %i %i", &load1, &load5, &load15, &process, &workload);

  char *icon = "", *cor = "";

  if (load1 < 1) {
    // Green
    cor = "\033[0;92m";
  } else if (load1 >= 1 && load1 < 2) {
    // Yellow
    cor = "\033[0;93m";
  } else {
    // Red
    cor = "\033[0;91m";
  }

  if (load1 > load5) {
    icon = "\033[0;91m↑";
  } else if (load1 < load5) {
    icon = "\033[0;92m↓";
  } else {
    icon = "\033[0;93m•";
  }

  printf("%s%.2lf%s", cor, load1, icon);

  fclose(ptr_loadavg);
  return 0;
}
