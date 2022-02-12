![example workflow](https://github.com/sympiler/nasoq/actions/workflows/cmakeUbuntu.yml/badge.svg)
![example workflow](https://github.com/sympiler/nasoq/actions/workflows/cmakeMac.yml/badge.svg)

# NASOQ: Numerically Accurate Sparsity Oriented QP Solver

NASOQ is a scalable and efficient Quadratic Programming solver that
obtains solutions for requested accuracies.
LBL is a parallel multi-threaded sparse indefinite linear solver.

## Quick Guide for Impatient Users

```
mkdir build
cd build
cmake -DNASOQ_BLAS_BACKEND=OpenBLAS -DNASOQ_USE_CLAPACK=ON -DCMAKE_BUILD_TYPE=Release ..
make 
```

# Table of Contents:

* [Building NASOQ](https://nasoq.github.io/docs/getting-started-nasoq/)
* [What is NASOQ QP Solver's Algorithm?](https://nasoq.github.io/docs/solver/)
  * [What are NASOQ variants?](https://nasoq.github.io/docs/solver/#variants)
* [What is LBL/SoMod Linear Solver?](https://nasoq.github.io/docs/linear-solver/)
* [Using NASOQ/LBL in C++](https://nasoq.github.io/docs/getting-started-nasoq/#c-api-examples)
* [NASOQ Eigen Interface](https://nasoq.github.io/docs/interfaces/#eigen-interface)
* [NASOQ Matlab Interface](https://nasoq.github.io/docs/interfaces/#matlab-interface)
* [Sparse Mathematical Programming Repository](https://nasoq.github.io/docs/repository/)
* [Sparse Mathematical Programming Format](https://github.com/sympiler/smp-format)
* [NASOQ Benchmark](https://github.com/sympiler/nasoq-benchmarks)
* [Publications](https://nasoq.github.io/#publications)
* [Citation](https://nasoq.github.io/docs/#citing-us)
* [NASOQ Homepage](https://nasoq.github.io/)
* [NASOQ Documentation](https://nasoq.github.io/docs/)
* [GitHub](https://github.com/sympiler/nasoq/)
* [Twitter](https://twitter.com/sympiler)

Copyright 2022 Kazem Cheshmi
