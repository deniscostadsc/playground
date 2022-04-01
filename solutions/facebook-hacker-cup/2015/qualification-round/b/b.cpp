#include <cstdint>
#include <cstdio>
#include <vector>

std::int32_t gp, gc, gf;
std::vector< std::vector< std::int32_t > > foods;

bool still_valid(std::int32_t p, std::int32_t c, std::int32_t f) {
    return p <= gp && c <= gc && f <= gf;
}

bool is_ok(std::int32_t p, std::int32_t c, std::int32_t f) {
    return p == gp && c == gc && f == gf;
}

bool backtrack(
    std::int32_t p,
    std::int32_t c,
    std::int32_t f,
    std::vector< std::int32_t > used_food) {
    bool ok = false;
    std::int32_t next;

    if (!still_valid(p, c, f)) {
        return false;
    }
    if (is_ok(p, c, f)) {
        return true;
    }

    if (static_cast< std::int32_t >(used_food.size()) == 0) {
        next = 0;
    } else {
        next = used_food[used_food.size() - 1] + 1;
    }

    while (next < static_cast< std::int32_t >(foods.size())) {
        std::vector< std::int32_t > copy_used_food(used_food);
        copy_used_food.insert(copy_used_food.end(), next);
        ok = backtrack(
                 p + foods[next][0],
                 c + foods[next][1],
                 f + foods[next][2],
                 copy_used_food)
            || ok;
        next++;
    }

    return ok;
}

bool can_eat_something() {
    std::vector< std::int32_t > e;
    return backtrack(0, 0, 0, e);
}

int main() {
    std::int32_t t, n, p, c, f, i = 1;

    scanf("%d", &t);
    while (i <= t) {
        scanf("%d %d %d ", &gp, &gc, &gf);
        scanf("%d", &n);

        while (n--) {
            std::vector< std::int32_t > food;

            scanf("%d %d %d ", &p, &c, &f);

            food.insert(food.end(), p);
            food.insert(food.end(), c);
            food.insert(food.end(), f);
            foods.insert(foods.end(), food);
        }

        printf("Case #%d: ", i);
        if (can_eat_something()) {
            puts("yes");
        } else {
            puts("no");
        }

        foods.clear();

        i++;
    }

    return 0;
}
