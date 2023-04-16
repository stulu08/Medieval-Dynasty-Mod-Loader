#include <stdlib.h>
#include <stdio.h>
#include <iostream>
$loc = Get-Location

foreach($file in Get-ChildItem -Path $loc -Directory)
{
	$text = "#include `"" + $file.ToString() + "/" + $file.ToString() + "_SDK.h`""
	Add-Content -Path "SDK_.h" $text
	Write-Host $text
}