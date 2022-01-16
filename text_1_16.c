// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
    // int a = 1;
    // int i = 0;
    // int n = 0;
    // scanf("%d",&n);
    // for(i=1;i<=n;i++)
    // {
        // a = a*i;
    // }
    // printf("%d\n",a);
    // system("pause");
    // return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
    // int a =1;
    // int i =0;
    // int sum =0;
    // for(i=1;i<=10;i++)
    // {
        // a = a*i;
        // sum = sum + a;
    // }
    // printf("%d\n",sum);
    // system("pause");
    // return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
    // int arr[10]={1,2,3,4,5,6,7,8,9,10};
    // int left=0;
    // int k=7;
    // int sz=sizeof(arr)/sizeof(arr[0]);
    // int right=sz-1;
    // while(left<=right)
    // {
        // int mid=(right+left)/2;
        // if(mid>k)
            // right=mid-1;
        // else if(mid<k)
            // left=mid+1;
        // else
        // {
            // printf("find it %d\n",mid);
        //    break;
        // }
    // }
    // if(left>right)
        // printf("can not find it");
    // system("pause");
    // return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main()
// {
    // char arr1[20]={"hellow world"};
    // char arr2[20]={"############"};
    // int left=0;
    // int sz=strlen(arr1);
    // int right=sz-1;
    // while(left<=right)
    // {
        // left[arr2]=left[arr1];
        // right[arr2]=right[arr1];
        // printf("%s\n",arr2);
        // left++;
        // right--;
    // }
    // system("pause");
    // return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main()
// {
    // char password[20]={0};
    // int i=0;
    // for(i=0;i<3;i++)
    // {
        // printf("enter you password:>");
        // scanf("%s", &password);
        // if(strcmp(password,"123456")==0)
        // {
            // printf("right password coming");
            // break;
        // }
        // else
            // printf("mistake password continue\n");
    // }
    // if(i==3)
        // printf("shibai");
    // system("pause");
    // return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
    // int a=0;
    // int b=0;
    // int c=0;
    // scanf("%d %d %d",&a,&b,&c);
    // if(a>b&&a>c)
        // printf("zuidazhiwei %d\n",a);
    // else if(a>b&&a<c)
        // printf("zuidazhiwei %d\n",c);
    // else if(a<b&&c<b)
    // printf("zuidazhiwei %d\n",b);
    // system("pause");
    // return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
    // int i = 0;
    // for(i=1;i<=100;i++)
    // {
        // if(i%3==0)
        // printf("%d ",i);
    // }
    // system("pause");
    // return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
    // int a=0;
    // int b=0;
    // scanf("%d %d",&a,&b);
    // int c=a%b;
    // while(c!=0)
    // {
        // a = b;
        // b = c;
        // c = a%b;
    // }
    // printf("zuidagongyueshuwei %d\n",b);
    // system("pause");
    // return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
    // int year = 0;
    // int count = 0;
    // for(year=1000;year<=2000;year++)
    // {
        // if(year%4==0&&year%100!=0)
        // {
            // printf("%d ",year);
            // count++;
        // }
        // else if(year%400==0)
        // {
            // printf("%d ",year);
            // count++;
        // }
    // }
    // printf("\ncount=%d ",count);
    // system("pause");
    // return 0;
// }


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0;
    for(i=100;i<=200;i++)
    {
        int j =0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
    if(j==i)
        printf("%d ",i);
    }
    system("pause");
    return 0;
}