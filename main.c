#include <stdio.h>
#include <stdlib.h>

#include "pq_struct.h"
#include "priority_queue.h"

int main()
{
    Node* pq = new_node(9, 0);
    printf("is it empty: ");
    if (is_empty(pq)){
        printf("yes\n");
    } else {
        printf("no\n");
    }
    print_list(pq);

    enque(&pq, 8, 0);
    enque(&pq, 5, 2);
    enque(&pq, 10, 1);
    enque(&pq, 7, 0);
    print_list(pq);
    printf("top: %d\n", top(&pq));
    printf("queue size: %d\n", queue_size(pq));
    printf("is it full: ");
    if (is_full(pq) == 1){
        printf("yes\n");
    } else {
        printf("no\n");
    }
    print_list(pq);

    printf("\n\n%d\n\n", deque(&pq));
    print_list(pq);
    printf("top: %d\n", top(&pq));

//    while (!is_empty(&pq)) {
//        printf("%d ", top(&pq));
//        deque(&pq);
//    }
    printf("queue size: %d\n", queue_size(pq));
    destroy_list(&pq);
    print_list(pq);

    return 0;
}
