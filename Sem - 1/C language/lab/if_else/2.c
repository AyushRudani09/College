#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, i, j;
    printf("enter ten mumbers : ");
    scanf("%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &g, &h, &i, &j);
    if ((a > b) && (a > c) && (a > d) && (a > e) && (a > f) && (a > g) && (a > h) && (a > i) && (a > j))
    {
        printf("max num %d", a);
    }
    else
    {
        if ((b > c) && (b > d) && (b > e) && (b > f) && (b > g) && (b > h) && (b > i) && (b > j))
        {
            printf("max num %d", b);
        }
        else
        {
            if((c>d)&&(c>e)&&(c>f)&&(c>g)&&(c>h)&&(c>i)&&(c>j))
            {
                printf("max number %d", c);
            }
            else
            {
                if((d > e) && (d > f) && (d > g) && (d > h) && (d > i) && (d > j))
                {
                    printf("max number %d", d);
                }
                else
                {
                    if ((e>f)&&(e>g)&&(e>h)&&(e>i)&&(e>j))
                    {
                        printf("max number %d",e);
                    }
                    else{
                        if((f>g)&&(f>h)&&(f>i)&&(f>j))
                        {
                            printf("max number %d",f);
                        }
                        else{
                            if ((g>h)&&(g>i)&&(g>j))
                            {
                                printf("max number %d",g);
                            }
                            else{
                                if((h>i)&&(h>j)){
                                    printf("max number %d",h);
                                }
                                else{
                                    if(i>j){
                                        printf("max number %d",i);
                                    }
                                    else{
                                        printf("max number %d",j);
                                    }
                                }
                            } 
                        }
                    }
                }
            }
        }
    }
}

// string multipale char
// a[i]; array
// #include <stdio.h>
// int main()
// {
//     int a, b, c, d, e, f, g, h, i, j;
//     printf("enter ten mumbers : ");
//     scanf("%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &g, &h, &i, &j);
//     if ((a < b) && (a < c) && (a < d) && (a < e) && (a < f) && (a < g) && (a < h) && (a < i) && (a < j))
//     {
//         printf("min num %d", a);
//     }
//     else
//     {
//         if ((b < c) && (b < d) && (b < e) && (b < f) && (b < g) && (b < h) && (b < i) && (b < j))
//         {
//             printf("min num %d", b);
//         }
//         else
//         {
//             if((c<d)&&(c<e)&&(c<f)&&(c<g)&&(c<h)&&(c<i)&&(c<j))
//             {
//                 printf("min number %d", c);
//             }
//             else
//             {
//                 if((d < e) && (d < f) && (d < g) && (d < h) && (d < i) && (d < j))
//                 {
//                     printf("min number %d", d);
//                 }
//                 else
//                 {
//                     if ((e<f)&&(e<g)&&(e<h)&&(e<i)&&(e<j))
//                     {
//                         printf("min number %d",e);
//                     }
//                     else{
//                         if((f<g)&&(f<h)&&(f<i)&&(f<j))
//                         {
//                             printf("min number %d",f);
//                         }
//                         else{
//                             if ((g<h)&&(g<i)&&(g<j))
//                             {
//                                 printf("min number %d",g);
//                             }
//                             else{
//                                 if((h<i)&&(h<j)){
//                                     printf("min number %d",h);
//                                 }
//                                 else{
//                                     if(i<j){
//                                         printf("min number %d",i);
//                                     }
//                                     else{
//                                         printf("min number %d",j);
//                                     }
//                                 }
//                             } 
//                         }
//                     }
//                 }
//             }
//         }
//     }
// }

// // string multipale char
// // a[i]; array