#include "domain_review.h"
#include <assert.h>
#include <string.h>

int main(void) {
    DomainReview item = {70, 36, 26, 90};
    assert(domain_review_score(item) == 188);
    assert(strcmp(domain_review_lane(item), "ship") == 0);
    return 0;
}
