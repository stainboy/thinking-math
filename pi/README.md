# 使用勾股定理求PI近似值

计算1/4个圆的周长，在(1,0)到(0,1)之间求10亿(1 billion)个点，计算俩俩之间的距离并求和，然后乘以4除以2即得出PI的近似值。

![https://lucid.app/lucidchart/99dfcf0b-dbde-4e7c-b9ad-ea856dbfe7f4/edit?beaconFlowId=70DD20C59A150DBD&page=0_0#](./pi.png)

```
$ gcc main.c -lm && time ./a.out 
calc_pi=3.1415926515897837, real_pi=3.1415926535897931, margin of error is -0.0000000020000095

real    1m15.660s
user    1m15.649s
sys     0m0.004s
```
