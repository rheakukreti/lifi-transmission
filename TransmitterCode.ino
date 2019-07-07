int wait = 50;
int ledPin=9;
int H=255;
int L=50;

int a[] ={L, H, L, L, L, L, L, H}; 
int b[] ={L, H, L, L, L, L, H, L}; 
int c[] ={L, H, L, L, L, L, H, H};
int d[] ={L, H, L, L, L, H, L, L}; 
int e[] ={L, H, L, L, L, H, L, H};
int f[] ={L, H, L, L, L, H, H, L}; 
int g[] ={L, H, L, L, L, H, H, H};
int h[] ={L, H, L, L, H, L, L, L};
int I[] ={L, H, L, L, H, L, L, H};
int j[] ={L, H, L, L, H, L, H, L};
int k[] ={L, H, L, L, H, L, H, H};
int l[] ={L, H, L, L, H, H, L, L};
int m[] ={L, H, L, L, H, H, L, H}; 
int n[] ={L, H, L, L, H, H, H, L};
int o[] ={L, H, L, L, H, H, H, H};
int p[] ={L, H, L, H, L, L, L, L};
int q[] ={L, H, L, H, L, L, L, H};
int r[] ={L, H, L, H, L, L, H, L};
int s[] ={L, H, L, H, L, L, H, H};
int t[] ={L, H, L, H, L, H, L, L};
int u[] ={L, H, L, H, L, H, L, H};
int v[] ={L, H, L, H, L, H, H, L};
int w[] ={L, H, L, H, L, H, H, H};
int x[] ={L, H, L, H, H, L, L, L};
int y[] ={L, H, L, H, H, L, L, H};
int z[] ={L, H, L, H, H, L, H, L}; 


int space[] = {L, L, H, L, L, L, L, L}; 

//int exclaim[]={L, L, H, L, L, L, L, H};
//int doublequote[]={L, L, H, L, L, L, H, L};
//int number[]={L, L, H, L, L, L, H, H};
//int dollar[]={L, L, H, L, L, H, L, L};
//int percent[]={L, L, H, L, L, H, L, H};
//int ampersand[]={L, L, H, L, L, H, H, L};
//int singlequote[]={L, L, H, L, L, H, H, H};
//int leftparen[]={L, L, H, L, H, L, L, L};
//int rightparen[]={L, L, H, L, H, L, L, H};
//int asterisk[]={L, L, H, L, H, L, H, L};
//int plus[]={L, L, H, L, H, L, H, H};
//int comma[]={L, L, H, L, H, H, L, L};
//int minus[]={L, L, H, L, H, H, L, H};
//int dot[]={L, L, H, L, H, H, H, L};
//int fowslash[]={L, L, H, L, H, H, H, H};
//int colon[]={L, L, H, H, H, L, H, L};
//int semicolon[]={L, L, H, H, H, L, H, H};
//int less[]={L, L, H, H, H, H, L, L};
//int equal[]={L, L, H, H, H, H, L, H};
//int great[]={L, L, H, H, H, H, H, L};
//int question[]={L, L, H, H, H, H, H, H};
//int at[]={L, H, L, L, L, L, L, L};
//int leftbrac[]={L, H, L, H, H, L, H, H};
//int backslash[]={L, H, L, H, H, H, L, L};
//int rightbrac[]={L, H, L, H, H, H, L, H};
//int caret[]={L, H, L, H, H, H, H, L};
//int underscore[]={L, H, L, H, H, H, H, H};
//int leftbrace[]={L, H, H, H, H, L, H, H};
//int bar[]={L, H, H, H, H, H, L, L};
//int rightbrace[]={L, H, H, H, H, H, L, H}; 


int aa[] ={L, H, H, L, L, L, L, H};
int bb[] ={L, H, H, L, L, L, H, L};
int cc[] ={L, H, H, L, L, L, H, H};
int dd[] ={L, H, H, L, L, H, L, L};
int ee[] ={L, H, H, L, L, H, L, H};
int ff[] ={L, H, H, L, L, H, H, L};
int gg[] ={L, H, H, L, L, H, H, H};
int hh[] ={L, H, H, L, H, L, L, L};
int II[] ={L, H, H, L, H, L, L, H};
int jj[] ={L, H, H, L, H, L, H, L};
int kk[] ={L, H, H, L, H, L, H, H};
int ll[] ={L, H, H, L, H, H, L, L};
int mm[] ={L, H, H, L, H, H, L, H};
int nn[] ={L, H, H, L, H, H, H, L};
int oo[] ={L, H, H, L, H, H, H, H};
int pp[] ={L, H, H, H, L, L, L, L};
int qq[] ={L, H, H, H, L, L, L, H};
int rr[] ={L, H, H, H, L, L, H, L};
int ss[] ={L, H, H, H, L, L, H, H};
int tt[] ={L, H, H, H, L, H, L, L};
int uu[] ={L, H, H, H, L, H, L, H};
int vv[] ={L, H, H, H, L, H, H, L};
int ww[] ={L, H, H, H, L, H, H, H};
int xx[] ={L, H, H, H, H, L, L, L};
int yy[] ={L, H, H, H, H, L, L, H};
int zz[] ={L, H, H, H, H, L, H, L}; 


