#include <stdio.h>
#include "MobileDevice.h"
#include <CoreFoundation/CoreFoundation.h>

#define RESTORE 1
#define UPDATE 2

int MODE;
int custom;
int verbose;
char* ipsw;
char* signingServer = "http://gs.apple.com";
Boolean cf = false;
Boolean updateBB = true;