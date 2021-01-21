{\rtf1\ansi\ansicpg1252\cocoartf2513
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 import java.util.*;\
\
\
\
class Codechef\
\{\
	public static void main (String[] args)\
	\{\
		Scanner sc=new Scanner(System.in);\
		int tes=sc.nextInt();\
		while(tes-->0)\{\
		    int N=sc.nextInt();\
		    int K=sc.nextInt();\
		    int D=sc.nextInt();\
		    int [] arr =new int[N];\
		    int t=N;\
		    int i=0;\
		    while(t-->0)\{\
		        arr[i++]=sc.nextInt();\
		    \}\
		    int sum=0;\
		    for(i=0;i<N;i++)\{\
		        sum=sum+arr[i];\
		    \}\
		    int qperday=0;\
		    \
		    if(sum>=K)\{\
		        qperday=sum/K;\
		        if(qperday<=D)\{\
		            System.out.println(qperday);\
		        \}\
		        else\{\
		            System.out.println(D);\
		        \}\
		    \}\
		    else if(sum<K)\{\
		        System.out.println("0");\
		    \}\
		\}\
	\}\
\}}