# Robotter-ogAutomatisering-logbog
## 22-8-2023
Begyndte med en indledning til brugen af Visual Studio Code (VSC) til at programmere de mikroprocessorer (MP), der var blevet udleveret i klassen. I VSC anvendte vi PlatformIO, en integreret udviklingsmiljø, der giver adgang til MP'ens infrastruktur, så vi kunne styre dens pins og porte direkte i koden.

Vi udviklede et program kaldet "MyFirstBlink," som gjorde det muligt at få den indbyggede diode på MP'en til at blinke med det interval, der var defineret i koden. Senere fik vi en ny MP med to indbyggede dioder, og vores næste opgave var at få dem til at blinke på skift samt at undersøge C++-klasser.

## 25-8-2023
Gennemgik opgaven fra den første dag, hvor vi opnåede succes med at få begge dioder til at blinke på skift. Samtidig blev det understreget, at vi ikke skulle anvende funktionen 'delay()' i fremtidige opgaver.
![273395411-de14a41b-4608-4867-aae2-3b4bdd9d82aa](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/6608d27e-1647-4152-9bd8-a723e4716245)
![273395441-d54939ce-005c-443e-8f60-e0a2e93bed2e](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/80b1bd57-a6b4-4774-997e-70f42fefbcea)
Vi blev præsenteret for et trafiklyssignal og dets forskellige tilstande, som vi skal arbejde med i den kommende lektion og forsøge at implementere på vores NodeMCU ved hjælp af kodning.
![273395539-4cd46835-9cc6-47fd-b52a-2e8a2eb95633](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/08c0334f-8356-4344-b06c-9e1d8b7e917f)

## 29-8-2023 (Knapper)
Vi modtog en knap, som vi skulle bruge til at registrere et knaptryk, der kunne fortolkes af MCU'en til udførelse af forskellige funktioner. Vi indledte med at teste forbindelsen mellem dioder i forskellige farver, breadboard og MCU, som er nødvendige komponenter til trafiklyset.

https://user-images.githubusercontent.com/99390466/273398106-f39c9fa6-59bf-400c-a5b4-4bc93065ff34.mp4

Desuden arbejdede vi med integrationen af en summer på vores breadboard og havde til hensigt at få den til at spille forskellige toner og melodier i den kommende session.

## 31-8-2023 (Trafik lys projekt - FINISHED)
Vi etablerede en forbindelse mellem buzzeren og knappen, så den registrerede hvert knaptryk og fik buzzeren til at afgive en lyd som ønsket. Dog lykkedes det ikke at implementere funktionen, hvor buzzeren skulle spille forskellige melodier og skifte ved hvert knaptryk.

https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/9ffb5cb7-9f0e-42e8-b2f5-e6032a6edf1e

Samtidig blev trafiklysprojektet afsluttet og godkendt af Tobias som et velfungerende trafiklys.

https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/51ad326c-074c-4e62-93b2-494f93d39272




## 4-9-2023 
Vi fik en introduktion til principperne bag 3D-modellering og -udskrivning ved hjælp af et program, som Tobias havde udviklet. Dette program oversatte Java-kode til 3D-objekter, som derefter blev visualiseret med et andet program, OpenSCAD. På dette tidspunkt var objekterne teoretisk klar til 3D-udskrivning.

Som "lektie" blev vi bedt om at tegne et objekt, som skulle være egnet til 3D-udskrivning inden næste session, men dette viste sig at være en udfordring, og resultatet var ikke særlig vellykket.
![275785031-bdcb9d4b-bd87-4927-8c78-1287b2455a34](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/d79650e6-e601-4ce8-bfae-19fd15cb28b0)

![276563282-7b7f42ec-62c2-4bf0-b2e9-e1fd5ca0ddb0](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/97a77a0b-9294-4770-91f8-13221f417c22)

## 7-9-2023 
Vi fik en gennemgang fra Tobias, hvor han anvendte Java CSG til at tegne en holder til vores NodeMCU. Dette design blev vist i OpenSCAD. Vi lykkedes at 3D-udskrive holderen, selvom den havde nogle mindre målingsfejl.
![267251596-0ead7ef5-2cf8-49ac-a1bc-1bea92d6a363](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/55a3eaf7-b70a-49ad-9797-17f82b06b596)


