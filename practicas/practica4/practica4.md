<style>
    .left{text-align: left;}
    .right{text-align: right;}
    .center{text-align: center;}
    .just{text-align: justify;}
    .title{font-size: 40px;}
    .subtitle{font-size: 30px;}
</style>

# Practica 4

<div class="center title">
Instituto Politecnico Nacional
<br>
Escuela Superior de Computo
</div>
<br><br>
<div class="center subtitle">
Sistemas operativos
</div>
<br><br>
<div class="center subtitle">
Programacion bajo el interprete de comandos (shell)
</div>
<br><br>
<div class="center">
Etnan Jezreel Lopez Torres <br>
Gonzaga Martínez José Alberto <br>
Sebastian Absalon Cortes<br>
</div>

<div class="just">
<br><br><br><br>

# Marco teorico

## Seccion de linux

### Bash scripting

Bash (Bourne-Again Shell) es un intérprete de comandos de Unix. Este lee los comandos del shell e interactúa con el sistema operativo para ejecutarlos.

Para entender completamente el scripting shell bash, necesitas conocer dos conceptos: shell y scripting.

Shell es un macroprocesador que utiliza comandos para interactuar con el sistema operativo. Esto significa que puede recuperar, procesar y almacenar información en un ordenador.

Por su parte, el scripting es el proceso de compilar comandos del shell en un nuevo archivo utilizando un editor de texto.

Cuando escribes bash en un editor de texto, estás compilando comandos bash o funciones bash, los cuales son un conjunto de comandos que pueden ser llamados numerosas veces tan solo usando el nombre de la función. El texto se guarda entonces como un archivo de script bash ejecutable con la extensión .sh. 

### Comandos de bash

#### date

```txt
DATE(1)                                   User Commands                                   DATE(1)

NAME
       date - print or set the system date and time

SYNOPSIS
       date [OPTION]... [+FORMAT]
       date [-u|--utc|--universal] [MMDDhhmm[[CC]YY][.ss]]

DESCRIPTION
       Display the current time in the given FORMAT, or set the system date.

       Mandatory arguments to long options are mandatory for short options too.
```

#### tar

```txt
TAR(1)                                    GNU TAR Manual                                   TAR(1)

NAME
       tar - an archiving utility

SYNOPSIS
   Traditional usage
       tar {A|c|d|r|t|u|x}[GnSkUWOmpsMBiajJzZhPlRvwo] [ARG...]
NOTE
       This  manpage is a short description of GNU tar.  For a detailed discussion, including ex‐
       amples and usage recommendations, refer to the GNU Tar Manual available in texinfo format.
       If  the  info  reader and the tar documentation are properly installed on your system, the
       command

           info tar

       should give you access to the complete manual.

       You can also view the manual using the info mode in emacs(1), or find it in  various  for‐
       mats online at

           http://www.gnu.org/software/tar/manual

       If any discrepancies occur between this manpage and the GNU Tar Manual, the later shall be
       considered the authoritative source.

DESCRIPTION
       GNU tar is an archiving program designed to store multiple files in a single file (an  ar‐
       chive),  and  to  manipulate such archives.  The archive can be either a regular file or a
       device (e.g. a tape drive, hence the name of the program, which stands for tape archiver),
       which can be located either on the local or on a remote machine.
```

#### bzip2

```txt
bzip2(1)                             General Commands Manual                             bzip2(1)

NAME
       bzip2, bunzip2 - a block-sorting file compressor, v1.0.8
       bzcat - decompresses files to stdout
       bzip2recover - recovers data from damaged bzip2 files

SYNOPSIS
       bzip2 [ -cdfkqstvzVL123456789 ] [ filenames ...  ]
       bzip2 [ -h|--help ]
       bunzip2 [ -fkvsVL ] [ filenames ...  ]
       bunzip2 [ -h|--help ]
       bzcat [ -s ] [ filenames ...  ]
       bzcat [ -h|--help ]
       bzip2recover filename

DESCRIPTION
       bzip2 compresses files using the Burrows-Wheeler block sorting text compression algorithm,
       and Huffman coding.  Compression is generally considerably better than  that  achieved  by
       more  conventional  LZ77/LZ78-based compressors, and approaches the performance of the PPM
       family of statistical compressors.

       The command-line options are deliberately very similar to those of GNU gzip, but they  are
       not identical.

       bzip2  expects a list of file names to accompany the command-line flags.  Each file is re‐
       placed by a compressed version of itself, with the name  "original_name.bz2".   Each  com‐
       pressed file has the same modification date, permissions, and, when possible, ownership as
       the corresponding original, so that these properties can be correctly restored  at  decom‐
       pression  time.   File  name handling is naive in the sense that there is no mechanism for
       preserving original file names, permissions, ownerships or dates in filesystems which lack
       these concepts, or have serious file name length restrictions, such as MS-DOS.
```

#### bunzip2

```txt
bzip2(1)                             General Commands Manual                             bzip2(1)

NAME
       bzip2, bunzip2 - a block-sorting file compressor, v1.0.8
       bzcat - decompresses files to stdout
       bzip2recover - recovers data from damaged bzip2 files

SYNOPSIS
       bzip2 [ -cdfkqstvzVL123456789 ] [ filenames ...  ]
       bzip2 [ -h|--help ]
       bunzip2 [ -fkvsVL ] [ filenames ...  ]
       bunzip2 [ -h|--help ]
       bzcat [ -s ] [ filenames ...  ]
       bzcat [ -h|--help ]
       bzip2recover filename

DESCRIPTION
       bzip2 compresses files using the Burrows-Wheeler block sorting text compression algorithm,
       and Huffman coding.  Compression is generally considerably better than  that  achieved  by
       more  conventional  LZ77/LZ78-based compressors, and approaches the performance of the PPM
       family of statistical compressors.

       The command-line options are deliberately very similar to those of GNU gzip, but they  are
       not identical.

       bzip2  expects a list of file names to accompany the command-line flags.  Each file is re‐
       placed by a compressed version of itself, with the name  "original_name.bz2".   Each  com‐
       pressed file has the same modification date, permissions, and, when possible, ownership as
       the corresponding original, so that these properties can be correctly restored  at  decom‐
       pression  time.   File  name handling is naive in the sense that there is no mechanism for
       preserving original file names, permissions, ownerships or dates in filesystems which lack
       these concepts, or have serious file name length restrictions, such as MS-DOS.
```

