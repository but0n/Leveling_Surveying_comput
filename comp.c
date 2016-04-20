#include <stdio.h>
#define LENGTH 5
#define ROUND(num) (int)((num>0)?(num)+0.5:(num)-0.5)
typedef struct {
    float L;
    float h;
    double p;
    float Q;
    float P;
    double R;
}bm_Type_Def;
void sysLog(bm_Type_Def *a) {
    for (int i = 0; i < LENGTH; i++) {
        printf("=_=_=_=_=_=_=_=_=_= BM%i =_=_=_=_=_=_=_=_=_=\n", i);
        printf("Length\t%i:\t%f\n", i, a[i].L);
        printf("Height\t%i:\t%f\n", i, a[i].h);
        printf("Position%i:\t%lf\n", i, a[i].p);
        printf("Q\t%i:\t%f\n", i, a[i].Q);
        printf("P\t%i:\t%f\n", i, a[i].P);
        printf("R\t%i:\t%lf\n", i, a[i].R);
    }
}
void GetData(bm_Type_Def *a) {
    for (int i = 0; i < LENGTH; i++) {
        printf("****************BM%i****************\n", i);
        printf("Enter Length_%i\t:", i);
        scanf("%f", &a[i].L);
        printf("Enter Height_%i\t:", i);
        scanf("%f", &a[i].h);
        printf("Enter Position_%i:", i);
        scanf("%lf", &a[i].p);
    }
}
void Computed(bm_Type_Def *a) {
    float sum_h = 0, sum_L = 0;
    for (int i = 0; i < LENGTH; i++) {
        sum_L += a[i].L;
        sum_h += a[i].h;
    }
    float e_l = a[LENGTH-1].p -  a[0].p;
    float f_h = sum_h - e_l;
    float n = -f_h*1000/sum_L;
    for (int i = 0; i < LENGTH; i++) {
        a[i].Q = ROUND(a[i].L * n);
        a[i].P = a[i].h + a[i].Q/1000;
        if(i>0) {
            if(i==1) a[i].R = a[i].P + a[i-1].p;
            else a[i].R = a[i-1].R + a[i].P;
        }
    }
}
int main() {
    bm_Type_Def bm[LENGTH-1] = {{0,0,0,0,0,0}};
    GetData(bm);
    Computed(bm);
    sysLog(bm);
    return 0;
}
