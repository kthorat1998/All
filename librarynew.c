#include"headernew.h"


 ULONG Power(int iNo1,int iNo2)
 {
	   int icnt=0;
     ULONG iMult=1;
	 for(icnt=1;icnt<=iNo2;icnt++)
	 {
		 iMult=iMult*iNo1;
	 }
	 return iMult;
 }
