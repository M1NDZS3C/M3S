#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/time.h>
#include <conio.h>
#define TRUE 1
#define FALSE 0
void clear(void);
void vulna(void);
void info(void);
void SnMp(void);
void setoolkit(void);
void msfcli(void);
void misc(void);
void ora_doda(void);
void amap();
void msfcli(void);
void misc(void);
void dns_disc(void);
void harv(void);
void service(void);
void locally(void);
void attack_vector(void);
void johnny(void);
void hashid(void); 
void lsa(void);
void exploitation(void);
void scapy(void);
void os(void);
void hydra(void);
void ms08(void);
void ms12(void);
void java7(void);
void ms03(void);
void ms121(void);
void ms0504(void);
void msINF(void);
void ms06(void);
void msphp(void);
void msapach(void);
void misc(void);

void instalimet(void)
{
char command[9999];
printf("\n\tM3S >> MAKING INSTALLATIONS OF SOFTWARE-S << \n\n");
strcpy( command, "apt-get install -y nmap hping3 metasploit xprobe theharvester whois amap snmpcheck dnswalk dnsmap dnsenum dnstracer dnsrecon fierce sslscan bed golismero nikto unicornscan wapiti whatweb wpscan joomscan john hydra-gtk");
system(command);

}
