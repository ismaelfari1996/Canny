# Canny
Este algoritmo esta desarrollado en C/C++, para la lectura y escritura de las imágenes utiliza la libreria STB_IMAGE.
# Instalación 
```
# include "include.h"
// ..
  Canny c;
  StbImplementation stb;
  int width, height;
  double** img= stb.imread("imagen.jpg", width, height);
  int ** result=c.canny(img, width, height, sigma);
  //Los valores de gamma y radio son opcionales, pero es recomendable ajustar de acuerdo al problema al que se se esta aplicando.
//..
```
# Resultados
<p >
<h2>Imágen original</h2>
<img width="431" alt="image" src="https://github.com/ismaelfari1996/Canny/assets/66229891/5af27849-54c3-42c3-98bd-256b387c8dec">
<h2>Imágen resultante</h2>
<img width="435" alt="image" src="https://github.com/ismaelfari1996/Canny/assets/66229891/ac28b0d9-7289-4908-a326-ff4a4b798c9d">
</p>

