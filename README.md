# Shotshotshots
SHOTSHOTSHOTS, by Stacey Mulcahy &amp; Nick Landry

The SHOTSHOTSHOTS is a hardware &amp; software hack powered by Windows 10, Particle Photon, booze and Cortana! The purpose of this hack is to automate "buzzword bingo" drinking games by monitoring an audio feed (like an Apple keynote or some kind of speech) and listening for specific "keywords". When a keyword is detected, the app automatically triggers the SHOTSHOTSHOTS drink dispenser, pouring a shot and serving it to one of the participants.

Technologies Involved:
- Windows 10 / UWP app written in C#
- UWP SDK for continuousdictation (Speech Recognition)
- JSON.NET
- Azure API App Service (Node.js backend)
- Particle Photon microcontroller
- Particle Cloud & Webhooks
- Custom electronic gadget

The Custom electronic gadget is connected to the Particle Photon. It includes a relay that opens a solenoid to control the flow of alcohol poured from a container, essentially creating an automated drinks dispenser. Specs, diagram and BOM coming soon.
