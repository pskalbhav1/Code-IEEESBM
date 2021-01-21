{\rtf1\ansi\ansicpg1252\cocoartf2513
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 \
import java.util.Scanner;\
class fixedpoints\
\{\
    public static void main()\
    \{\
        Scanner sc=new Scanner(System.in);\
        int n,i,d=0,mx=30000;\
        int arr[]=new int[101];\
        n=sc.nextInt();\
        for(i=1;i<=n;i++)\
        \{\
            arr[i]=sc.nextInt();\
        \}\
        for(i=2;i<=n;i++)\
        \{\
            d=Math.max(d,arr[i]-arr[i-1]);\
        \}\
        for(i=2;i<=n;i++)\
        \{\
            mx=Math.min(mx,Math.max(d,arr[i+1]-arr[i-1]));\
        \}\
        System.out.println(mx+1);\
    \}\
\}}