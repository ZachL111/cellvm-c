#include "policy.h"
#include <assert.h>
#include <string.h>

int main(void) {
    Signal signal_case_1 = {60, 90, 20, 25, 9};
    assert(score_signal(signal_case_1) == 43);
    assert(strcmp(classify_signal(signal_case_1), "review") == 0);
    Signal signal_case_2 = {100, 70, 10, 8, 7};
    assert(score_signal(signal_case_2) == 214);
    assert(strcmp(classify_signal(signal_case_2), "accept") == 0);
    Signal signal_case_3 = {90, 85, 15, 20, 8};
    assert(score_signal(signal_case_3) == 136);
    assert(strcmp(classify_signal(signal_case_3), "review") == 0);
    return 0;
}
