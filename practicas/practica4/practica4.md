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
tar  -cvf  ./respaldo$fecha.tar   /home/Jorge/directorio1   /home/Jorge/directorio2   /home/directorio3 
# 
echo "-------------- Comprimiendo ----------------" 
bzip2  ./respaldo$fecha.tar 
# 
echo  "-------------- Enviando a otro directorio --------------" 
cp  ./respaldo$fecha.tar.bz2   /home/Jorge/respaldos 
# 
echo  "-------------- Descomprimiendo ------------------" 
bunzip2  /home/Jorge/respaldos/respaldo$fecha.tar.bz2 
# 
echo  "-------------- Desempacando ----------------" 
tar  -xvf   /home/Jorge/respaldos/respaldo$fecha.tar 
# 
echo  "-------------- Limpiando ------------------" 
rm  -f  ./respaldo$fecha.tar.bz2 
rm  -f  ./respaldo$fechar.tar 
# 
echo  "-------------- Terminado ------------------"
```