//
// Created by kazem on 11/29/18.
//

#ifndef PROJECT_BLASKERNELS_H
#define PROJECT_BLASKERNELS_H

#include <cstdint>
#include <vector>
#include <cstdlib>
#include "common/Reach.h"

namespace nasoq {
#  define VEC_SCAL(n, a, x, u){               \
    int i; double *pt,*p=(x);                    \
    for((pt)=(p+n);(p)<(pt);)                   \
      *((p)++)*= (a);                           \
  }

 void
 sym_sytrf(double *A, int n, const int stride, int *nbpivot,
           double critere);

 double dot(int n, double *a, double *b);


/*
 * swaps a and b
 */
 void swap_vector(int n, double *a, double *b, int lda);

 void swap_int(int &a, int &b);

/*
 * Performs reverse ordering after sytrf
 * assume cur has full lower triangular.
 */
 int reorder_after_sytrf(int n, double *a, int lda, int *ipiv,
                         int *perm, double *D, int lda_D,
                         int *swap_vec, int *ws);

/*
 * Shoft rows up/down in a block of CSC, used in the next func
 */
 void shift(int n_col, int n_row, double *a, int lda, const int inc);

/*
 * This function re-order the part of L facing to diagonal
 * according to given ordering and swap array.
 */
 void swapping_row_in_blockedL_new(int supWdt, int supNo, const size_t *lC, const size_t *Li_ptr, int *lR,
                                   const int curCol, const int *blockSet, double *lValues,
                                   int top, int *xi, int *lbs, int *ubs,
                                   int *cur_perm, int *cur_swap);


/*
 * Row reordering in blocked L matrix
 */
 void row_reordering(int supNo, const size_t *lC, const size_t *Li_ptr, int *lR,
                     const int *blockSet, int *aTree, int *cT, int *rT, int *col2Sup, double *lValues,
                     std::vector<int> swap_req, int *full_swap, int *xi, int *map, int *ws, double *wsf);

/*
 * The input is blocked diagonal matrix, the max block size is 2x2
 * Suitable for LDLT SBK .
 * Diagonal matrix is stored in array of size 2*n
 */

 void blocked_2by2_solver(int n, double *D, double *rhs,
                          int n_rhs, int lda, int lda_d);

/*
 * The input is blocked diagonal matrix, the max block size is 2x2
 * Suitable for LDLT SBK .
 * Diagonal matrix is stored in array of size 2*n
 */

 void blocked_2by2_solver_update(int n, double *D, double *rhs,
                                 int n_rhs, int lda, int lda_d, int *mask);

/*
 * The input is blocked diagonal matrix, the max block size is 2x2
 * Suitable for LDLT SBK .
 * Diagonal matrix is stored in array of size 2*n
 * diagonal matrix is symmetric
 */

 void blocked_2by2_mult(int n, int m, double *D, double *src, double *dst,
                        int lda, int lda_d);
}
#endif //PROJECT_BLASKERNELS_H