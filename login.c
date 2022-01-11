#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
int main()
{ printf("*******------------------------------------WELCOME------------------------------------*******");
  printf("\n1.LOGIN\n");
  printf("2.REGISTER\n");
  int x;
  printf("Choose-"); 
  scanf("%d",&x);
     switch (x)
     {
     case 1:
            printf("\t--------------------Login--------------------\n");
        login();
        menu();
         break;
     
      case 2:
          printf("\t--------------------Register--------------------\n");
          reg();menu();
         break;
     }
     return 0;
}
     int menu(){
         printf("------------------------------MAIN MENU------------------------------");
      printf("\n1.Cyber Security\n");
      printf("2.Ethical Hacking\n");
     int y;
     printf("Choose-");
     scanf("%d",&y);
     
      switch(y)
      { 
          case 1:
          printf("\t----------------Cyber Security------------------\t\n");
          cyber();
          break;
          case 2:
          printf("----------------Ethical Hacking------------------");
          eth();
          break;
      }

  return 0;
}
int login(char username,char password;)
{
    
  char username[30];
  char password[30];

  printf("Username-");
  scanf("%s",&username);
  printf("Passworrd-");
  scanf("%s",&password);

  if(strcmp(username,"user")==0)
  {
      if(strcmp(password,"default")==0)
      {
          printf("User Successfully Logged in.......\n");
      }
      else{
          printf("password is invalid");
      }
  }
       return 0;  
}
     int reg (char Name,char username,char password,char email_id;)
 {
     char Name[30];
     char username[30];
     char password[30];
     char email_id[30];
     char user[30];
    char pass[30];
     printf("Name-");
     scanf("%s",&Name);
     printf("Email-");
       scanf("%s",&email_id);
     printf("Username-");
       scanf("%s",&username);
       printf("password-");
         scanf("%s",&password);
         
         printf("You Have Been Registered Successfully.......\n");
          
 printf("--------------------Login--------------------\n");
  printf("Username-");
  scanf("%s",&user);
  printf("Passworrd-");
  scanf("%s",&pass);
   
  if(strcmp(username,user)==0)
  {
      if(strcmp(password,pass)==0)
      {
          printf("User Successfully Logged in.......\n");
      }
      else{
          printf("Username or Password is incorrect\n");
      }
           
  }
   return 0;
 } 
  int cyber()
  {
        printf("Cyber security is the practice of defending computers, servers, mobile devices,electronic systems, networks, and data from malicious attacks.It's also known as information technology security or electronic information security. The term applies in a variety of contexts, from business to mobile computing, and can be divided into a few common categories.");
          jump:
          printf("\t\n----------------Cyber Security------------------\t\n");
          printf("\n1.Cyber Security Domains\n");
           printf("2.Cybersecurity Myths\n");
           printf("3.Common Cyber Threats\n");
           printf("4.Key cybersecurity technologies and best practices\n");
           printf("5.Go back to main menu\n");
           printf("6.Exit");
           printf("\nChoose-");
           int z;
           
           scanf("%d",&z);
           
           switch(z)
           {
               case 1:  
                   printf("\t**********--------------------Cyber Security Domains--------------------**********\n");
                  
                   break;
                case 2:
                   printf("\t**********--------------------Cybersecurity Myths--------------------**********\n");
                   
                   break;
                case 3:
                   printf("\t**********--------------------Common Cyber Threats--------------------**********\n");
                   
                   break;
                case 4:
                   printf("\t**********--------------------Key cybersecurity technologies and best practices--------------------**********\n");
                   break;
                  case 5:  
                   menu();
                   break;

                  case 8:
                    exit(0);
                    
                default:
                 printf("Wrong input choose again..");
                
                
               
               
                 

                    }
           if(z==1){
            
                    printf("\n\n-->Critical infrastructure security practices for protecting the computer systems, networks, and other assets that society relies upon for national security, economic health, and/or public safety. ");
                    printf("\n\n-->Application security - processes that help protect applications operating on-premises and in the cloud.");
                    printf("\n\n-->Network security - security measures for protecting a computer network from intruders, including both wired and wireless (Wi-Fi) connections.");
                    printf("\n\n-->Cloud security - specifically, true confidential computing that encrypts cloud data at rest (in storage), in motion (as it travels to, from and within the cloud) and in use (during processing) to support customer privacy, business requirements and regulatory compliance standards.");
                    printf("\n\n-->Information security - data protection measures, such as the General Data Protection Regulation or GDPR, that secure your most sensitive data from unauthorized access, exposure, or theft.");
                    printf("\n\n-->End-user education - building security awareness across the organization to strengthen endpoint security. ");
           }


                
            else if(z==2)
            {
                printf("\n-->Cybercriminals are outsiders\n-->Risks are well-known\n-->Attack vectors are contained\n-->My industry is safe");
            }
            else if(z==3)
            {
               printf("\n-->Malware\n-->Ransomware\n-->Phishing / social engineering\n-->Insider threats\n-->Distributed denial-of-service (DDoS) attacks\n-->Advanced persistent threats (APTs)\n-->Man-in-the-middle attacks");
           }
            else if(z==4)
            {
                printf("\n-->Identity and access management (IAM) defines the roles and access privileges for each user, as well as the conditions under which they are granted or denied their privileges.\n-->A comprehensive data security platform protects sensitive information across multiple environments, including hybrid multicloud environments\n-->Security information and event management (SIEM) aggregates and analyzes data from security events to automatically detect suspicious user activities and trigger a preventative or remedial response. ");
            
           }
           goto jump;
           return 0;
  }
  
   int eth()
   {   printf("\nEthical hacking involves an authorized attempt to gain unauthorized access to a computer system, application, or data. Carrying out an ethical hack involves duplicating strategies and actions of malicious attackers. This practice helps to identify security vulnerabilities which can then be resolved before a malicious attacker has the opportunity to exploit them.\n");
       skip:
       printf("\t\n----------------Ethical Hacking------------------\n");
       printf("1.Types of Ethical Hacking\n2.Types of Hackers\n3.Importance of Ethical Hacking\n4.Phases of Ethical Hacking\n5.Some Tools For Hacking.\n6.Some Incidents.\n7.Go back to main menu\n8.Exit");
       int k;
       printf("\nChoose-");
       scanf("%d",&k);
       
       switch(k)
       {
           case 1:
           printf("\n\t**********--------------------Types of Ethical Hacking--------------------**********\n");
           break;
           case 2:
           printf("\t**********--------------------Types of Hackers--------------------**********\n");
           break;
           case 3:
           printf("\t**********--------------------Importance of Ethical Hacking--------------------**********\n");
           break;
           case 4:
           printf("\t**********--------------------Phases of Ethical Hacking--------------------**********\n");
           break;
           case 5:
           printf("\t**********---------------------Some Tools For Hacking------------------------**********\n");
           break;
           case 6:
           printf("\t**********---------------------Some Incidents-----------------------**********\n");
           break;

           case 7:
           menu();
           break;
           case 8:
           exit(0);

           default:
           printf("Wrong Input");
           
       }
       if(k==1)
       {
           printf("\nWeb Application hacking\nSystem Hacking\nWeb Server Hacking\nHacking Wireless networks\nSocial Engineering");
       }
       else if(k==2)
       {
         
          printf("\n White Hat Hackers\n--->White hat hackers, also known as ethical hackers, are cybersecurity experts who assist the government and businesses by performing penetration testing and identifying security flaws.");
          printf("\nBlack Hat Hackers\n--->These days, black hat hackers are the main perpetrators of cybercrime. The majority of the time, the agenda of a black hat hacker is monetary.");
          printf("\nGrey Hat Hackers\n--->Grey Hat Hackers fall in between white and black hat hackers. Grey hat hackers may not use their skills for personal gain, they can however have both good and bad intentions.");
       }
       else if(k==3)
       {
           printf("\n-Testing password strength\n-Ensuring security settings and privilege levels in the domain account and database administration by testing out exploits\n-Penetration testing after every software update/upgrade or after adding a new security patch\n-Ensuring that data communication channels cannot be intercepted\n-Testing validity of authentication protocols \n-Ensuring security features in applications, which protect organizational and user databases\n-Defense against denial-of-service attacks\n-Network security and testing of anti-intrusion features");
       }
       else if(k==4)
       {
          printf("\nReconnaissance:- Before executing any hack, you need to gather some preliminary information about the target system.\nScanning:As a hacker, you can take advantage of this factor and focus on gaining unauthorized access to the network of the target host. In this process, the network topology and vulnerable ports are revealed. \nGaining Access: The two aforementioned steps complete the information gathering phase. Now, based on that information, you need to start your hack. This step involves breaking into the target system by cracking the password or bypassing the security measures.\nMaintaining access: After gaining access, you need to ensure that once you are done with your first session, you are able to retain access to the target system.\nClearing tracks: After finishing up with the attack or hack, it is important to remove the traces of your incursion. This step involves removing any backdoors, executables, or logs that may lead to the attack being traced back to you or found out in the first place.");
       }
       else if(k==5)
       {
           printf("1. John the Ripper\n--->John the Ripper is one of the most popular password crackers of all time\n");
           printf("2. Metasploit\n--->Metasploit is an open source cyber-security project that allows infosec professionals to use different penetration testing tools to discover remote software vulnerabilities.\n");
           printf("3. Nmap\n--->Nmap (Network Mapper) is a free open source security tool used by infosec professionals to manage and audit network and OS security for both local and remote hosts. \n");
           printf("4. Wireshark\n--->Wiresharkis a free open-source software that allows you to analyze network traffic in real time.\n");       
           printf("5.Maltego\n--->Maltego is the perfect tool for intel gathering and data reconnaissance while you are performing the first analysis of your target.\n");
           printf("6.Burp Suite\n--->Burp Suite may well be one of the most popular platforms used in the security testing and bug bounty hunting industry today.\n ");      
        }
       else if(k==6)
       {
           printf("The Home Depot Hack\n--->By tinkering the Microsoft operating system and exploiting that Microsoft couldnt react and patch its servers fast enough, a group of hackers performed the largest credit card breach in our history.\n");
           printf("\nWannaCry ransomware attack\n--->The WannaCry ransomware attack was a worldwide cyberattack in May 2017 by the WannaCry ransomware cryptoworm, which targeted computers running the Microsoft Windows operating system by encrypting data and demanding ransom payments in the Bitcoin cryptocurrency.\n");        
           printf("\nFacebook\n-->Even big social media platforms can get hacked. On September 27th, Facebook was breached when hackers exploited three bugs that put at least 50 million users data at risk\n");
           printf("\nAdobe was going through hell\n--->Adobe announced in October 2013 the massive hacking of its IT infrastructure. Personal information of 2.9 million accounts was stolen (logins, passwords, names, credit card numbers and expiration dates). Another file discovered on the internet later brought the number of accounts affected by the attack to 150 million (only 38 million active accounts).");
       }
        goto skip;
       return 0;
   }

  