## 12-9-2023 
Vi skulle som klasse lave en hel tog skinne system sammen. Vi vil blive delt ud i vores grupper, hvor hver gruppe skal fokusere på en specific del af systemet.

## 15-9-2023
Vi blev introduceret til 3D-udskrivning af et clipsystem, som kunne bruges til at forbinde brikker af forskellig størrelse og funktioner. Dette projekt var beregnet til hele klassen, og målet var at samarbejde om at 3D-udskrive et tog og skinner, som toget kunne køre på.

## 19-9-2023
Vi har arbejdet på at oprette en brugerflade (interface) i OpenSCAD for at forenkle genbrug af tidligere projekter og muliggøre en nem ændring af størrelser.

## 22-9-2023 Bil projekt
Gruppen enedes om at 3D-udskrive en bil med to motorer, der kunne drive hjulene. Der blev udtænkt forskellige idéer til bilens funktioner og design.
![269887508-a318266c-124b-441e-af3f-fac806f4c655](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/ec067bcf-3930-45b1-aea0-524224d7ddf7)

## 26-9-2023
Denne uge har vi arbejdet på at udarbejde skitser af, hvordan bilen skal se ud, og fastlagt de mål, som bilen skal opfylde.
![273142652-68580c9f-0245-42f8-84a8-164f3ae4488d](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/a66e8fff-9227-40d7-a13c-1086545117c2)
Chris var hjemme og lavede hjulene til bilen.
![billede](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/7ff4cd0a-61e2-4e81-9463-13ccc1804f51)

## 29-9-2023
Jeg arbejdede med at oprette en boks i JavaCSG, men stødte på nogle udfordringer med programmet og brugte størstedelen af dagen på at forsøge at lave boksen. Gruppen besluttede derefter, at vi fremover ville skifte til at bruge Fusion 360 som vores primære 3-D værktøj til projektet.
![billede](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/91b6488a-dbc3-4943-8fb3-1bbe6217fe84)

## 03-10-2023
I dag skiftede vi til Autodesk Fusion 360 og oprettede en simpel boks, som skal indeholde NodeMCU'en og motoren.

Her er et billede, der viser modellen i Autodesk Fusion 360: 
<img width="843" alt="273140680-14f95483-39f1-45f7-a844-15a16cc56191" src="https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/da631e69-e881-4b52-bb8a-08271f6b1a17">
Her er resultatet af 3D-udskrivningen af boksen. Det ser ud til, at boksen blev for lille, som det kan ses på billedet, hvilket kom af at vi brugte
NodeMCU'en og motorkontrollerens ydre mål som indre mål.
![273139999-10528d3a-f71d-4495-b023-03647de9f3a6](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/f0f054f2-4c11-48bf-8b1b-d10cea859022)
Senere udtænkte vi en ny form til vores bil, hvor hjulene kunne placere tættere på spidserne. Dette skulle sikre, at komponenterne inde i boksen ville sidde bedre fast.
![billede](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/56e42185-685e-43b2-83e7-ffd37e82f6bc)

## 06-10-2023
I dag har jeg arbejdet på at modellere bilens hjul. Jeg begyndte med at lave et udkast til hjulet i Fusion 360, og Chris arbejdede videre med det.
udkast
![billede](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/6f0146cb-393b-4ff7-89ef-3aad0d9cfce5)
færdig
![billede](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/73db8ca6-24b4-4952-830d-4d95a3553e9a)
og tegningen af sketchen
![billede](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/44efcdfd-575c-4a61-9839-bdc2711c5127)


## 10-10-2023
På grund af sygdom var gruppen nødt til at blive hjemme, men vi arbejdede i små grupper og fuldførte de enkelte elementer, som endnu ikke var færdige.


## 13-10-2023
Vi Started dagen ud med at 3d printe et hjul for at se hvordan det ville se ud i virkelighed.

![20231013_100447](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/d88bc40f-8d03-4a5b-8602-4556065d03ab)

derefter printede vi billen for at se, hvordan den ville passe sammen med hjullet og hvis det ikke gjorde rette det til og printe den igen.

![20231013_125032](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/f0867c73-d6fe-4aaa-8a82-51c62d3df92c)

den passed ikke helt så vi rettede den til og begyndte at sætte hjul og motor på.

![billede](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/f535624c-3c69-4998-8200-095387cfef7e)

her er en video af billen hvorden kører

https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/9f80b235-9b2a-4c21-bfbf-764f33eaab42




