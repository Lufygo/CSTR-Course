#include <stdio.h>
#include <stdlib.h>

#include "extern.h"

void Extern__deadline_miss_log_step(int date, int task_id, Extern__deadline_miss_log_out* _out)
{
	printf("Deadline miss log, date:(%d), task_id(%d)\n", date, task_id) ;
}

void Extern__random_step(int max, Extern__random_out* _out)
{
	_out->v = (random() % max) + 1;
}

static char* status_str[] = {
	[Scheduler_data__Running] = "running",
	[Scheduler_data__Ready] = "ready",
	[Scheduler_data__Waiting] = "waiting"
};

void Extern__print_scheduler_state_step(Scheduler_data__scheduler_state s, Extern__print_scheduler_state_out* _out)
{
	printf("Current date: %d\nTask_1: status is %s, deadline %d, left %d\nTask_2: status is %s, deadline %d, left %d\n",
		s.current_date,
		status_str[s.tasks[0].status],
		s.tasks[0].current_deadline,
		s.tasks[0].left,
		status_str[s.tasks[1].status],
		s.tasks[1].current_deadline,
		s.tasks[1].left);
}
