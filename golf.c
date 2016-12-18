main(int x,char *v[]){int i=-1;s:++i;v[1][i]=v[2][i];puts(v[1]);if(i != strlen(v[2]))goto s;}
