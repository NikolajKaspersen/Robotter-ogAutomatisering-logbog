# Robotter-ogAutomatisering-logbog
## Tirsdag d. 22 Aug
Begyndte med en indledning til brugen af Visual Studio Code (VSC) til at programmere de mikroprocessorer (MP), der var blevet udleveret i klassen. I VSC anvendte vi PlatformIO, en integreret udviklingsmiljø, der giver adgang til MP'ens infrastruktur, så vi kunne styre dens pins og porte direkte i koden.

Vi udviklede et program kaldet "MyFirstBlink," som gjorde det muligt at få den indbyggede diode på MP'en til at blinke med det interval, der var defineret i koden. Senere fik vi en ny MP med to indbyggede dioder, og vores næste opgave var at få dem til at blinke på skift samt at undersøge C++-klasser.

## Fredag d. 25 Aug.
Gennemgik opgaven fra den første dag, hvor vi opnåede succes med at få begge dioder til at blinke på skift. Samtidig blev det understreget, at vi ikke skulle anvende funktionen 'delay()' i fremtidige opgaver.

<img src = "https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/6608d27e-1647-4152-9bd8-a723e4716245" width = "500" hight = "500">

<img src = "https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/80b1bd57-a6b4-4774-997e-70f42fefbcea)" width = "500" hight = "500">

Vi blev præsenteret for et trafiklyssignal og dets forskellige tilstande, som vi skal arbejde med i den kommende lektion og forsøge at implementere på vores NodeMCU ved hjælp af kodning.

<img src = "https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/08c0334f-8356-4344-b06c-9e1d8b7e917f)" width = "500" hight = "500">

## Tirsdag d. 29 Aug.
Vi modtog en knap, som vi skulle bruge til at registrere et knaptryk, der kunne registreres af MCU'en til udførelse af forskellige funktioner. Vi indledte med at teste forbindelsen mellem dioder i forskellige farver, breadboard og MCU, som er nødvendige komponenter til trafiklyset.

https://user-images.githubusercontent.com/99390466/273398106-f39c9fa6-59bf-400c-a5b4-4bc93065ff34.mp4

Desuden arbejdede vi med integrationen af en Buzzer på vores breadboard og havde til hensigt at få den til at spille forskellige toner og melodier i den kommende lection.

## Torsdag d. 31 Aug.
Vi etablerede en forbindelse mellem buzzeren og knappen, så den registrerede hvert knaptryk og fik buzzeren til at afgive en lyd som ønsket. Dog lykkedes det ikke at implementere funktionen, hvor buzzeren skulle spille forskellige melodier og skifte ved hvert knaptryk.

https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/9ffb5cb7-9f0e-42e8-b2f5-e6032a6edf1e

Samtidig blev trafiklysprojektet afsluttet og godkendt af Tobias som et velfungerende trafiklys.

https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/51ad326c-074c-4e62-93b2-494f93d39272




## Tirsdag d. 4 Sep.
Vi fik en introduktion til principperne bag 3D-modellering og -udskrivning ved hjælp af et program, som Tobias havde udviklet. Dette program oversatte Java-kode til 3D-objekter, som derefter blev visualiseret med et andet program, OpenSCAD. På dette tidspunkt var objekterne teoretisk klar til 3D-udskrivning.

Som "lektie" blev vi bedt om at tegne et objekt, som skulle være egnet til 3D-udskrivning inden næste session, men dette viste sig at være en udfordring, og resultatet var ikke særlig vellykket.

<img src = "https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/d79650e6-e601-4ce8-bfae-19fd15cb28b0" width = "500" hight = "500">

<img src = "https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/97a77a0b-9294-4770-91f8-13221f417c22" width = "500" hight = "500">

## Torsdag d. 7 Sep.
Vi fik en gennemgang fra Tobias, hvor han anvendte Java CSG til at tegne en holder til vores NodeMCU. Dette design blev vist i OpenSCAD. Vi lykkedes at 3D-udskrive holderen, selvom den havde nogle mindre målingsfejl.

<img src = "https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/55a3eaf7-b70a-49ad-9797-17f82b06b596" width = "500" hight = "500">


## Tirsdag d. 12 Sep.
Jeg var syg og var der ikke.

## Fredag d. 15 Sep.
Vi blev introduceret til 3D-udskrivning af et clipsystem, som kunne bruges til at forbinde brikker af forskellig størrelse og funktioner. Dette projekt var beregnet til hele klassen, og målet var at samarbejde om at 3D-udskrive et tog og skinner, som toget kunne køre på.

## Tirsdag d. 19 Sep.
Vi har arbejdet på at oprette en brugerflade (interface) i OpenSCAD for at forenkle genbrug af tidligere projekter og muliggøre en nem ændring af størrelser.

## Fredag d. 22 Sep.
Gruppen blev enig om at lave en Wi-Fi-styret bil ved at kombinere NodeMCU og en TT-motor. Vi anvendte en ESP12E motor shield brugte 8 AA-batterier som strøm forsyning. Der blev udtænkt forskellige idéer til bilens funktioner og design.

