# Robotter-ogAutomatisering-logbog
## 22-8-2023
Startede ud med introduktion til brug a Visual Studio Code(VSC) når det kommer til at programmere de Micro-Processore(MP) der blev givet i klassen. 
I VSC bruges platformio, en IDE der giver adgang til den infrastruktur der ligger på MP'en, så dens Pins og Porte kan blive kaldt direkte i Koden. 
Fik lavet et "MyFirstBlink" program, hvor det var muligt at få den indbyggede diode på MP'en til at blinke i det interval, der er skrevet i Koden.
Fik en ny MP med to indbygget Dioder, hvor opgaven til næste gang, var at få dem til at blinke på skift og at læse op på C++ klasser.

## 25-8-2023
Fik gennemgået opgaven fra Dag 1, hvor det var muligt at få begge Dioder til at blinke på skift og fik understreget at funktionen 'delay()' ikke skal bruges i fremtiden.
![273395411-de14a41b-4608-4867-aae2-3b4bdd9d82aa](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/6608d27e-1647-4152-9bd8-a723e4716245)
![273395441-d54939ce-005c-443e-8f60-e0a2e93bed2e](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/80b1bd57-a6b4-4774-997e-70f42fefbcea)
Fik en introduktion til et Trafiklys signal og de stadier det går igennem, som vi skal arbejde på til næste lektion, og forsøge at kode ind på vores MCU. 
![273395539-4cd46835-9cc6-47fd-b52a-2e8a2eb95633](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/08c0334f-8356-4344-b06c-9e1d8b7e917f)
![273395552-249a679f-7db7-4af8-8c62-d2b67936e711](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/683e5afd-63f2-4df4-a60e-b6574cfc55fa)

## 29-8-2023 (Knapper)
Fik uddelt en Button, vi skulle kunne bruges til at registrere et Button-push, der kan registreres af MCU'en til forskellige funktioner.

https://user-images.githubusercontent.com/99390466/273398106-f39c9fa6-59bf-400c-a5b4-4bc93065ff34.mp4



## 31-8-2023 (Trafik lys projekt - FINISHED)
Vi har nu færdiggjort vores trafik lys projekt, nu kører 2 forskellige lyskryds på samme tid. (Hvis videon herunder ikke virker, så kig i Demonstration Videos/TrafficLight Demonstration, videon)

https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/9ffb5cb7-9f0e-42e8-b2f5-e6032a6edf1e

https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/51ad326c-074c-4e62-93b2-494f93d39272







## 5-9-2023 til 8-9-2023 introduktion til 3D Printing og OpenSCAD
I denne uge blev vi introduceret kort til principperne bag 3D printing og brug af OpenSCAD/Blender til modelering af objekter som kan 3d printes.

Ved brug af OpenSCAD fik vi til opgave at lave en lille holder til vores NodeMCU. Dette kan ses på følgende billeder:
![267251596-0ead7ef5-2cf8-49ac-a1bc-1bea92d6a363](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/55a3eaf7-b70a-49ad-9797-17f82b06b596)

## 12-9-2023 Introduktion til Tog og skinner
Fra nu til eksamen (cirka 4-5 uger) skal vi som klasse lave en hel tog skinne system sammen. Vi vil blive delt ud i vores grupper, hvor hver gruppe skal fokusere på en specific del af systemet.

## 19-9-2023
Vi har arbejdet med at lave en interface i OpenSCAD for at gøre det nemmere at genbruge et forrigt produkt og nemt kunne ændre størrelser på.

## 22-9-2023 Bil projekt
I dag er vi startet med et nyt projekt hvor vi har tænkt os at lave en bil som vi forhåbenligt kan få til at blive fjernstyret. Vi startede med at lave en hurtig skitse af hvordan bilen's lag skal se ud:
![269887508-a318266c-124b-441e-af3f-fac806f4c655](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/ec067bcf-3930-45b1-aea0-524224d7ddf7)

Derefter lavede et nyt repository der indeholder koden til vores NodeMCU samt koden til OpenSCAD: https://github.com/AbdullahMarwan/CPH-Sem4-RobotterOgAutomatisering-Bil

## 26-9-2023
I denne uge har vi arbejdet på at skitsere hvordan formen af vores bil skal se ud, både så det visuelt ser godt, men også så vi kan sikre at alle de nødvendige funktioner er tilstede 
![273142652-68580c9f-0245-42f8-84a8-164f3ae4488d](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/a66e8fff-9227-40d7-a13c-1086545117c2)

## 03-10-2023
I dag skiftede vi over til Autodesk Fusion 360 og lavede en simpel box som skal indeholde NodeMCUen samt motoren.

Følgende billede viser modellen i Autodesk Fusion 360: 
<img width="843" alt="273140680-14f95483-39f1-45f7-a844-15a16cc56191" src="https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/da631e69-e881-4b52-bb8a-08271f6b1a17">
Her er boxen efter 3D Printning. Vi havde brugt boxen til at måle om vi er på rette vej.
![273139999-10528d3a-f71d-4495-b023-03647de9f3a6](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/f0f054f2-4c11-48bf-8b1b-d10cea859022)

## 04-10-2023
Vi har udtænkt en ny form til vores bil hvor hjulene kan side tættere på spidserne, dette sikrer at komponenterne inde i boksen ville sidde bedre fast 
![billede](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/56e42185-685e-43b2-83e7-ffd37e82f6bc)

## 06-10-2023
I dag har vi arbejdet på at modelere hjulet af bilen. 
![billede](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/73db8ca6-24b4-4952-830d-4d95a3553e9a)
og tegningen af sketchen
![billede](https://github.com/NikolajKaspersen/Robotter-ogAutomatisering-logbog/assets/99389341/44efcdfd-575c-4a61-9839-bdc2711c5127)