int n0[] ={L, L, H, H, L, L, L, L};
int n1[] ={L, L, H, H, L, L, L, H}; 
int n2[] ={L, L, H, H, L, L, H, L}; 
int n3[] ={L, L, H, H, L, L, H, H}; 
int n4[] ={L, L, H, H, L, H, L, L}; 
int n5[] ={L, L, H, H, L, H, L, H};
int n6[] ={L, L, H, H, L, H, H, L};
int n7[] ={L, L, H, H, L, H, H, H};
int n8[] ={L, L, H, H, H, L, L, L};
int n9[] ={L, L, H, H, H, L, L, H};


void setup() {  

  
  Serial.begin(9600);
  pinMode(4, OUTPUT);

}

void loop() {
  
 
 if(Serial.available()>0){

  int alpha = Serial.read();
  Serial.print(char(alpha));
  analogWrite(ledPin,255);
  delay(50);
  analogWrite(ledPin,0);
  
  
  if(alpha=='A'){
    for (int i = 0; i < 8; i++) {
    analogWrite(ledPin, a[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);
    }
  }


  if(alpha=='B'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, b[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);
    }
  }

  if(alpha=='C'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, c[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='D'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, d[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='E'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, e[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }
  
  if(alpha=='F'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, f[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='G'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, g[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }
  
  if(alpha=='H'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, h[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }
  
  if(alpha=='I'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, I[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }
  
  if(alpha=='J'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, j[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }
  
  if(alpha=='K'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, k[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }
  
  if(alpha=='L'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, l[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }
  
  if(alpha=='M'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, m[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }
  
  if(alpha=='N'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, n[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }
  
  if(alpha=='O'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, o[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }
  
  if(alpha=='P'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, p[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }
  
  if(alpha=='Q'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, q[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }
  
  if(alpha=='R'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, r[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }
  
  if(alpha=='S'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, s[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }
  
  if(alpha=='T'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, t[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }
  
  if(alpha=='U'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, u[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }
  
  if(alpha=='V'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, v[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }
  
  if(alpha=='W'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, w[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }
  
  if(alpha=='X'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, x[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }
  
  if(alpha=='Y'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, y[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }
  
  if(alpha=='Z'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, z[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha==' '){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, space[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

//  if(alpha=='!'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, exclaim[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//  
//  if(alpha=='\"'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, doublequote[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }  
//
//  if(alpha=='#'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, number[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha=='$'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, dollar[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha=='%'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, percent[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha=='&'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, ampersand[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha=='\''){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, singlequote[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha=='('){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, leftparen[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha==')'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, rightparen[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha=='*'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, asterisk[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha=='+'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, plus[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha==','){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, comma[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha=='-'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, minus[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha=='.'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, dot[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha=='/'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, fowslash[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha==':'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, colon[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha==';'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, semicolon[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha=='<'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, less[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha=='='){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, equal[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha=='>'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, great[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha=='\?'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, question[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha=='@'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, at[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha=='['){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, leftbrac[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha=='\\'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, backslash[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha==']'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, rightbrac[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha=='^'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, caret[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha=='_'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, underscore[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha=='{'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, leftbrace[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha=='|'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, bar[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
//
//  if(alpha=='}'){
//    for (int i = 0; i < 8; i++) {
//    analogWrite(ledPin, rightbrace[i]);
//    delay(wait);
//    analogWrite(ledPin,0);
//    delay(10);
//    }
//  }
            
  if(alpha=='a'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, aa[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}

  }
  
  if(alpha=='b'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, bb[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='c'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, cc[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='d'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, dd[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='e'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, ee[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='f'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, ff[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='g'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, gg[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='h'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, hh[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);} 
  }

  if(alpha=='i'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, II[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='j'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, jj[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='k'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, kk[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='l'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, ll[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='m'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, mm[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='n'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, nn[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='o'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, oo[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='p'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, pp[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='q'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, qq[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='r'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, rr[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='s'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, ss[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='t'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, tt[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='u'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, uu[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='v'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, vv[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='w'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, ww[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='x'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, xx[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='y'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, yy[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='z'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, zz[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='0'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, n0[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='1'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, n1[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='2'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, n2[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='3'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, n3[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='4'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, n4[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='5'){
    for (int i = 0; i < 8; i++) {
    analogWrite(ledPin, n5[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='6'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, n6[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='7'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, n7[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }

  if(alpha=='8'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, n8[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }
  
  if(alpha=='9'){
    for (int i = 0; i <8; i++) {
    analogWrite(ledPin, n9[i]);
    delay(wait);
    analogWrite(ledPin,0);
    delay(10);}
  }
  
 }

 else
 analogWrite(ledPin, 0);

}
