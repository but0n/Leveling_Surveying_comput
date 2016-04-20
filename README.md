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

##OOP
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

##软件授权条款

>The MIT License (MIT)

>Copyright (c) 2016 but0n

>Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

>The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

>THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

