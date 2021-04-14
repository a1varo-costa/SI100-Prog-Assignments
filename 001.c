/**
 * 	Assignment 001 - printf
 *
 * A demonstration of the use of 'printf' function printing an
 * ASCII art.
 *
 * Author: Álvaro A. Costa
 */

#include <stdio.h>

int main(void)
{
	const char *art = \
"                                o$o\n"
"                                $  \"o        o$o\n"
"                 o              $    \"o     o\" \"o   o\n"
"                 \"$$\"\"\"ooooo    $      \"o  o\"   \"o $ $  $\n"
"                   \"$oo    \"\"$o $        \"o\"     \"o\" \"o $      oo\n"
"                      \"\"\"oo   \"\"$o        \"\"      \"   \"o$o oo\"\"  $\n"
"                          \"$oo   \"                   $\"\" \"\"   ooo$\n"
"                  ooooooooo    oooooo\"\"\"\"           $   o       \"\"\"\"oo\n"
"         \"\"\"\"\"\"\"\"\"        \"\"                        $   $$  $  \"ooo  $\n"
"                 o                          \"\"\"oo  $   o\" $o\"$   $ \"\"\n"
"         oooooo$\"$\"\"\"\"\"\"                    ooo   o\"   $     \"ooo\"\n"
"                 $                             \" o$   $\n"
"                 $                         ooo$$$$\"  o\"\"\"o\n"
"                 $          ooooooo  ooo$$$\"\"\"o$\"$   $   $\n"
"                 \"o      oo$\"ooooo$$$\"\"\"   oooo o\"  o\"   $\n"
"                 o$o\"\"\"$o$$$\"\"\"$$$$$      o\"   \"\"\"\"\"$oo$\"\n"
"                $oo$$$\"$$\"$$   $$$$$      $oo           \"$\"\n"
"                $$$$$  $$o$$$$$$$$\"      $   \"\"\"\"oooo   o\"\n"
"                 $$$$$$$\"   \"\"\"\"\"  oo    $o          \"\"$\n"
"                  \"$\"\" $            $   $  \"\"\"oo      $\n"
"                   $   \"\"ooo\"\"     o\"  o\"\"oo    \"\"\"oo\"\n"
"                   $            oo\"    $    \"\"\"oo  o\"\n"
"         oooooo    $       \"\"\"\"\"      \"\"oo       $\"\n"
"     o\"\"\"     \"\"o   $oo       ooooo\"\"\"    \"\"\"oo  $\n"
"     $oo\"\" o\"   \"o     \"$$$\"\"\"     \"\"\"ooo      $\"\n"
"     o\"   $   $  \"o   o\"o  \"\"\"oooo       \"\"oo  $\n"
"     $   $$  o\"o  \"o $ $          \"\"\"ooo     \"$\n"
"      \"\"\"  \"\"  $    \"\"o$                \"\"\"\"oo\"\n"
"                $   o $\"\"\"\"\"\"\"\"\"\"\"ooooooo    $\n"
"                 \"o\" o\"                 \"\"$o$\n"
"                     $\"\"\"\"\"\"\"\"\"\"$oooo       $\n"
"                     $              \"\"\"$oo  $\n"
"                     $\"\"\"\"\"\"\"oooooooooo  \"\"\"$\n"
"                     $                 \"\"\"oo$\n"
"                     $\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"oooo  $\n"
"                      $   oooooooooooo    \"o $\n"
"                      $\"\"\"oooooooooooo\"\"\"\"oo$$oo\n"
"                       o$$$$$$$$$$$$$$$$$$o$$$$$o$\"\"$o\n"
"                       $$$$$$$$$$$$$$$$$$$$$$$$$$o   $\n"
"                        \"$$$$$$$$$$$$$$$$$$$$$$\" o\"  $\n"
"                           \"$$$$$$$$$$$$$$$$$$\"o\"  o$\n"
"                            $\"ooooo\"\"\"$\"oooooo\"   \"\"\n"
"                             $       $          $\n"
"                              $o      $o      o\"\n"
"               $$$$$$$$$$$$$$$$\"$ooo$\"\" \"ooo\"\"$$$$$$$$$$$$$$$$$$$$$$$$$$\"         Fonte: http://bit.ly/2W7Udd7\n";

	printf("%s", art);
}
