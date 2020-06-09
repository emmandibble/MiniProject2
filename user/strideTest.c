#include "types.h"
#include "stat.h"
#include "user.h"
#include "pstat.h"

int
main (int arc, char* argv[]) {
	int i, j;
	struct pstat info;

	getpinfo(&info);

	//before setting tickets
	for (i = 0; i < 64; i++) {
		if (info.inuse[i] == 1) {
			printf(1, " pid: %d   Ticks: %d   Number of Tickets: %d\n -------------------\n", info.pid[i], info.ticks[i], info.tickets[i]);
		}
	}

	for (j = 1; j < 6; j++) {
		settickets(j * 10);
		getpinfo(&info);

		//after setting tickets
	        for (i = 0; i < 64; i++) {
        	        if (info.inuse[i] == 1) {
                	        printf(1, " pid: %d   Ticks: %d   Number of Tickets: %d\n -------------------\n", info.pid[i], info.ticks[i], info.tickets[i]);
                	}
        	}
	}
	exit();
}

