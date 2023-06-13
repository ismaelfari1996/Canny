#include "include.h"

int main(){
    GaussianFilter g;
    int width, height;
    StbImageImplementation stb;
    Canny canny;
    stb_image img=stb.imread("/home/ismael/Documents/programs/Canny/img/cat.jpg",width,height);
    double thresh[]={2,3};
    int ** border=canny.canny(img,width,height,thresh, 5,3,3);
    stb.imshow("final_border.jpg",border,width,height);
    canny.canny_free_memory(border,height);

}