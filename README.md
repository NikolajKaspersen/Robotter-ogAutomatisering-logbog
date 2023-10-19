# Robotter-ogAutomatisering-logbog
## 22-8-2023
Begyndte med en indledning til brugen af Visual Studio Code (VSC) til at programmere de mikroprocessorer (MP), der var blevet udleveret i klassen. I VSC anvendte vi PlatformIO, en integreret udviklingsmiljø, der giver adgang til MP'ens infrastruktur, så vi kunne styre dens pins og porte direkte i koden.

Vi udviklede et program kaldet "MyFirstBlink," som gjorde det muligt at få den indbyggede diode på MP'en til at blinke med det interval, der var defineret i koden. Senere fik vi en ny MP med to indbyggede dioder, og vores næste opgave var at få dem til at blinke på skift samt at undersøge C++-klasser.

## 25-8-2023
Fik gennemgået opgaven fra Dag 1, hvor det var muligt at få begge Dioder til at blinke på skift og fik understreget at funktionen 'delay()' ikke skal bruges i fremtiden.
![273395411-de14a41b-4608-4867-aae2-3b4bdd9d82aa](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/6608d27e-1647-4152-9bd8-a723e4716245)
![273395441-d54939ce-005c-443e-8f60-e0a2e93bed2e](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/80b1bd57-a6b4-4774-997e-70f42fefbcea)
Vi fik en introduktion til et Trafiklys signal og de states det går igennem, som vi skal arbejde på til næste lektion, og forsøge at kode på vores NodeMCU. 
![273395539-4cd46835-9cc6-47fd-b52a-2e8a2eb95633](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/08c0334f-8356-4344-b06c-9e1d8b7e917f)

## 29-8-2023 (Knapper)
Fik uddelt en Button, vi skulle kunne bruges til at registrere et Button-push, der kan registreres af MCU'en til forskellige funktioner.
Vi arbjede vidre med trafik lys

https://user-images.githubusercontent.com/99390466/273398106-f39c9fa6-59bf-400c-a5b4-4bc93065ff34.mp4



## 31-8-2023 (Trafik lys projekt - FINISHED)
Vi har nu færdiggjort vores trafik lys projekt, nu kører 2 forskellige lyskryds på samme tid. og vi fik lavet vores buzzer som kunne  lave en lyd når man klikkede på knappen

https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/9ffb5cb7-9f0e-42e8-b2f5-e6032a6edf1e

https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/51ad326c-074c-4e62-93b2-494f93d39272




## 4-9-2023 
I dag blev vi introduceret kort til principperne bag 3D printing og brug af OpenSCAD og javacsg som er noget Tobias har lavet så man kunne programere figuren i intelliJ i sted for OpenSCAD


## 7-9-2023 
Ved brug af OpenSCAD fik vi til opgave at lave en lille holder til vores NodeMCU. Dette kan ses på følgende billeder:
![267251596-0ead7ef5-2cf8-49ac-a1bc-1bea92d6a363](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/55a3eaf7-b70a-49ad-9797-17f82b06b596)


## 12-9-2023 
Fra nu til eksamen (cirka 4-5 uger) skal vi som klasse lave en hel tog skinne system sammen. Vi vil blive delt ud i vores grupper, hvor hver gruppe skal fokusere på en specific del af systemet.

## 15-9-2023
Vi blev introduceret til 3D print af et Clip-system, der kan bruges til at forbinde brikker af forskellige størrelse og funktioner.

## 19-9-2023
Vi har arbejdet med at lave en interface i OpenSCAD for at gøre det nemmere at genbruge et forrigt produkt og nemt kunne ændre størrelser på.

## 22-9-2023 Bil projekt
Gruppen blev enige om at lave 3D printe en bil, med 2 motore der kunne få hjulene til at køre. Forskellige ideer til bilen's funktioner og design blev designet 
![269887508-a318266c-124b-441e-af3f-fac806f4c655](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/ec067bcf-3930-45b1-aea0-524224d7ddf7)

## 26-9-2023
I denne uge har vi arbejdet på at skitsere hvordan skal se ud og de mål som bilen skal have.
![273142652-68580c9f-0245-42f8-84a8-164f3ae4488d](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/a66e8fff-9227-40d7-a13c-1086545117c2)
Chris var hjemme og lavet hjullet til bilen
![billede](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/7ff4cd0a-61e2-4e81-9463-13ccc1804f51)

## 29-9-2023
Jeg lavede en boks i javaCSG.
![billede](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/91b6488a-dbc3-4943-8fb3-1bbe6217fe84)

## 03-10-2023
I dag skiftede vi over til Autodesk Fusion 360 og lavede en simpel box som skal indeholde NodeMCUen samt motoren.

Følgende billede viser modellen i Autodesk Fusion 360: 
<img width="843" alt="273140680-14f95483-39f1-45f7-a844-15a16cc56191" src="https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/da631e69-e881-4b52-bb8a-08271f6b1a17">
Her er boxen efter 3D Printning. Vi havde brugt boxen til at måle om vi er på rette vej.
![273139999-10528d3a-f71d-4495-b023-03647de9f3a6](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/f0f054f2-4c11-48bf-8b1b-d10cea859022)
Senere udtænkte vi en ny form til vores bil hvor hjulene kan side tættere på spidserne, dette sikrer at komponenterne inde i boksen ville sidde bedre fast 
![billede](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/56e42185-685e-43b2-83e7-ffd37e82f6bc)

## 06-10-2023
I dag har vi arbejdet på at modelere hjulet af bilen. 
jeg fik lavet en  udkast til hjullet i fusion 360 og Chris arbejdet vidre på deft

udkast
![billede](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/6f0146cb-393b-4ff7-89ef-3aad0d9cfce5)
færdig
![billede](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/73db8ca6-24b4-4952-830d-4d95a3553e9a)
og tegningen af sketchen
![billede](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/44efcdfd-575c-4a61-9839-bdc2711c5127)

## 10-10-2023
På grundet af sygdom blev gruppen hjemme, men gik i små grupper og færdig gjorde på de enkle elementer som ikke var færdige endnu


## 13-10-2023
Vi Started dagen ud med at 3d printe et hjul for at se hvordan det ville se ud i virkelighed.

![20231013_100447](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/d88bc40f-8d03-4a5b-8602-4556065d03ab)

derefter printede vi billen for at se, hvordan den ville passe sammen med hjullet og hvis det ikke gjorde rette det til og printe den igen.

![20231013_125032](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/f0867c73-d6fe-4aaa-8a82-51c62d3df92c)

den passed ikke helt så vi rettede den til og begyndte at sætte hjul og motor på.

![billede](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/f535624c-3c69-4998-8200-095387cfef7e)

her er en video af billen hvorden kører

https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/9f80b235-9b2a-4c21-bfbf-764f33eaab42