<img src = "https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/ec067bcf-3930-45b1-aea0-524224d7ddf7)" width = "500" hight = "500">

## Tirsdag d. 26 Sep.
Denne uge har vi arbejdet på at udarbejde skitser af, hvordan bilen skal se ud, og fastlagt de mål, som bilen skal opfylde.
<img src = "https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/a66e8fff-9227-40d7-a13c-1086545117c2" width = "500" hight = "500">

Chris var hjemme og lavede hjulene til bilen.

<img src= "https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/7ff4cd0a-61e2-4e81-9463-13ccc1804f51" width = "500" hight = "500">

## Fredag d. 29 Sep.
Jeg arbejdede med at oprette en boks i JavaCSG, men stødte på nogle udfordringer med programmet og brugte størstedelen af dagen på at forsøge at lave boksen. Gruppen besluttede derefter, at vi fremover ville skifte til at bruge Fusion 360 som vores primære 3-D værktøj til projektet.

![billede](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/91b6488a-dbc3-4943-8fb3-1bbe6217fe84)

Gruppen lykkedes med at få begge motorer til at "køre," hvilket gjorde dem klar til at blive installeret i bilens krop

![276351606-04f7828e-29ee-47d3-9bb9-2a79c59beafe](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/0b60085a-1bef-46bf-bcde-e839afcfe150)


## Tirsdag d. 3 Okt.
På grund af en fejl i kommunikationen endte det med, at Arsim var den eneste, der mødte op på skolen, mens Chris var en time forsinket.

I dag skiftede vi til Autodesk Fusion 360 og jeg fik oprettede en simpel boks, som skal indeholde NodeMCU'en og motoren.
 
<img width="843" alt="273140680-14f95483-39f1-45f7-a844-15a16cc56191" src="https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/da631e69-e881-4b52-bb8a-08271f6b1a17">
Her er resultatet af 3D-udskrivningen af boksen. Det ser ud til, at boksen blev for lille, som det kan ses på billedet, hvilket kom af at vi brugte
NodeMCU'en og motorkontrollerens ydre mål som indre mål.

![276357575-e6f7f19b-7259-47ed-842c-ba45fa33777a](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/23c20420-9fab-47c3-817e-fae5420c3676)


Senere blev der udtænkte en ny form til vores bil, hvor hjulene kunne placere tættere på spidserne. Dette skulle sikre, at komponenterne inde i boksen ville sidde bedre fast.

![276357247-9228623d-0db3-42a2-8364-b38e1ea3ac1a](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/38c5eb7d-5685-464d-b4c6-79fc16761682)


Det aflange hul øverst ville gøre det muligt at sænke motoren ned i kroppen oppefra, mens det runde hul i bunden ville passe til akslerne på hjulene og sørge for, at de sad fast uden brug af lim eller klips.

Efter nogle iterationer med nye målinger kom Chris frem til denne form for karosseriet, som havde plads til alle bilens komponenter.
![276359483-c3af921a-4a49-46c0-a48e-8ec509399c1a](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/81b14af8-df1a-4d8e-b55e-152b20ba420d)


## Fredag d. 6 Okt.
I dag har jeg arbejdet på at modellere bilens hjul. Jeg begyndte med at lave et udkast til hjulet i Fusion 360, og Chris arbejdede videre med det.
udkast
![billede](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/6f0146cb-393b-4ff7-89ef-3aad0d9cfce5)
færdig
![billede](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/73db8ca6-24b4-4952-830d-4d95a3553e9a)
og tegningen af sketchen
![billede](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/44efcdfd-575c-4a61-9839-bdc2711c5127)

Arsim fandt også ud af, at han ikke kunne få begge motorer til at køre uden en direkte forbindelse til en computer. Dette førte til ændringer i bilens krop, så det kun var nødvendigt at have plads til en motor i kroppen, med et hul i den anden ende til hjul og aksler.

![276364987-6ab7f096-25a5-44c2-9b45-341c19175f08](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/11c18307-f583-40f9-81d0-9e946fd7355c)


## Tirsdag d. 10 Okt.
På grund af sygdom var gruppen nødt til at blive hjemme, men vi arbejdede i små grupper og fuldførte de enkelte elementer, som endnu ikke var færdige.


## Fredag d. 13 Okt.
Vi Started dagen ud med at 3d printe et hjul for at se hvordan det ville se ud i virkelighed.

![20231013_100447](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/d88bc40f-8d03-4a5b-8602-4556065d03ab)

derefter printede vi billen for at se, hvordan den ville passe sammen med hjullet og hvis det ikke gjorde rette det til og printe den igen.

![20231013_125032](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/f0867c73-d6fe-4aaa-8a82-51c62d3df92c)

den passed ikke helt så vi rettede den til og begyndte at sætte hjul og motor på.

![billede](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/f535624c-3c69-4998-8200-095387cfef7e)

på grund af en dårlig print af hjullene passede de ikke helt arsim sagde at han kunne fikse det der hjemme hvilket han jorde. Her er en video af billen hvorden kører

https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/9f80b235-9b2a-4c21-bfbf-764f33eaab42




