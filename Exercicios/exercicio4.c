#include <stdio.h>

int main() {
    float sp = 67836.43, rj = 36678.66, mg = 29229.88, es = 27165.48, outros = 19849.53;
    float total = sp + rj + mg + es + outros;
    float pct_sp = (sp / total) * 100;
    float pct_rj = (rj / total) * 100;
    float pct_mg = (mg / total) * 100;
    float pct_es = (es / total) * 100;
    float pct_outros = (outros / total) * 100;

    printf("Percentual de representação de cada estado:\n");
    printf("SP: %.2f%%\n", pct_sp);
    printf("RJ: %.2f%%\n", pct_rj);
    printf("MG: %.2f%%\n", pct_mg);
    printf("ES: %.2f%%\n", pct_es);
    printf("Outros: %.2f%%\n", pct_outros);

    return 0;
}