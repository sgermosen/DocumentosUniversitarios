int main(){
    int mat=5462,x,y,primo=1;

    for (x=10;x<=mat;x++){
        for (y=x-1;y>=10;y--)
        {
          if (x%y==0){
          primo=0;
          break;
          }
        }
    if (primo==1){
        printf("%d\n",x);
    }
    primo=1;
    }

}
