#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

float areat(int x1, int y1, int x2, int y2, int x3, int y3){
    float a= (x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2;
    return fabsf(a);
}

int foundInBermudatriangle(int x1, int y1, int x2, int y2, int x3, int y3, int px, int py, int bx, int by) {
    float a,a1,a2,a3,b1,b2,b3;
    int plane,boat;
    
    a=areat(x1,y1,x2,y2,x3,y3);
    //printf("%f \n",a);

    a1=areat(px,py,x2,y2,x3,y3);
    //printf("%f \n",a1);
    
    a2=areat(x1,y1,px,py,x3,y3);
    //printf("%f \n",a2);
    
    a3=areat(x1,y1,x2,y2,px,py);
    //printf("%f \n",a3);
    
    b1=areat(bx,by,x2,y2,x3,y3);
    //printf("%f \n",b1);
    
    b2=areat(x1,y1,bx,by,x3,y3);
    //printf("%f \n",b2);
    
    b3=areat(x1,y1,x2,y2,bx,by);
    //printf("%f \n",b3);
    
    
    if(a==0)
        return 0;
    
    if(a==(a1+a2+a3)){
        plane=1;
    }

    else
        plane=0;
    
    if(a==(b1+b2+b3)){
        boat=1;
    }

    else
        boat=0;
    
    if(plane==1 && boat==0)
        return 1;
    
    else if(plane==0 && boat==1)
        return 2;
    
    else if(plane==1 && boat==1)
        return 3;
    
    else if(plane==0 && boat==0)
        return 4;
    
    else 
    	return 0;
        
}

int main() {
	int res;
    FILE *f = fopen(getenv("OUTPUT_PATH"), "w");
    *int res;
    int _x1;
    scanf("%d", &_x1);
    
    int _y1;
    scanf("%d", &_y1);
    
    int _x2;
    scanf("%d", &_x2);
    
    int _y2;
    scanf("%d", &_y2);
    
    int _x3;
    scanf("%d", &_x3);
    
    int _y3;
    scanf("%d", &_y3);
    
    int _px;
    scanf("%d", &_px);
    
    int _py;
    scanf("%d", &_py);
    
    int _bx;
    scanf("%d", &_bx);
    
    int _by;
    scanf("%d", &_by);
    
    res = foundInBermudatriangle(_x1, _y1, _x2, _y2, _x3, _y3, _px, _py, _bx, _by);
    //res = foundInBermudatriangle(0, 0, 2, 0, 4, 0, 2, 0, 4, 0);
    fprintf(f, "%d\n", res);
    
    //printf("%d \n",res);
    
    fclose(f);
    return 0;
}
    
