# Function

## Benchmark of MatMul

Environment: MI 5, Android 7.0, Snapdragon 820 1.8GHz

### Compiled as ARMv8 version
1. Basic

| M=N=K | OpenBlas | Eigen |
|-------|----------|-------|
| 32 | 6.70719 | 4.45729 |
| 64 | 9.79597 | 4.89417 |
| 96 | 10.9604 | 5.27758 |
| 128 | 11.8963 | 4.95659 |
| 160 | 11.2986 | 4.79584 |
| 192 | 10.5225 | 4.47483 |
| 224 | 10.2363 | 4.31682 |
| 256 | 10.6348 | 4.39863 |
| 288 | 9.50198 | 4.47937 |
| 320 | 9.24143 | 4.57092 |
| 352 | 8.86659 | 4.71199 |
| 384 | 8.9605 | 5.43376 |
| 416 | 10.0943 | 5.34109 |
| 448 | 10.2719 | 5.51678 |
| 480 | 10.2872 | 5.54472 |
| 512 | 9.65846 | 5.41936 |

2. Case1

| MxNxK | OpenBlas | Eigen |
|-------|----------|-------|
| 64x9216x32 | 5.85794 | 4.36465 |
| 128x2304x64 | 8.57098 | 4.48933 |
| 128x2304x128 | 9.66236 | 4.84633 |
| 256x576x128 | 10.1877 | 4.90295 |
| 256x576x256 | 8.86215 | 4.82417 |
| 512x144x256 | 10.5904 | 4.20891 |
| 512x144x512 | 9.20629 | 4.42752 |
| 1024x36x512 | 7.63048 | 3.7812  |
| 1024x36x1024 | 4.46603 | 3.3332  |

3. Case2

| MxNxK | OpenBlas | Eigen |
|-------|----------|-------|
| 9x128x256 | 6.28133 | 3.9853  |
| 16x64x256 | 9.20225 | 4.32385 |
| 48x64x256 | 11.0461 | 6.87027 |
| 48x96x64 | 10.4625 | 5.33526 |
| 48x104x64 | 10.4866 | 5.58464 |
| 64x96x64 | 10.7371 | 6.04827 |
| 64x104x64 | 10.7285 | 6.095   |
| 128x128x256 | 11.7494 | 5.08006 |

### Compiled as ARMv7 version
1. Basic

| M=N=K | OpenBlas | Eigen |
|-------|----------|-------|
| 32 | 3.9896 | 4.4259 |
| 64 | 4.2892 | 5.67213 |
| 96 | 4.53063 | 7.03407 |
| 128 | 5.17463 | 5.94836 |
| 160 | 5.1545 | 6.13681 |
| 192 | 5.12605 | 5.67266 |
| 224 | 5.02001 | 5.29331 |
| 256 | 5.02187 | 5.51517 |
| 288 | 4.82476 | 5.61236 |
| 320 | 4.79546 | 6.00651 |
| 352 | 4.73126 | 6.42041 |
| 384 | 4.76302 | 6.42358 |
| 416 | 4.7115 | 6.40519 |
| 448 | 4.72615 | 6.21046 |
| 480 | 4.80253 | 6.41231 |
| 512 | 4.84172 | 6.16604 |

2. Case1

| MxNxK | OpenBlas | Eigen |
|-------|----------|-------|
| 64x9216x32 | 4.72091 | 5.15202 |
| 128x2304x64 | 4.93058 | 5.69732 |
| 128x2304x128 | 4.74649 | 5.75728 |
| 256x576x128 | 4.90965 | 5.68181 |
| 256x576x256 | 4.84162 | 5.98695 |
| 512x144x256 | 4.653 | 5.21352 |
| 512x144x512 | 4.63146 | 5.60167 |
| 1024x36x512 | 4.50196 | 4.74092 |
| 1024x36x1024 | 4.27049 | 4.33763 |

3. Case2

| MxNxK | OpenBlas | Eigen |
|-------|----------|-------|
| 9x128x256 | 4.17436 | 3.18869 |
| 16x64x256 | 4.9952 | 5.76405 |
| 48x64x256 | 5.2348 | 6.18857 |
| 48x96x64 | 5.08401 | 6.69106 |
| 48x104x64 | 5.10713 | 6.09122 |
| 64x96x64 | 5.11795 | 6.39511 |
| 64x104x64 | 4.9506 | 6.15069 |
| 128x128x256 | 5.2884 | 5.78437 |
