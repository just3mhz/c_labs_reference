#include <stdio.h>
#include <math.h>


// Без typedef придется постоянно писать 'struct point2d' буквально везде
// В примерах ниже это будет видно
struct point2d {
    double x, y;
};

// typedef создаст алиас на 'struct point3d' с именем 'point3d_t'
// Таким образом, можно будет писать point3d_t в местах использования
typedef struct point3d {
    double x, y, z;
} point3d_t;

double distance_2d(struct point2d lhs, struct point2d rhs) {
    return sqrt((lhs.x - rhs.x) * (lhs.x - rhs.x) + (lhs.y - rhs.y) * (lhs.y - rhs.y));
}

double distance_3d(point3d_t lhs, point3d_t rhs) {
    return sqrt(
        (lhs.x - rhs.x) * (lhs.x - rhs.x) +
        (lhs.y - rhs.y) * (lhs.y - rhs.y) +
        (lhs.z - rhs.z) * (lhs.z - rhs.z));
}

struct point2d sum_2d(struct point2d lhs, struct point2d  rhs) {
    struct point2d result;
    result.x = lhs.x + rhs.x;
    result.y = lhs.y + rhs.y;
    return result;
}

point3d_t sum_3d(point3d_t lhs, point3d_t rhs) {
    point3d_t result;
    result.x = lhs.x + rhs.x;
    result.y = lhs.y + rhs.y;
    result.z = lhs.z + rhs.z;
    return result;
}

int main() {
    struct point2d p1;
    struct point2d p2;
    scanf("%lf%lf", &p1.x, &p1.y);
    scanf("%lf%lf", &p2.x, &p2.y);
    double distance1 = distance_2d(p1, p2);
    printf("dist([%lf,%lf], [%lf,%lf]) = %lf\n", p1.x, p1.y, p2.x, p2.y, distance1);
    struct point2d p3 = sum_2d(p1, p2);
    printf("[%lf,%lf] + [%lf,%lf] = [%lf, %lf]\n", p1.x, p1.y, p2.x, p2.y, p3.x, p3.y);

    point3d_t p4;
    point3d_t p5;
    scanf("%lf%lf%lf", &p4.x, &p4.y, &p4.z);
    scanf("%lf%lf%lf", &p5.x, &p5.y, &p5.z);
    double distance2 = distance_3d(p4, p5);
    printf("dist([%lf,%lf,%lf], [%lf,%lf,%lf]) = %lf\n", p4.x, p4.y, p4.z, p5.x, p5.y, p5.z, distance2);
    point3d_t p6 = sum_3d(p4, p5);
    printf("[%lf,%lf,%lf] + [%lf,%lf,%lf] = [%lf,%lf,%lf]\n", p4.x, p4.y, p4.z, p5.x, p5.y, p5.z, p6.x, p6.y, p6.z);
}