### Programa 1

```sh
#!/bin/sh 
# 
clear 
# 
ls  -l 
# 
rm  -f  ./prueba 
# 
ls  -l 
# 
echo  "------------------ Creando archivo: prueba ----------------" 
# 
echo  "Hola a todos" >> prueba 
echo  "Esto es una prueba" >> prueba 
echo  "De un script" >> prueba 
# 
ls  -l  ./prueba 
# 
echo  "------------------ Script terminado ----------------------" 
more  ./prueba
```

#### Detalles de codigo 

- Este codigo inicia especificando el shell que ejecutara nuestro codigo, que en este caso se utiliza "sh"
- A continuacion el codigo ejecuta el comando clear, el cual permite hacer una limpieza de la consola sobre la que se esta trabajando.
- A continuacion se ejecuta el comando ```ls - l```

#### A continuacion tenemos la ejecucion del programa.

![](https://lh3.googleusercontent.com/fife/AK0iWDxk2Tx_1kKOb82C1nEiehpREQaZdL6Anh2TDsoiSu5AISthBb4Z5-XumOs3tfBuVPalt2oAOhM8mne0QcP1VPzicDdPbh9aC4Nl8N05LuY_5Kyfe7F2aVlROHtuiHx5Yp8j2banTySBjPxdG0ExvlYQ6u6g41dvXXl9QSmR93idlelPYYOLc5rQ-wF7-qHVWTjzEgafPJdsAnm2KgJ8ncgBWKAd-_A5FNrZsnflBWKeyQt8C4VCE6KmDSHfPZ66sMEYbsCId-h-qztY5aGPGJ66_hqszLMxppx8hAfive7vKXJUMnIJ3CffK3XXCFjJCVDcqFdD9KdEdGlKb3ylW8vmQ7fUWWIKmrdsvWzzcNW27ADl8g8w6Lhp1aH_QAsJzgruGrb_cWJB7PLZlX5Pon_yVgHC7VXSZz2Hf8we2li1VUDyxTiRE_VEFPFoeC34JisXSxLpl2_meGrTdt3duDJfUOtwhguMoYNiYHafmNeI49c0Ty1L-cJJuF631eTHy9ka5-NV9DQz0E7bwroEo-Qxqcb-pSPasoCy7yCp63n2YBQsrmBfwoRmDsBLevcATg2bqT3LircHz04sVw6rVfREfQuJ2gv8IbCMlnzOwDfVDItbGA2yU69FT-OdAvTfnzxpBxyxjSDhcoYp4JNlvg72Xlk9rLTfyzw1BCbvpo5IVFgTGGZVLy-S8dmqRlBPUApaIMlOEVxNUmxYDt2EOPmBimx8ZuO2IFq-y59kak7H5D2x1EFvy9Xm4uuPCjq_9AmP411_tStFn8UISr-52E7s81CgFwRLXuN6MOfbAE8rDdAfurgDsEw3pVgN4XosAMbGVNL1Jw51-VyYlBeEOu3dkjHUah4AoI0uFWZZv94hS7FJnR7gOV5qR5QSq_A4nP1y2LJMebfZGzI-Xww2QcwKd4cdkVe68g86oQ0SyxP3PZs3nYiUBwgTwBvqWh77BAfWJkz1zf4KKvY9d9KUsDrqGujrWqoQcRy2eTK9lZzPd7O6YGmtJnO2PIauVlsIQKg65N1C_EW40Ya2_MiniBTZLktGYN7EHhn8QU1Tgg-zaZqiWVfQR7_Kph3HOHMVGCXbuPpbVBO4qRhp2oat7lQ0Y7uz2-oYjKFcs0mDRtsuvu9U-AZUhOImNVMbUFnyzskv9GKKaKVCcdUBJHKsdoduUysnc92WH5j6i7ZPtRxwv-HXwfV5urCKc4d-8xQ0WF3wjAf0gCtf3MU5NPe0DONGo1no--XL1AfcCqedrd2kFlRCVc9xY3ikbdrkrxDsEQEraRgATnESCSaJERAn98az-vnbdDf5rs7l3QiWrcQvEY9QWYHvpnApaBt9Z6tndYtLF6BxG8sruBV532EQ_A62tvvj2HXq_dxnzqDpLbC8Uoo4nQt8HAimvCyhOb9ZoGDc3TeRYRlbw-7sVSTuN_GNR1KQXnKCQu3ogF1Sxnrb8jfj95rLaduPmwfpNbR1t38RWoGf8tuyr2mHf_pzi1OZuj-drZ2amv5Wa4RrnEHa3wxsAgjW6VxDZgTBgT3K-7nGEUd1ewQ=w1365-h654)

### Programa 2

```sh
#!/bin/sh 
# 
clear 
# 
echo  "-------------- Obteniendo fecha ---------------" 
fecha=`date +%Y%m%d%H%M` 
# 
echo  "-------------- Empacando ----------------" 
tar  -cvf  ./respaldo$fecha.tar   /home/suzu/Documents/AVL   /home/suzu/Documents/networks   /home/suzu/Documents/scripts
# 
echo "-------------- Comprimiendo ----------------" 
bzip2  ./respaldo$fecha.tar 
# 
echo  "-------------- Enviando a otro directorio --------------" 
cp  ./respaldo$fecha.tar.bz2   /home/suzu/respaldos 
# 
echo  "-------------- Descomprimiendo ------------------" 
bunzip2  /home/suzu/respaldos/respaldo$fecha.tar.bz2 
# 
echo  "-------------- Desempacando ----------------" 
tar  -xvf   /home/suzu/respaldos/respaldo$fecha.tar 
# 
echo  "-------------- Limpiando ------------------" 
rm  -f  ./respaldo$fecha.tar.bz2 
rm  -f  ./respaldo$fechar.tar 
# 
echo  "-------------- Terminado ------------------"
```

A continuacion podemos ver la ejecucion del programa anterior.

![](https://lh3.googleusercontent.com/fife/AK0iWDwF3NiRRqZFRNbhaSQIkQv4LqY_F6UieVUlp73RopFUEWQHG_ocVa1a3eJpVATquOrLlmA5WjamZ1O2Tl-3czisU51GGU5t6W96UfIJWAAJnu77t-gS0DksKRv-p0D6e-i5b9QN-Ym9jQqm0ACxdaGVnKZfVnfHB3NZKawgkHETDrQEXHdN90K2b-o9wo130f-edIhmUpf6SMkxOegNPfMuOweT66flswAbIgaAcRefZkuz_40lINLCFTGTq5ozbDynJb8HGypuA8xolhtZ-FGs9AOTfstIFNZ-qwiP5PW7VlfkQevgtj9p9GQu2jIRUgJPZ0a3IjvNcbcSaB4vJZEv-tDahQM7lJESCnbnnh-Km4-U4iC9KABfoMnAbqvg1MAtYQMsDGUeW_P_USdvBURcqjAjHYS990kglWkThz55cZhniYuJj_B8HAlBIGBU1l2fHeqcLFJ202dOepHfQ6mnO8NiVZIvi2LJ2hZdfglMKqSKixUy5sxUKPanF1rFEHPDGBTMJ8KF_seQmxpmp728jgBiYifFUMaQitAdwql-CQ-tZ8WhcxeZuKda_BjmZ-eqRKSAa0kv-Tso3KfbZ4MXr7_e6MOLtZxf-WoGuhGFvdjzr3TeY_XOC6PoohKxPgY8LqqobBq_T9uAz6fBg-7XTpBkbE6wZx_-QZYifBEJx5KMx2r3QiQItXALe-LdfzHTMxs5aqizWap1coQJvO2qyvU_N1REip-1xkYWV7fLlF4Sh6uAD-S9hME3_j2OhHbD8S62ASC1IQnALQjoCMIBfQBb_Ne40HrW_wTqTbKOhoq9ahywbeGakKgedcdeTWCsmv7NirVOr32YvUijjT2h6YBs_Piw_-gsxbJ6rvpX0eZTDFvmOC62xzoRDqSTwk5ZnZp_5MhWMcK1P6roWm6VxARp4vLYl5US1a4qAYuAwZjLn5ZhUO1Z-QB13hMN0LOXTRVkMGTYWXo24H9TL3GBLcx9u3Wpz6ddUtFadpLZTp5_LfhFcXMHl5qBZotB14aJlaRDOcgUIVZk-Evo0gKD3qkIqB8-Nnc0ZR4o6VzWem_Zq51Ic8It1VDInohX8_OivxRmWhJ53_SgljiA4D7Qui9YqJPj3cl2k17czmC1o9yotB7nzWqsnxqexjbFaFF0E2shw9ypUJSiYXPxNF5HmP8oVw08C_EDZR7kn0a_9t99xJHvEFjaaLRUqt18wCwjcG77db9u9s90VmuV27n37dQOnqnWF3gpIo0V1SScEZhu8tz_vFAI59o59jQlBRL6iOM7E4bVnDO_xIK2TNRWh1RxAWZa5bV8KzITHvcLXr1-oONar-4jkVdAR-MFyYLqcJ09kgzSaR74Fhhu9EsXqcJtB7Gtd77bAtY7y3JvzoHdwFWhoGN3lZZ5_yLl2bVF92YfuNBEETCKcvZT2CXvi8BnjQZOW4wYzD2If048V4KOtLtJJjR1l9XNVitMpeXOuzaVoTc4e7hnckknvUaCvdMSlkxMXj7BOgQ_cLIGRpmAeqPMd6N3YpcZKoUsTQ-hiRnSxKIbw0J2vBmRq0VZ1EWgC9cP94UfkclLLPSyseEq=w1365-h663)

### Programa 3

```sh
#!/bin/sh 
clear 
echo  –n  “Introduce dos valores númericos separados por espacios” 
read  var1  var2 
echo  “Los valores son: “ 
echo  var1=$var1 
echo  var2=$var2 
# 
if  [ $var1  -lt  $var2 ] 
then  
 echo  “$var1 menor que $var2” 
 while [ $var1 –lt  $var2 ] 
 do 
  echo contador=$var1 
  var1=`expr  $var1  +  1` 
 done 
else 
 echo  “$var1 mayor o igual que $var2” 
 case $var2 in 
  10) echo “Fui un 10”;; 
  20) echo “Fui un 20”;; 
  Otro) echo “Otro valor”;; 
 esac 
fi 

```

A continuacion vemos la ejecucion del rpograma.

![](https://lh3.googleusercontent.com/fife/AK0iWDxhUW5vstrpWYlicOpFdiw4cqVqbN4yneAKHye_jW5sc0HGDLY2VA_d7ggMhnX_aNrltvpzortUu5LjBadHXGM8cteNKyurr9raSwMr1itPQJ8kOZda-tbew8XArfLV-mdwMHwJQ6t9Xo_0Bgder-dYSttQ7s-cOw1WpVIAv7ajm-hOAIOXpO9fdzc5WQpDlW0ihviTqgUoy-J3K_1sz_rqI94lBZyQVi-UzUubub1q_BQx-tpoL-YIkp3gFMDjXOoIxEiB_fld-jbKx6vsxd9KEKJhUZwXD9W7TlvCigOESPYPR2oVw3_gSLyP-8s9SGnYX0R6Kii79wRyRJ7w_fdIiIHIHsEyqWYSpWRBx3CtjcF-j0-9MQOdrvkVAYl_fveWzafunzzqhGnwWMvYfawWBisYgNoAFOXy9-b4b-LyIyf6OHiS_UoaNSf4ecdNZRjn7DD5bCYu5a0xfMH3BDVQh_DtMRRVMH-Lfuw1buYcgaafEX8VZbuiHUfSi5wRMDe9jMqWOjHAKVpg6nu1FT6JxOCMs8DxdPRlTNBAcbbQQEPQ0M5U0aFv_a4_a-WBkfV6m1xeVo6MbLwK_PeCiMcinlZhvJBeEnm53oN3hzK15ynizIFpOydK93wE6cnsgiLkIRQ7mXXC0G_HCVxVLJasmFRbU5pGhNCNcb8F_r7zbrdJ9w_vfRvrj_uR0GkSzvjPAige4rxeRMDSpi3oRyQpqJImE9XI7loKjLSQPQBu5j2iPJsH1Y82zT-3qZAm8PuCa71vk9mmIgyNouwLMaKQN9q2lc8et-y4xk-63I1oSrV_do9KcX0hKc5KKsJArHwzEDliJngjGIAnyjUA5gJ6_qZE_h6UIMsnjZntik8ttrol5GvUk4sLxu542Jn9y-6ho_i1j4gDZUqRU_0w7oxBiSvHEN3xV0_wp3oMoGIYeVpAmUH_jXl837hhxmJedmpcvacUbRAVrwHPGk07WQd2t_Wu6A-KGfzd3iLIwdZM-RlM6QBbtzXkWwsaxeiHXPm0GQIxt4Fx_E97WWPbIUOaGnz04kz4Ztp59h048eVoieFAoTZxrDoIk0kn0KYuHg-szqnhvV3rfoAofcsvcf_MRVORnN1y1rDBoDM9Rnz9wtRq0nsUk5C4TpLG_WedFlZ_E1b2eZCb6_BJoxYpgbjpdWcaw2XefSACjYE3Q1hkJzl9RTw3SB4g1DKAcOSpgKokkYn_LjLZHCpLBKR7fj5DwflPVeZsw_HMcIwj5P9d0bo-sxA4-gPYV5LkILjJlAm-b-mPIBiuFWn2KYyvoAgrFm7x7S2QccAoOrZl6xtsa6k-D7BDdQS0N6k8e2aAZ09v6NiNZWN8ZgXLEZ9Wfm1D0KWNu8ww3RknPLc5kyn4aajmaEkn9oek7mXdEFXSA9Zy2HjBeEo6OP7q14tGSAm4clNTnNlh6sBnzAqSIjn6zP--kmsNEeWp1aNg3MqYC_wLftSeAjUrQlM5YTJ_ieDqYqENhEsmKiwcI0hHmtpPLiSLIFAEAUvnO5-C8Rqs_vJRP58P-WX-EVRUKIt02gCKNcGEbj-YgmfSpeEwdXAH4YL9=w810-h663)

### Programa 4

```sh
#!/bin/sh 
clear 
Op=”Opcion: “ 
Select i in Directorio DirectorioExtendido Salir 
do case $i in  
 Directorio) ls;; 
 DirectorioExtendido) ls –l;; 
 Salir) break;; 
      esac 
done 
# 
for i in hola como estan todos 
do 
 echo  -n $i 
done 
@echo off 
rem 
cls 
rem 
dir  .\prueba 
rem 
del  .\prueba 
rem 
dir  .\prueba 
rem 
echo  "------------------ Creando archivo: prueba ----------------" 
rem 
echo  "Hola a todos" >> prueba 
echo  "Esto es una prueba" >> prueba 
echo  "De un batch" >> prueba 
rem 
dir  .\prueba 
rem 
echo  "------------------ Script terminado ----------------------" 
type  .\prueba 

```

### Programa 5

```sh
#!/bin/sh
#
clear
#
echo "============== Descomprimiendo archivos =============="
ls /home/suzu/respaldos

echo "============== Comprimiendo archivos =============="
tar  -cvf  ./respaldo.tar   /home/suzu/Documents/AVL   /home/suzu/Documents/networks   /home/suzu/Documents/scripts

echo "============== Comprimiendo archivo =============="
bzip2  ./respaldo.tar 

echo "============== Copiando a la carpeta de respaldos =============="
cp  ./respaldo.tar.bz2   /home/suzu/respaldos 

echo "============== Descomprimiendo archivos =============="
bunzip2  /home/suzu/respaldos/respaldo.tar.bz2 

echo "============== Desempaquetando archivos =============="
tar  -xvf   /home/suzu/respaldos/respaldo.tar 
```

![](https://lh3.googleusercontent.com/fife/AK0iWDy2TrKEJqOnxdDQ98A6DnzR0zUyMzkQxtMPvWnXhmedJS6lZ0QCOYKUoV6qPxhKukK8rAzqhrq7_56DVRaZsEynBRNhDH9GC-w2erWN8F6nue43sIvT_Z_m0H629MQ9kr0ycgD99yn49hpx2GqWex3dTLY-o7nZ5yhWnun1rcQoDe6XLCQh878YEjpL3MXUT_3rG6aZP-jiGfv_xGkKZ6yjDhu30rH2iWcEgjN2px1IlDqGGhNV62EgSVWV0UnR5mW91THAzM-9MEJmyiv6GixIDi3Ox6x2qni-6OJXEhC-h0gHf8Cd76TqwTipmv2AMToalhcMsV3xIAy73cNAQw0jmj1NfyOsCLW3f2PU4TimpGxpW07nLMlKYJcW7IZJ3NBdwPIhS6xASWaTI5t0YJQ2BseAm1QKWlBt-MhasAmH-37IZSSMp7NNOQGBpnY1wKKHAjF-s_P-E6lYt5urz0zZxuv5EtPby-Ok-_KY5CPsDh9P3-NeHYOEY0-kyPwopyi7tGeEDNNPBsumy8RYdH1TKLwNWK9laDb3my98Y_sTxhEm5pNgTv_Nttx9Tf8Rf5E6y-LUwYeqYUk78xAe_DUpKQmx8r_tddn4Pq9up_rcg1pmvIYAfv3bzs0JbMpg8kXqp00Lj21JW-pw7XH8nm50SUBsuJ2MW1xICdusrjwepwIiYxmhnUHH3kyiU1VYDVhtJADvHBkOKkfPNLCAO1PW6uBAuQ_Y6iI_FwxjlB1ZkYCWXMlV2-naslSefIC27mp6JGwZLa2qibtNufCURbcgzd9QwtfzbNx0U15pRAxu_iHGNqOTxC_TPVpDXcU81-7atEayUrXMFonQbgsIS2xWbBNUdG6qyNgIbIDAb448UWob2hIfFYh6FWdwscsUI9bXvjvH8SqtzAgt78dY_23dRpANeSnD8D7Q-8w4y64NjfvhcIt_mHjT3oRSTQc_w_lRWniZUKMnXDi70c-pXIoRhCLbRu7d7q8kyPpkccIyV4-9UKcEzm6AUJy9FYT_hukWtwwqCjFZ0wwI1o5h5Z60JfHIGOdRU5poUBjihTy7C7MRfcvRIGZwp2NlIrKrRC_oP31GrLKT0ZWQCmLmUypK25v1cfe8Y4S2urAtagNxJSyqClGHydIIbVGbr8Ij66b1wnNhKcuYQXWDxzbSJQVjJVXNWPLQB6btcMqzr1U7YTRZYUv4lnDcO2s3vz8tOEX-5Zcr1qBYC61okji9tCdEd9_lHL7ezqGs8CP1WaU5HSjuEYmhChN9BAQbW1XxuGKfZy3K2ETF1qZuktHvH4-OljjOuwRxXrUAZiTAgqbVXR61uKsn4IBlwv-VAvJDWG7qlYiOBaY4SkbQHhgkrMOp952Iy3tq4g4wM_n7JiPARQEePgU0jcgHBlnQXjv9f0t08wZO0tbjTjcuYc0JM5beIidAbry5Xs-K_wSkGRo66LihzshfQMhFFPj-i0TRDtjV-n0j70nR-J-J5yoBA0jlmIdyN3MrEr_LVl7qykfs372x7Gqay-aQe8Ns1PbCZL6IXP0kIQFzlwC15x5VaPtRegmOhwK3YvwghyMcExeyQ0Mx=w810-h663)
![](https://lh3.googleusercontent.com/fife/AK0iWDy_74n1OGlMRRyQ94SlOMy2ecnizIWlP4yNOitTMVobsE-bBknjLi6CkgEcSueXx2g6F2EzYwlHpl4xKnejT1a9sC3II4_P6LGAI3bElMKlF4P5mRBSs7r6KPPc0OGjOLlPQKi7tk8qZYg73NQhNhEnmYvTXGgbWDJssX_ocVKcjBAj2Da0a6pGNQnoo9cVcdrtz-s1lVe3eNNLF93Gr0gMYCzNJZSF1HkfWf67kAT16NofUvMhhQyMya2cGvf4UYVTEJbI0I0LktA3JdIawW0r6Tmc0xK0P-7lkI33OvjRAQmjdg13aFRQAupKZhL9HSioBtpxVpJdMgekGzoVlTdiNJrHAoHDQQFw0t6fI9EeMQCx7EpuL_wKU0Y6piIysawQ4hr_oMwWtC2QH6gyK4adkQqGDYjiEwvGxUMSPOkepGliQBE0RXbJcrPIGsFiwlRZxa4rbYJ-Wg4tkv3Xnc5-rzjWoB3fk0Bq-FYpQr9xthOix5NS2MlkfhXvNLRvSf6OdeKyjm6sCl4ot7bkVJDY6CFBnTixhZgO0aG-6MywQf2f2zdXl2GyT5YZv5MdOznoPKqnfRPBsncq0PcVKrf3-AnOA85RPNtmFBhrR4epelIr05sEHK65Pp00bJm7wwk7KWTLc8zeZeUPUaSesF04jRgvrUBl9GKhO0G82lGk7wGr78K7c8wyuTDpr_dtiRQp_i7LaIlDI91rhe2WrkjMCGIcoK2qV-8TN-du59G3fRaLl09KfmnJt2RbmyNSpzqcymUx5wqP8RquywfoTxxUc7GNQxk8xMoLHRvRIejd-nXTSiufTmRdDhIooK15JHpcJ1bcRIlV7kwzcAbsf12lNqWqMi17f-8PLVQgU6Z7qbZECcXQxeFMe3ig83US5gInVXGeBEokm0Ew9vglFE4eTEdvMAD-mg9yViIutnqThTmMwcf3icuPlakR55nF04HCIQjhx_p6xr3ofmU2844yCxXdOjDjMubXGTQnbjMosvWu_SMyaIBLA4OF_GTrkssO75szqqmenah-mov2PIYm5wNydPjZ59SXVZwGFZVzSj_ultmyufUwvIa8ZF9hBCyY9JvFuf7jwd2xDss_mdJ6ZZKrWVIn2wv-oT6DK8rtAqs8RI5tKMoNzhDySIOww7LNXdntu4rTP7Rsyyg3ZJeujVOPouQXCSs0fPtj5HlCC76VEaHL2mRENR0Cr3_omc3Lh7zvRC3P5gUFGemyUheDv3ALN_Hepe3_eFHO5uKypzrtyEGRPImF0K53RlM2FWzUUR9zUDUPtOZN1HbtXC4voDAzlVj39YJb9N7pNfOsrwflvW-dbwyh8Y9Z04vvRd3VC9vh6AGAI01G4Pw6xP_LH5joQDclEZJRw6Wuyn6f-7vdgQ_wHW3WyvbbPrRuqJJCwn_Y-Ahn7DHLuV6op7WIdYcbnX7hbckeKReEQqh53JJmNFn-BIrHB5pYC99Eq3CVi8P-fPPhAf0cEkUStFCLbMz3tZ6s32RyrvR9h4GE9weQG2-pnFW8X0h4KNhEcNRLcgxq9TFbHmJFZWxTMKhP5miO6Cyn9YHXsUZvxmcCEkeo=w810-h663)

### programa 6

A continuacion tenemos un programa que aprovecha muchas de las funciones de bash para poder crear un programa capaz de crear otros programas, en este caso se aprovecha la fucnion ```echo``` que escribe en el archivo out del sistema, pero en este caso direccionando su salida hacia un archivo, que en este caso es nombreado script$fecha.sh, el cual esta membretado con la fecha actual de creacion.
Finalmente con la funcion de chmod le otorgamos permsiso de ejecucion al programa.

```sh
#!/bin/sh
#
clear

fecha=`date +%Y%m%d%H%M` 

echo "========== Creando direcotrio scripts =========="

mkdir scripts

echo "========== Escribiendo programa =========="

echo "#!/bin/sh
#
clear

fecha=`date +%Y%m%d%H%M` 

echo "Escribiendo programa"

mkdir scripts

cd scripts

vim echo > script\$fecha.sh

chmod +x script\$fecha.sh

cd ..

ls /scripts" > ./scripts/script\$fecha.sh

echo "========== Cambiando permisos =========="

chmod +x ./scripts/script\$fecha.sh

ls ./scripts
```

A continuacion podemos ver la ejecucion de este programa.

![](https://lh3.googleusercontent.com/fife/AK0iWDxhSl1aWFq_gzJja3W7G2de-B5Z6xVYooWWCbrT-KU712c5T6P7pz2hAVnaaA9k_ES2l4Ts13uTQQuZQ-YALpQPLWjGHdJotv7JvloODcfByHr0aScR4anpVCwy7Jxv4DeKqjHPbjZeb077lxdn7HY32B6eVWRbkxHXPsz_6PKZblFFqBZp2KgsoodFYPs_1f8ePpLuCcu3h8e3h1wGyZH-DPq4Nejb1Zm4q6jXSObNd8Griygxy7ejL529n10MnKW58Sp9p-H2-ZKnHlo9hLMrkRQ7lWUj2gXiKHyPDlmLeHnKj5dL3s2AmWSvRIQ9bvrcGj-SA5JoqznMfUCCG5c7_Z5hluozbL4kV-Tb81_gfqMQ6hdUraWH9Bf1G4dNTXn4lrrL7Q4scLou4JhAxJcSjJvOlJ1xzL60CB6wmVfpPhFhMmtj0WPEZBywNWc_Kc2X17pJxYwo6_u_hvIt01V0_03KfK4rs-MTdAhOrbkBiWuNNSFlwRzNuD1MeK_jumJgSPuOMVjS45QKoqEnIdvR4o-8lgQ6B69UVgyUIdBP9pd9ghCOP8g4jiE-6-69TxosE7Y5r7-8c4EO6EjpUeq9TueHIlx2n_Yyf7m_JvMJsGO_BWLcjTgAaRHYum8STINoFtHsrWv52IaJiV6Rv44HK-Sj9-BeIVxI7h9cRe43eg-UaCJXItY7TMfUs_79OgPIRmiVrt8JYrzwCRbCZ6Cv4TzqVUNaZI9wlrSKq6gO1eEZ31cBmmKk2MGssWELrugKTS5TLBARlPbl_mRcTAZ6EVU50nAoVaOZj7bbReevvAJjqW0g295zYBKlQeD6k5WN73VTLqm7vLbxktHKR-avnaL6YrVGwGjJJeapYdf1JhQEPGO9B1ShnlGOwHOaO8FwiNtz6GmpxlY3UHPtSRk_1P_mD5VcnTONY1CHnZpQ10bu-xwRoPZvGTg9gKyYaZs_wXZQ8jTtL7P1fNzKEL-f6c3LUzs5bvldLYBq1cct8URRoWhbVPo9njkKoRd_bcPStiFL0hiIUNyPBwS9kfyYPWk978OP9xhbwZKBaEOLyz4mmld3HJbhWKa7zDzCADbR0xr1ake3RDuUeuzOlEKwSNdHVAVoWj5bPulcBOxh59wi5KfE9G7tRorleB_KAx5F8L9n6iTrnKchl5awsiHcVE-3aAZh4LqEyKuZ9Z4l1eDc6ZNzh3h_bRGUJaKcUyONNh3bVqojdKZYE8y3E9VEt2ugSRnV9RW7foh39NIqPBPCVLFDml2qAKrKdV3r7u9q2HYCFeeK_OtgYfhkyBzDn4pRLtXyntQ8xBZcRdB1ydxHaInpKHAwkccky8n78-n2h83MWqbxjH8lglz6T7GRC72LTSGt37KBtqCXNn6cDGU5uFtCfQHMugWZ-fiaWUokS1ty2hAM325ZmC03m3sS-FIKSNv5Il3AM1a-OuieA_YXLIQnWnmvu4-d-98-3crzvpG14kZbQNk7VKjsCGlBaK7-bpg56rwHe4Md9MNd5J0WyK668frSIA0klIX6FLfLXY9HtU18x7ojPRwQRo8hi3n9HYqynI3JmRflhIqhHpbU=w1365-h663)

### Programa 7

A continuacion tenemos un programa que nos permite leer ver una lista de todos los archivos y carpetas presentes en un directorio seleccionado pro el usuario.

```sh
#!bin/sh
#
clear

read search_dir

for entry in "$search_dir"/*
do
  echo "$entry"
done
```
A continuacion tenemos la ejecucion del programa.

![](https://lh3.googleusercontent.com/fife/AK0iWDw2ZmVkjlsM0g3sF5s7rxELzmWCiHBj7kq3Il1PTg9gGsTfSIEggYCcgOKN2vvPuQ8F8pXwS-n3q9ntrNz-iNfTXEOyuG_vhTZE6HPuKzZRZefEWhPSp7zaB5IVn5-9m7p39tHmXDobTgvFCFrOTIx8O4_K2BJYURlB6P868bK8qp1dZ8Gs9ZH93NfAQ5x_Y4xxcfBlJWhntgJmqeVKxWyN0dCeGN7Ms0Pp8rQscp0vgwOGuyBBP75m1OzogDM3dswMezk3gd7MFTlWg0gJi6VxAW50Umy_KvRWl6b0fJvZzbl_VFcF21ARejiRZKDeh_dZ-PgMjw2IRXGM97fBWHHKJNNq0DGFDOQKV6gYHExSDrkrLtWR2xaYmW4RpeAiWixUzJrGAUI985-rmQ4vI0Rge-zFMjFCKZTbiWbyTgakJCdgED5OH39koRO0t-YADzfPxzqFa38gY7FBfL2w6P-kVmcxsqV36yRBp1JnLIJAksKJ--mjuaWmUlgqsEuCop7tXd4qxqFUc72G6sTqT5-2T8e6gsTeu7fvYrnMqiNFDIa_wsuos0daDlK5_bcqqTT6go4VvrOU_yLiB7LmJCTJaWnoN0Nl1wu7E57kCfx9ie_Y5UEXWp0Mfy54_D9S5Hk8Kf_0mFEYLL5P5alia24UsBLDKSRKJobB8k_CJc8vnrhzSKHpJeJCthqHnaogktNLQOjfbizGnw2jWNbZo8VgZI7V8R8IW6gcxKFZtjhbztwi2xFljBTuWFqsrt-js63wysXro4cSXqZsiy2tKxssihtPZ5xLq8zcEBqPnRsZKIiw0vplCBSB0SD6EL1_COI6Mqz0x_fvsuU4P4o591_-mbcDb1N8iArpq2TQN3LW3NSNTmyHlDM1nsSr5w41E7vHfveAjsqywuo_KSG-S2PkCXuDSKSl6bcteMkfPlhBknLywMVVdFj3kYESteUgMf6yhg_HF952sM2ebXEX0CU6gd9kkqccPae2cwASQcVgjMyrOl4wBEDkm-fxcfnY4JEOSHhprOKRrv3vuE_DGsNhwRZKQJh5FfacSHrCmiBm8CdjYJCo-3iKYggEAgpjbO8M5UBQk1k_qARzWz4gztkn8iOGF-ebsZUDzU2ln6wHLDCizvckBoK1j7ugk4AHMNneSf-43xubaz077SXlOlX0NRmYdCA--drEW4VSe8t9-wTk5S7zYTnDqHcwi-Td_isA9d8tNcX0xkx5S17P1qtRod3Qw17QyPOXkJ_E4_RggU4l6QoGZ9GyI-3EtjgI6bp_c_6GLKAAE5IbngHlUnXAC9TQG46rjomxVN51ADtJ3ZNXWTfwTE9wICxfx8xTeD_Lxh06YCkVEb2MdHew8uReXlqOCM9PYZ7k_gN7NVhqdph06pQa5n-9Sm5PvIEQ7ye10lIfFiOIWetBY24Y0_Dkt8r0QGRlEyipo0r44USOvCCZTEFjZAs1HYRHWrbAicmMax9vaqBvNntO9mbaCbdeZGZhaA8jLfKr6B2a84SduhyacFphoeki30z60o5pvIRXnkWCFpcIGl_pB2ClSp5-TGJLgCkvut0VFndwaIvZ7B2J=w810-h663)

### Programa 7

A continuaicon tenemos el codigo de un programa que elimina de un directorio seleccionado por el usuairo todos los archivos que cumplan con un patron definido.

```sh
#!bin/sh
#
clear

read search_dir

for entry in "$search_dir"/*
do
    filter = ${entry:0:1}
    echo $filter
    if [[ $filter = "e" ]]
    then
        rm -r $entry
    fi
done
```

## Seccion de Windows
1.- Investigue los siguientes comandos: echo, del, date, tar, rar. Dé un resumen de sus características y funcionalidad.
| Comandos | Caracteristicas |
| - | - |
|Echo|Muestra mensajes o activa o desactiva la característica de eco de comandos. Si se usa sin parámetros, echo muestra la configuración de eco actual.|
|Del|Elimina uno o varios archivos. Este comando realiza las mismas acciones que el comando erase. El comando del también se puede ejecutar desde la Consola de recuperación de Windows mediante parámetros diferentes. |
|Date|Muestra o establece la fecha del sistema. Si se usa sin parámetros, date muestra la configuración de fecha actual del sistema y le pide que introduzca una nueva fecha.|
|Tar|El comando tar archiva y recupera archivos en y a partir de un solo archivo denominado tarfile. Un tarfile suele ser una cinta, pero puede tratarse de un archivo cualquiera.|
|Rar|RAR es un formato de compresión propietario, perteneciente a la empresa RarLabs Esto sirve para comprimir y descomprimir archivos en formato *.rar|

2.- Capture y ejecute el siguiente batch. Guarde el archivo con extensión .bat. Observe su funcionamiento y explique.
````bat
@echo off
rem
cls
rem
dir .\prueba
rem
del .\prueba
rem
dir .\prueba
rem
echo "------------------ Creando archivo: prueba ----------------"
rem
echo "Hola a todos" >> prueba
echo "Esto es una prueba" >> prueba
echo "De un batch" >> prueba
rem
dir .\prueba
rem
echo "------------------ Script terminado ----------------------"
type .\prueba
````
[![Captura-de-pantalla-2023-11-11-103903.png](https://i.postimg.cc/Pq2gpNdY/Captura-de-pantalla-2023-11-11-103903.png)](https://postimg.cc/5HQ7D4Y2)

3.- Capture y ejecute el siguiente batch. Sustituya las rutas utilizadas en el batch por las rutas que usted
utilice. Deberá tener instalado el programa Winrar para utilizar el comando rar en el script. Observe
su funcionamiento y explique.
````bat
@echo off
cls
echo "-------------- Captura fecha ---------------"
for /F "tokens=1,2,3 delims=/ " %%V in ('date /t') do set dia=%%V%%W%%X
set tiempo=%time%
for /F "tokens=1,2,3 delims=:." %%V in ("%tiempo%") do set tiempo=%%V%%W%%X
set fecha=%dia%%tiempo%
echo "-------------- Empacando ----------------"
tar -cvf .\respaldo%fecha%.tar .\directorio1 .\directorio2 .\directorio3
echo "-------------- Comprimiendo ----------------"
rar a -c- .\respaldo%fecha%.rar .\respaldo%fecha%.tar
echo "-------------- Enviando a otro directorio --------------"
copy .\respaldo%fecha%.rar .\respaldos\
echo "-------------- Descomprimiendo ------------------"
rar e -y .\respaldos\respaldo%fecha%.rar .\respaldos
echo "-------------- Desempacando ----------------"
tar -xvf .\respaldos\respaldo%fecha%.tar -C respaldos\
echo "-------------- Limpiando ------------------"
del .\respaldo%fecha%.rar
del .\respaldo%fecha%.tar
echo "-------------- Terminado ------------------"
````
4.- Capture y ejecute el siguiente script. Observe su funcionamiento.
````bat
@echo off
set /p Var1="Introduce valor del primer numero: "
set /p Var2="Introduce valor del segundo numero: "
if %Var1% LSS %Var2% echo %Var1% es menor que %Var2% & goto :seguir_if
echo %Var1% es mayor o igual que %Var2%
if %Var1% EQU 10 echo Fui un 10 & goto :salir
if %Var1% EQU 20 echo Fui un 20 & goto :salir
echo Fui otro valor
goto :salir
:seguir_if
for /L %%V IN (%Var1%,1,%Var2%) do (call :imprime_valor %%V)
goto :salir
:imprime_valor
echo contador=%1
goto :eof
:salir
pause
````
5. -Capture y ejecute el siguiente 
````bat
@echo off
echo Opciones:
echo Directorio
echo DirectorioExtendido
echo Salir
set /p Op="Opcion: "
for %%V IN (Directorio DirectorioExtendido Salir) do (call :opcion_elegida %%V)
goto :salir

:opcion_elegida
 if %Op%==Directorio dir & goto :salir
 if %Op%==DirectorioExtendido echo "Similar a dir" & goto :salir
 if %Op%==Salir goto :salir
echo "Opcion no encontrada"
goto :salir
:salir
 for %%V in (Hola como estan todos) do echo %%V
 pause
 exit(0) 
````
[![p5-batch.png](https://i.postimg.cc/pV4k5Vsg/p5-batch.png)](https://postimg.cc/YjNQJ7K3)
[![p5-1-batch.png](https://i.postimg.cc/23NSnfZ4/p5-1-batch.png)](https://postimg.cc/hQMnq6Mj)
6.- Programe un script para que descomprima en sus rutas originales los directorios que se han compreso con el anterior script.
````bat
@echo off
cls
set rar_path=C:\Program Files\WinRAR\WinRAR.exe
echo "-------------- Captura fecha ---------------"
for /F "tokens=1,2,3  delims=/ " %%V in ('date /t') do set dia=%%V%%W%%X
set tiempo=%time%
for /F "tokens=1,2,3 delims=:." %%V in ("%tiempo%") do set tiempo=%%V%%W%%X
set fecha=%dia%%tiempo% 
echo "-------------- Empacando ----------------"    
tar -cvf  .\respaldo%fecha%.rar  .\directorio1  .\directorio2  .\directorio3
echo "-------------- Comprimiendo ----------------"
"%rar_path%" a -c- .\respaldo%fecha%.rar .\respaldo%fecha%.tar
echo "-------------- Enviando a otro directorio --------------"
copy .\respaldo%fecha%.rar    .\respaldos\
echo "-------------- Descomprimiendo ------------------"
"%rar_path%" e -y .\respaldos\respaldo%fecha%.rar .\respaldos
echo "-------------- Desempacando ----------------"
tar  -xvf  .\respaldos\respaldo%fecha%.tar  -C  respaldos\
echo "-------------- Limpiando ------------------"
del .\respaldo%fecha%.rar
del .\respaldo%fecha%.tar
echo "-------------- Terminado ------------------"

````
7.- Programe un script genrador de scripts, es decir, que cree un archivo, que posteriormente permita editarlo y que finalmente cambie los permisos para ejecución del archivo, mandando a jecturar el script desde el script original.
8.- Programe un script a través de las estructuras de control de flujo para que permita visualizar los archivos de un directorio que se envíe como argumento de entrada (no utilizar el comando ls). Además, el script deberá mostrar el número total de archivos en el directorio.
9.- Programe un script que elimine todos los archivos de un directorio especificado desde el propio script, y cuyo segundo carácter sea la letra “e”. 
###
