# Leveling Surveying comput
水准测量数据计算程序，Python &amp; C 两个版本

## Example

Spot | Length /`km` | dHeight /`m` | Position /`m` | Q /`mm` | P /`m` | R /`m`
-----|--------------|--------------|---------------|---------|--------|-------
BM0  | 0            | 0            | 40.877        | 0       | 0      | 0
BM1  | 2.0          | 1.467        | 0             | -2      | +1.465 | 42.342
BM2  | 3.2          | -2.478       | 0             | -4      | -2.482 | 39.860
BM3  | 5.3          | 3.492        | 0             | -6      | +3.486 | 43.346
BM4  | 8.9          | -1.456       | 41.879        | -11     | -1.467 | 41.879

```C
#define LENGTH 5
```
可以修改已知点的数目 

***
### Input:
* Length
* delta Height
* Position( BM0 & BM4)

### Output:
* Q `改正数`
* P `改正后高差`
* R `改正后高程`

##OPP
```C
typedef struct {
    float L;
    float h;
    double p;
    float Q;
    float P;
    double R;
}bm_Type_Def;
```


```C
bm_Type_Def bm[LENGTH-1] = {{0,0,0,0,0,0}};
```

