// ll_cycle.c
#include "ll_cycle.h"

bool ll_has_cycle(node *head) {
    node *slow_ptr = head;
    node *fast_ptr = head;

    while (fast_ptr != NULL && fast_ptr->next != NULL) {
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;

        if (slow_ptr == fast_ptr) {
            // Cycle detected
            return true;
        }
    }

    // Reached end of list => no cycle
    return false;
}
