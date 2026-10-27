=== Kursinhalt Testmanager

Schulung Imbus AG
ISTQB® Testmanager - Advanced Level (Intensiv)" Mo,19.-Fr,23.11.2018
Beispiel-Prüfungsfragen TA:1-56

Prüfung:
04.12.2018 at 10:00
GASQ Exam Rooms; Rothenburger Str. 9 / 4th Floor; 90443 Nuremberg

=== Übersicht
    1) Der Testprozess [TA:1-4,8]
    2) Testmanagement im Kontext [TA:10-29]
    3) Management von Riskiken [TA:5-7,9,13-17]
    4) Auswahl der Testvorgensweisen 
    5) Testmanagement Dokumente [TA:18-21]
    6) Testaufwandschätzung [TA:22-23]
    7) Teststeuerung mit Metriken[24,26]
    8) Mehrwert des Testens [TA:27-28]
    9) Anwendung von Industriestandards [TA:30]
    10) Fehlermanagment [TA:36-39]
    11) Reviews [TA:31-35]
    12) Verbesserung des Testprozesses [TA:40-45]
    13) Testwerkzeuge und Automatisierung [TA:46-50]
    14) Leitung des Testteams  [TA:51-56]
    15) Auswahl der Organisationsform


=== 1)  Der Testprozess


I Planung/Überwachung/Steuerung

+   Planung
    +   Aufgabe des Testmanagers
    +   Definition einer projektbezogenen <Test>strategie => ~stufen, ~ziele
        ~verfahren:  Reviews, Stat.Analyse,Dynam. Analyse,Black/WhiteBox
        ~stufen: Verifikation, Modul~,Integrations~,System~,Abnahme~
    +   ... auf Basis der gewählten Teststrategie
    +   bei risikoorientierter ~strategie => Produktrisiken
    +   bei reaktiver ~strategie => Einplanung von ~charta und Werkzeuge f.d.dynm.~
    +   Sammeln und Verfolgen von ~metriken
    +   Sicherstellen der Rückverfolgbarkeit => Rückverfolgbarkeitsmatrix
    +   ggf Zusammenarbeit mit dem Softwarearchitekten
    +   Identifizieren aller externen Abhängigkeiten

+   Überwachung
    +   Vergleich des Testfortschritts mit dem Plan
    +   aktueller Teststatus für Stakeholder repräsentativ
    +   überwachen der ~strategie,~ziele mit den Metriken(Endekriterien)

+   Steuerung
    +   bei Bedarf Anpassung der Testplanungsaktivitäten


II  Testanalyse

+   Dokument: Testentwurfspezifikation

+   Analyse
    +   Aufgabe des Testanalysten
    +   identifizieren "was" zu testen ist in Form von Testbedingungen
    +   Analyse der Testbasis, Testziele und Produktrisiken
    +   ~bedingungen(TB) sollten rückverfolgbar sein

+   Testbasis
    +   in der Praxis oft vage und widersprüchlich
    +   Erfahrung des Testers mit der Materie wichtig
    +   Testorakel unerlässlich (SwDes)

+   Testbeddingung(TB)
    +   können detailliert werden nach
        +   Teststufe
        +   Projekt- und Produktrisiken
        +   verwendeter SW-Lebenszyklus
    +   mit hohem Detaillierungsgrad
        +   größere Anzahl von Tests
        +   Vorteil: detaillierte ~Überwachung, gut bei schlechter ~basis
        +   Nachteil: zeitaufwandig
    +   mit niedrigem Detaillierungsgrad
        +   bei leicht zu findenden Bezug zwischen Entwicklung und Testbasis
        +   großen Projekten

III  Realisierung & Durchführung
+   Dokument: Testablaufspezifikation
+   Aufgabe des Testanalysten
+   Umsetzung der Testentwürfe in konkrete Testfälle, Testabläufe und Testdaten
+   Automatische Tests in einem Testausführungsplan festlegen
+   Nachteil einer frühen Testrealsierung: potentiell hoher Wartungsaufwand
+   vor der Testausführung sollten Tools : Testmanagement und Fehlermanagement
    einsetzbar sein
+   Testmanager sollte Handlungsspielraum für d. Duerchführung der Tests einräumen

IV  Bewertung von Endekriterien und Bericht
+   während der Phasen Informationen spezifizieren

V   Abschluss
    1)  Testendeprüfung sicherstellen
    2)  Übergabe der Testmittel
    3)  Bewertungssizung "lessons learned"
        +   Späte Entdeckung unerwarteter Fehler
        +   zu niedrige Aufwandsabschätzung
        +   Fehlernanalyse
        +   Chancen für potentielle Testprozeß-Verbesserungen
        +   Unerwartete Planabweichungen


=== 2)  Testmanagement<TM> im Kontext

+   Schaffen und Nutzen von Ressourcen für Mehrwert schaffende Prozesse
+   befasst zum mit dem fundamentalen Testprozeß
+   Testprozesse so planen, dass sie zu den SWE-Modellen passen
+   TM sollte Stakeholder des Projektes identifizieren
+   Bsp Agile SWE: automa.durchführbare Komponententests
+   SWE-Modelle:
        1.  sequentiell: Wasserfall, V-Modell, W-Modell
        2.  iterative:
        2.1 inkrementell:
                RAD (Rapid Application Developement)
                    :   => verwendet CASE-Tools
                        CASE: Computer Aided SwEngineering
                    Erstellung von Prototypen (evolutionär),
                    Verwendung von time-boxing
                RUP (Ratonial Unified Process)
                    : Merkmale werden nach geschäftl. Prio oder dem Risiko
                        gruppiert
        2.2 evolutionäre
        3.  Spiralmodell nach Boehm  => Apollo
                    +   Zyklus: Code-Integration-Test-Implementierung-Prototyp
                    +   funktionierende SW ist das wichtigste Fortschrittmass
        4.  agile :
            +   Iterativen mit sehr kurze Iterationen
            +   Aktivitäten und Arbeitsergebnisse werden für jede Iteration
                abgeschlossen
            4.1   Scrum
                +   Rahmenwerk zur Abwicklung von SWE
                +   Konzepte: Transparenz, Überprüfung, Anpassung
                +   time box (Zeitfenster)
                    +   Sprint: max. 4 Wochen
                    +   Tag : 24h
                +   Artefakte: Product backlog, sprint backlog, Inkrement
            4.2   Extreme Programmierung(XP)
                +   "User Stories": Ausgangspunkte für jedes Projekt
                +   Hieraus werden die Testscenarien entwickelt
                +   vor dem Akzeptanztest werden die UnitTests druchgeführt
+   Zusätzliche Teststufen : Testziele, Testwerkzeuge
+   Nicht-funktionale Tests =>
        frühzeitig nicht-funktionale Tests risikoorientiert priorisieren,
        sonst teuer
+   erfahrungsbasierter Test:
        Aufdecken von Fehlerzuständen, die von anderen Testarten leicht übersehen
        werden
+   exploratives Testen
+   Session Based Testmanagement (SBTM)
        Kick-Off, Vorbereitung, Entwurf&Druchführung, Fehleranalyse&Bericht,
        Review

=== 3)  Management von Riskiken - Risiko:='~'

+   Definition: Risiko, Projektrisiko(Planungrisiko)- und
        Produktrisiko(Qualitätsrisiko)
    Risiko(Def):=    
    a) "Ein Faktor, der zu negativen Konseqienzen führen kann i.d.R. ausgedrückt in
    : Schadensausmass oder :Eintrittswahrscheinlichkeit" 
    b) "Verluste durch ein Ereignis mit einer gewissen Wahrscheinlichkeit"   
    Produktrisiko(Def):="Qualitätsrisiken eines Produktes"
    Projektrisiko(Def):="Projektziele werden nicht (rechtzeitig) erreicht"
+   Produktrisken sind bilden die Basis für die Auswahl der Testbedingungen.
+   Testteam versucht die Produktrisiken zu minimieren
+   Risikofaktoren (10)
        personelles Versagen,...
+   Risikobewertung
    +   Risikotyp(Def):
        "Eine Menge von Risiken mit gemeinsamen Qualitätsmerkmalen wie
        :Qualität, :Ursache, :Ort,.."
        Bsp:Performance, Zuverlässigkeit, Funktionalität
    +   Risikoidentifizierung
    +   ~ => Risikostufe Zuordnung
        +   Eintrittswahrscheinlichkeit
            +   techn. Risiken (Konflikte im Team,Zeitdruck...)
        +   Schadensausmass
            +   geschäftl. Risiken
                +   Kritikalität der Funktion
                +   Häufigkeit der Nutzung der betroffenen Funktion
+   Qualitative Bestimmung
    +   Risikoprioritätszahl (RPZ)
    +   Risikostufen sind fein zu justieren
+   Ansätze beim risikoorientiertem Test
    + Depth-first "Testen in der Tiefe" - hohe Risiken vor
    + Breath-first "Testen in der Breite" - Stichproben aus jeder Riskostufe
+   Testarten je nach Art des Riskikos
    +   Usability-Test  => ~:nicht-Akzeptanz der GUI
    +   Last-Tests      => ~:mangelnde Performance
    +   Stat.Analyse(CodeReviews) => ~:funkt.Fehler in sicherheitskrit. SW
+   Beherrschung von Projektrisiken
    +   vorbeugende Maßnahmen
    +   Notfallpläne erstellen : muss bei Eintritt des ~
    +   Risiko an andere Person auslagern
    +   Risiko akzeptieren


=== 4)  Auswahl der Testvorgensweisen<TV>

+   der TM muss die TV in den Testprozeß integrieren

+   I   Risikoorientierte TV
        ANM:    Der volle Nutzen des Risikorientiertem Testen
                wird selten erreicht.
    a)  leichte :
            Pragmatische Risikoanalyse und Management (PRAM)
            Systematic Software Testing (SST)
            Produkt-Risiko-Management(PRisMA)
        Vorteile: wenig Kosten
        +   nur 2 Risikofaktoren
                1.  Eintrittswahrscheinlichkeit
                2.  Schadensausmaß
    b) informelle :
        +  Risikofaktoren
            1.  Gefährungsanalyse (Hazard Analysis)
            2.  Kosten einer Gefährdung (Cost of Exposure)
            3.  Fehler-Möglichkeits- und Einfluss-Analyse (FMEA)
                "Failure mode and effect analysis"
                +   Bedeutung, Auftretenswahrscheinlichkeit,
                    Entdeckungswahrscheinlichkeit, Risikoprioritätszahl (RPZ)
            4.  Qualitätsfunktionendarstellung "Quality Function Deployment" QDF
                +   Was soll erreicht werden?
                +   Wie soll die Forderung erfüllt werden?
                +   Wieviel soll wie erreicht werden?
                +   Warum soll etwas erreicht werden? => Korrelationsmatrix
            5.  Fehlerbaumanalyse<FBA> (Fault Tree Analysis<FTA>)
        +   Beispiele "Multisysteme", "Sicherheitskrit.Projekte"
            Bsp:"Analyse der Produktrisiken durch Tester beim
            Explorativem Testen"
        +   sobald ein Stakeholder etwas als Risiko wahrnimmt, ist die ein
            Risiko => Konsens muss erzielt werden

+   II  andere TV
    1.  Anforderungsbasierte TV
        a)   Review auf Zweideutigkeit
        b)  Testbedingungsanalyse
        c)  Ursachen-Wirkungs-Graph-Analyse
    2.  Modellbasierte TV
        +   Abbildung einer Mischung von Anwendungsfällen...
        +   Test auf Funktionalität, Benutzbarkeit
    3.  Methodische TV
        +   Checklisten über was? wieviel? in welcher Reichenfolge? testen
    4.  Reaktive TV (oder präventive TV)
        +   Bsp: Exploratives Testen
        +   kann komplementär zu anderen TV verwendet werden
+   TV haben Einfluss auf :
    +   mit welchem Aufwand und welcher Priorität Aktivitäten im TV-phasen erfolgen
        sollten
    +   wann Tests Aufwand und Prioritäten zugewiesen werden

=== 5)  Testmanagement-Dokumente<TMD>

+   Testziele : Welcher Mix aus "Testobjekten","Testarten","Testinstanzen",
        "Testmethoden" ist für mein Projekt optimal
+   die Erstellung von TMD ist Aufgabe des TM

+   Dokumenttypen
    1.  Testrichtlinie "test policy"
    2.  Teststrategie / Testhandbuch "test strategy"
    3.  (Master-)Testkonzept (10-15 Seiten) "(master) test plan"
    4.  Sufentestkonzept/Phasenkonzept "level test plan"/"phase test plan"

+   1.  Testrichtlinie
    +   sollte von einem leitenden TM bestimmt werden
    +   Testhandbuch beschreibt:
        +   übergeordnete Testmethodik
        +   Art und Weise des managen von Projekt- und Produktrisiken
        +   Aufteilung des Testens in Teststufen
        +   übergeordenete Test-Aktivitäten
        +   Allg. Teiseingangs- und Endekriterien

+   2.  Teststrategie<TS>
    +   analytische TS
        +   Ableitung der TB aus den Requirements
        +   Entwurf und Realsierung der Tests
        +   Auswührung dieser Tests
        +   Bericht über die Ergebnisse
    +   modellbasierte TS
        +   Testteam erstellt ein Modell der Systemumgebung
        +   modellorientierter Performanztest einer Anwendung...
    +   systematische(=methodische) TS
        +   etwa auf Basis von Qualitätscharisterika einen vordefinierten Satz
            von TB ableiten
        +   Beispiel: "Checkliste" mit Schlüsselfunktionen, Attributen, Links
                eine Webseite prüfen
    +   prozeß konforme TS
        +   Bsp: Dokumente, Testteamorganisation
            basierend auf dem US-FDA Standard
    +   reagierende(=reaktive) TS
        +   Bsp: Exploratives Testen einer menübasierten Anwendung
            +   könnte eine Menge von Test-Chartas Merkmale von Menüauswahl
                beschrieben...
    +   beratungsunterstützende TS
        +   Bsp: Ausgelagerter Kompabilitätsttest
            1)  das Unternehmen gibt dem Testdienstleister eine Liste von
                Browsern, Betetriebsystemen, Anti-VirusSW, die für ihre
                Anwendung bewertet werden sollen
                Bsp: Mozilla => testen von GUI-KBOW
            2)  der Testdienstleister kann zur Erstellung der Tests
                veschiedene Verfahren einsetzen, zB "paarweises Testen"
    +   Regressionsorientierte TS
        +   Bsp: Zum Test einer Gui-App ein Testtool (zB "WAC") einsetzen
    *   TS enthalten oft:
        +   präventive Elemente
            Test basiert auf frühen Arbeitsergebnissen
        +   reaktive Elemente : stellen Konsitenz der Testaktivitäten mit der
            für die Testdurchführung gelieferten SW her

+   3.  Mastertestkonzept(MTK)
    +   beschreibt die Anwendung der TS für ein konkretes Projekt
    +   Bsp:
        "Vor der Freigabe einer SW muss ein Regressionstest des
                Basissystems durchgeführt werden."
        Im Projekt ist aber kein Regressiontest vorgesehen.
        Das MTK klärt das Risiko und die zu erwartende Abweichungen
    +   Klärung zu testende und nicht zu testende Objekte
    +   Testplan und Budget
    +   Testdurchführungszyklen
    +   Beziehungen und Arbeitsergebnisse
    +   Eventuell im Systemtestkonzept beschrieben, wenn der Systemtest die
        einzige formale Tesstufe ist

+   4.  Stufentestkonzept(STK) / Phasentestkonzept
    +   beschreibt in jeder Stufe die Testarten und Testaktivitäten
    +   in agilen Projekten können Sprint- oder Integrationstestkonzepte das
        STK ersetzen

+   weitere Test- und Arbeitsergebnisse
    +   Fehlerberichte, Testfallspezifikationen, TestLogs,
        Testbericht (vom TM erstellt)

+   der TM soll die Konsistenz und Qualität der Dokumente sicherstellen

=== 6)  Testaufwandschätzung(TAS)

+   Testmanagement-Kermaufgabe: Kosten des Abschlußtermins zu ermitteln
+   TAS : Sie während der Phase der Testplanung durchgeführt
+   Die TAS wird i.d.R. dem Management vorgelegt
+   Aus dem Projektmanagement sind Best-Practice Verfahren bekannt
+   Praxis: TAS ~ Anzahl der erforderl. Testfälle
+   TAS beruht oft auf Annahmen
+   TAS Faktoren
        : Qualitätsniveau der SW, Materialfakatoren, Personalf.~
+   Methoden:
    +   top-down:
        Gesamtaufwand des Projektes wird abgeschätzt und anschließend auf
                einzelne Aktivitäten verteilt
    +   bottom-up:
        Die Aktivitäten werden einzeln abgeschätzt und dann aufsummiert

+   Techniken der TAS

    +   Intuition & Vermutung
    +   Unternehmensstandards und Normen
    +   Prozentualer Anteil am Gesamtprojekt
    +   Organisationsübergreifende Metriken
    +   Vorstudie

    +   Erfahrung aus der Vergangenheit
        Nutzen Metriken vergangener Projekte
        => Testaufwand ist relativ (40%?) zum Entwicklungsaufwand
        => basieren auf Metriken eines anderen Projektes

    +   Projektstrukturplan (PSP)
        +   umfasst alle Arbeitspakete, die Aufwand verursachen
        +   Basis f.d. Ablauf& und Terminplanung

    +   Team-Schätzung (Breitband-Delphi, Planning Poker)
        +   Standard-Delphi :
            Projektleiter(PL)->Arbeitspakete(AP)->Exptn Abchätzung->PL setzt AP+timeX
        +   Breitband-Delphi: wie Standard- aber mit Abstimmung durch Experten

    +   Dreipunkt-Schätzung
            : bestCase, normalCase, worstCase

    +   Durchschnittswerte der Branche und Vorhersagensmodelle
        +   Funktionspunktanalyse(FPA) => Tabelle
            Kategorien(5)       : Eingabe,Ausgabe,Abfrage,Dateien,Referenzdaten
            Klassifikation (3)  : einfach, mittel, komplex
            Gewichtung der Klassifikation
        +   Testpunktanalyse(TPA) (basieret auf FPA)
                +   Dynamische- und Statische Testpunkte
                +   Umgebungsfaktor + Kompetenzfaktor
                +   Zusätzliche Stunden
        +   Formeln von Casper Jones
        +   auf Basis von Code-Zeilen
        +   geschätze Entwicklungsaufwände
        +   andere Projektpartner


=== 7)  Teststeuerung mit Metriken<~>

+   Kategorisierung der Metriken
    +   Projekt~ (prozentualer Anteil der durchgeführten Tests,...)
    +   Produkt~ (Fehlerdichte,...)
    +   Personen~ (Messung der Fähigkeiten der MA)

+   Bericht über Test~
    +   Balkendiagramme, welche Farbe?
    +   Inhalt des Testberichts auf die jeweilige Zielgruppe abstimmen
        ProjektManger(PM) oder BusinessManager(BM)
    +   Informationen:  Kontext, Testfortschritt, Buget, Risiken
    
+   Testfortschrittsüberwachung
    1. Produkt- bzw. Qualitätsrisiken
        +   % der Risiken, die vollständig/komplett/teilweise abgedeckt sind
        +   % der Risiken, sortiert nach Risikokategorie/Risikotyp
    2. Fehler
        +   Gesamtzahl gemeldeter : Gesamtzahl behobener Fehler
        +   durchschnittl. Zeit zwischen Auftreten und Fehlerwirkung
        +   Anzahl / prozentualer Anteil von Fehlerzuständen pro Testversionm....        
    3. Testfallstatus
        +   Status der Fehlernachtests und Regressionstests
        +   Anzahl [tatsächl.:geplanter] geleisteter Teststunden
    4. Überdeckung
        +   Risikoüberdeckung
        +   Codeüberdeckung
    5. Vertrauen in die SW  
        +   durch Umfragen (subjektiv)          

+   Überwachen des Testprozesses
    + bei den Projektzielen oder dem Testprozeß selbst

+   Überwachen der Endekriterien
    +   wann: spätestens am Ende jeden Testzyklus
    +   Kompromiss: Risiko:Kosten = evtl. zu früh:zu spät beendeter Test
    +   Burndown-Chart(agiles Team): y=Offene UserStoryPoints, x=Tage
    +   LeanManagement => Karte mit der UserStory 1 Spalte auf der Kanban-Tafel            


=== 8)  Mehrwert des Testens

+   Testen liefert keinen Mehrwert, wenn 
    +   zu viel getestet wird
    +   zu wenig getestet wird

+   Mehrwerte
    +   quantitative:   
        Vermeidung von Fehlerzuständen, weniger Risken....    
    +   qualitative:    
        gesteigertes Ansehen der Qualität, Schutz vor Haftungsansprüchen

+   Qualitätskosten "Costs<~> of Quality"
    +   ~ of Good Quality
        +   K1:prevention(Kosten der Vorbeugung) 
            +   Audits
            +   Trainings~
            +   Qualitätsplanung
            +   Prozeßfähigkeitsbewertungen
            +   sProzeßverbesserungsmaßnahmen            
        +   K2:appraisail(Fehlerfindungskosten/Fehleraufdeckung)  ~   
            +   Stat.+Dynam.Analysen
            +   Modul-,Integrations-,System-,Feldtest
            +   Qualitätsrisikoanalyse
            +   Prüfung von Anforderungen, Abnahmetests von Zulieferern
            +   Entwerfen von Testfällen
            +   Einkauf von Testdienstleistungen
    +   ~ of Bad Quality
        +   K3:internal failure ~  (Kosten interner Fehlerwirkungen/Fehlerbehebung)
            +   Fehlerursachenanalyse und -behebung
            +   Auslieferungs- Inbetriebnahmeverzögerunge
            +   Nacharbeiten von Dokumentation
            +   Preisnachlässe
            +   Fehlernachtests   
            +   
        +   K4:external failure ~ (Kosten nach der Auslieferung) => Produktrücknahmen
            +   Gewährleistungsansprüche
            +   Produkthaftung
            +   Verkaufsrückgängen
                            
+   Testen ist außerordentlich wertvoll, wenn:
    Gesamtkosten für die Fehleraufdeckung + Kosten interner Fehlerwirkungen << 
        Kosten externer Fehlerwirkungen
    oder: K2+K3 << K4        

=== 9)  Anwendung von Industriestandards

+   Terminologie
    +   Standard:   weithin anerkannte Art- und Weise etwas durchzuführen
    +   Norm: allseits rechtlich anerkannte Lösung eines Sachverhalts

+   Nutzen:
    +   kann für ein Projekt hilfreich, aber auch hinderlich sein
    +   eventuelle Inkonsistenzen unterschiedl. Standards
    +   können Referenz für erbotest Verfahren (Best Practice) sein
    +   => TM sollte Standards kennen

+   Beispiele:
    +   internationale Standards
        *   ISO
            +   ISO 2500x => SW-Engineering
            +   ISO 29119x => SW-System-Engineering (USA?!)
        *   IEEE 
            +   in den USA
            +   nationale Repräsentaten aus mehr als 100 Ländern                        
            +   Tester: IEEE 829 / IEEE 1028
    +   nationale Standards
        *   BS- oder BSI-Normen => British Standards Instition
            +   BS -7925-2
                +   Stellt Informationen zu vielen Testverfahren her
                +   Verfahren für den Test Analyst und Techincal Test Analyst relevant            
        *   DIN-Norm
            +   DIN 66270:  Informationstechnik
            +   DIN 66271:  SW-Fehler
    +   branchenspezifische Standards
        *   FAA Standards
            +   DO-178B (USA) : SW der zivilen Luftfahrt
        *   FDA Standards : SW medizinischer Systeme
    +   Standards mit Bezug zu SWE-Modellen
        *   CMMI: SWE-Modell für SW-Prozesse, Test Verifizierung&Validierung
        *   ITIL: Framework zur Erstellung IT-Dienstleistungen     
        *   PRINCE2: Projects in Controlled Environments   
                        
                                                     
=== 10) Fehlermanagment
+   der TM den Fehlerlebenzyklus verstehen
+   Def: Fehlerhandlung(error),Fehlerzustand(fault,bug),Fehlerwirkung(failure)
+   Anomalie => Unstimmigkeit durch Abweichugn von Erwartungen
+   Fehler-/SW-Lebenszyklus "wann werden Fehlerwirkungen aufgedeckt?"
    +   stat. Test
    +   dyn. Test => Anomalie nicht bemerkt? => falsch negatives Ergebnis
    +   testgetriebene Entwicklung
+   Fehlerstatusmodell
    +   Normaler Pfad (6) NEU->offen->Analyse->Korrektur->Test->erledigt(ERLEDIGT)
    +   Endzustände(4)    
        +   geschlossen(ERLEDIGT) => Fehlerzustand behoben, Fehlernachtest verifiziert
        +   storniert(ABGEWIESEN) => Fehlerbericht ungültig
        +   nicht reproduzierbar(BEOBACHTUNG) => Anomalie kann nicht mehr beobachtet
        +   zurückgestellt(SPÄTER)=>echte Anomalie, wird aber nicht behoben
    +   besondere(4)
        +   KLÄR "mehr Info benötigt durch Entwickler"
        +   FLOP "Reparaturversuch erfolglos"
        +   ANALYSE "auch nach FLOP soll Entwickler untersuchen"
        +   SPÄTER "Meldung vom TM zurückgestellt"        
+   Fehlermanagement-Ausschuß
    +   regelm. Treffen(triage meeting)
    +   Kommunikation geeigneter Werkzeuge....
+   Informationen im Fehlerbericht (Orthogonales Fehlerklassifikationsschema)
    "Unterscheidung zwischen Defekten nach Fehlertyp und Bedingungen für ihre
    Entdeckung"
    +   Fehlertypen     :   Funktionen, Zuweisungen
    +   Trigger         :   Bug-Fix,Workload,Usercode     
+   Inhalt des Fehlerberichtes
    +   Eindeutige ID
    +   Entdecker
    +   Fehlerstatus
    +   Priorität
    +   Schweregrad
+   Informationen aus dem Fehlerbericht
    +   Prozeßreife der SW-Test und SWE-Modelle
    +   Komponenten mit Fehlerzuständen
+   Def:
    +   falsch positives Ergebnis   => Test zeigt fälschlicherweise Fehler an
    +   falsch negatives Ergebnise  => Test zeigt den Fehler nicht an
        
            
=== 11) Reviews <RV>=~
+   Reviewprozeß (Review-Phasen) : Beginn - <Prozeß> - Ende 
    ("Phasen formaler Reviews")
    1.  Planung
    2.  Vorbesprechung/Kick-Off
    3.  Individuelle Vorbereitung
    4.  Durchführung/Reviewsitzung
        +   TM sollte sicherstellen
            +   adäquate Messungen, welche die Effizienz der ~ bewerten
            +   Checklisten für zukünftige ~ entwerfen
            +   Prioritäten und Schweregrad von Fehlern definieren            
    5.  Überarbeitung
    6.  Nachbereitung
        +   TM sollte Effektivität von ~ bewerten
+   Teilnehmer
    +   Testmanager
    +   Tester
    +   Rest (Gutachter, Manager, Leser,...)
+   RV-Arten
    +   Walkthrough => Know-How-Transfer, Fehlerfindung
    +   Techn.Review (Autor muss nicht anwesend sein)    
        : vor der Codierung   
    +   Inspektion => Fehlerfindung (Moderator<>Autor,formalste Art) 
        : nach der Codierung 
        : Peer Review unter Gleichen  
    +   Management-Review => Fortschritt überwachen
    +   Audit => unabh. (externe) Untersuchung von Produkten
+   RV-Varianten
    +   Vertragliches ~
    +   Anforderungs  ~
    +   Entwurfs- ~ : Systementwurf,Design
    +   Qualifizierungs ~ => Testeingangs, Testausgangs ~
    +   Code ~
    +   ~ von Testarbeitsprodukten => Testkonzept, Testdaten...
    +   Abnahme ~
    +   Kombination mit anderen Testtechniken => stat./dyn. Analyse
+   RV-Ziele
    +   Finden von Fehlerzuständen
    +   Abweichungen von Requirements, Standards & Normen
+   RV-Metriken 
    a) zur Produktqualität  => Vorbereitungszeit / Produktqualität des RV,...
    b) zur Prozeßqualität   => Fehlerfindungsrate, Arten gefundener Fehlerzustände
+   Der TM sollte 
Metriken zur Bewertung der 
    a)  Produktqualität des Reviewobjekts
    b)  Prozeßqualität zur Durchführung des ~Prozeßes
    erheben.       
    
=== 12) Verbesserung des Testprozesses

+   Stufenmodelle : CMMI & TMMi
        kontinuierliche Modelle : CTP, STEP, TPiNext
+   Grundsätzliche Modellunterscheidung:
        1)  Prozessreferenzmodell
        2)  Inhaltsreferenzmodell (Kontext)

12a) Prozessverbesserung beim Entwickeln

+   CMM & CMMI (=~ SPICE)
    +   mehrere Klassen von SWE-Modellen
    +   SW-Entwicklungsmodelle können nach Reifergrade klassifiziert + verbessert
        werden
    +   je höher die Reifestufe, desto höher die Qualität der SW
    +   Reifegrade:
            1)  initial
            2)  managed
            3)  defined => validation & verification
            4)  quantitatively managed
            5)  optimizing

12b) Prozessverbesserung beim Testen (Testverbesserungsmodelle)

+   IDEAL
    +   vor Beginn Ziel, Umfang, Überdeckung mit den Stakehodern vereinbaren
    +   Prozessmodell CTP,STEP,TMI,TPiNext auswählen
    +   Erfolgskriterien definieren
    +   Zyklus:
            1)  initiate
            2)  diagnostic
            3)  establishment Planen&Erstellen
            4)  acting: Umsetung => Schulung, Coaching,Pilotisierung
            5)  learning: prüfen Erfolgskriterien, die erfüllt wurden..
    +   neuer Zyjlus erforderlich?

+   TMMi
    +   als Ergänzung zu CMM gedacht
    +   Ausrichtung des Modells an den Unternehmenszielen
    +   Reifegrade==CMM
            1)  initial: Testen chaotisch, Test ad-hoc
            2)  managed: Testen & Debugging getrennt
                Testpläne & riskikobasierte Teststrategie, Requirement Check
            3)  defined: Testen im SW-Lifecycle integriert, Test-Organisation &
                Testtrainingsprogramm
            4)  quantitatively : Testen messbar
            5)  optimizing: Testprozeß vollständig, primäres Ziel "Fehler vermeiden"

+   TPI Next (TPiNext)
    +   deckt Aspekte des Testens und Managemententscheidungen
    +   Reifegrade:
            1)  Initial: testen ad-hoc, testen unstrukturiert
            2)  Kontrolliert: Testprozesse planen, Qualität der SW bekannt
            3)  Effizient:Testprozese hinsichtlich Kosten/Nutzen-Verhältnis erstellt
            4)  Optimierend: Testprozeß gepflegt und analysiert + angepasst
    +   Testreife-Matrix :
        y   =   Kernbereiche(1..16) : Stakeholder, Testfalldesign, Metriken
        x   =   Reifegrade(1..4) : initial, kontrolliert,effizient, optimierend
        y(x)=>  Kontrollpunkte : 1..4

+   CTP     (Critical Testing Process) * Kontext
    +   kontext-bezogen, keine Reihenfolge(Stufen) der Verbesserungen
    +   Idee: bestimmte Testprozese kritisch (12 Typen)
            1.Einbindung in das Projekt. 5.Tesplanung,...
    +   Tailoring des Modells
    +   Interviews
    +   Assesmentfragen von Rex Black
        ? Testen effektiv: finden Kunden oder Testen die schlimmsten Fehler
        ? Testen effizient: wie hoch ist der ROI des Testens?
        ? Testen im ganzen Projekt
        ? kontinuierliche Verbesserungen

+   STEP    (Systematic Test and Evaluation Proxcess) * Kontext
    +   Idee: Testen ist ein Prozeß über den gesamten SW-Lebenszyklus
    +   Grundsatz: "erst testen,dann programmieren"
    +   anforderungsorientierte Teststrategie
    +   STEP wird manchmal mit TPiNext kombiniert
    +   Voraussetzungen: Entwurf der Testmittel führt zum SW-Entwurf,....
    +   Tester& Entwickler arbeiten zusammen



=== 13) Testwerkzeuge(TWZ) und Automatisierung

+   Art der TWZ
    +   kommerzielle
    +   Open-Souce
    +   properitäre (eigenentwickelte)
+   Anforderungen an TWZ
    +   kann der Einsatz dauerhaft vorteilhaft sein?
    +   Gesamtbetriebskosten => Kosten-Nutzen-Analyse druchführen
+   Kosten-Nutzen-Analyse
    +   TM muss den Mehrwert und die positive Rentabilität der TWZ ermitteln
    +   Arten von Kosten:
        +   monetäre, für Ressourcen/Zeitaufwand
        +   einmalige,wiederkehrende,Opportunitätskosten
    +   einmalige: Einführungsschulung,Beschaffung
    +   wiederkehrende: Werkzeuglizenz/besitz, Portieren, Anpassungen    
    +   Opportunitätskosten : Verwaltung,Schulungen,...
    +   Frage: für welche Tests lohnt sich die Automatisierung?
+   Nutzen(Vorteile)
    +   Reduktion von Routineaufgaben
    +   Bessere Konsistenz und Wiederholbarkeit
    +   Systematische Protokollierung
    +   Verbvesserung der Testüberdeckung
    +   Leichtere Zeitabschätzung
    +   Erhöhung der Geschwindigkeit von Regression- und Fehlernachtests
    +   kürzere Testzykluszeiten
    +   geringere Testausführungskosten
    +   weniger menschl. Fehlverhalten
    +   weniger Aufwand beim Zugriff auf Testinformationen
+   Risken(Nachteile)   
    +   Höhere Erwartungen an das Tool als es erfüllen kann
    +   Unterschätzen von Kosten und Aufwand f.. Einführung
    +   Unterschätzen des Wartungsaufwandes
    +   Blindes Vertrauen
    +   Mangelnde Reife der Firma, wenn das Tool zu früh kommt
    +   Geringere Fehlerfindungsrate, wegen ausschl. automat. Tests    
+   Empfehlungen:
    +   langfristige, umfassende TWZ-Strategie
    +   Zusammenspiel der Werkzeuge prüfen          
+   Open Source TWZ
    pro:
        +   sehr leistungsfähig
        +   geringe Anschaffungskosten
        +   kompentente Testorganisation kann das TWZ leicht anpassen
        +   mehrere TWZ oft kombinierbar
    contra:
        +   deckt vielleicht nicht so viele Funktionen ab, wie kommerzielle ~
        +   bei Anpassung i.d.R Eigeninitiative, kein Support
        +   bei Anpassung müssen die Lizenzbedingungen geprüft werden,
            eventuell externen Benutzern unentgeltlich den SW-Erwerb ermöglichen
        +   Einsatz obsolete für sicherheitskrit.Systeme - keine Zertifizierung                    

+   Motivation für die Eigenentwicklung
    +   Open-Source Werkzeuge sind nicht bekannt
    +   Anschaffung kommerzieller Tools kann politisch nicht durchgesetzt werden
    +   Tatsächlich oder vermeintliche Kostenersparnis (=> Hossbach)
    pro:
        +   effektiver im Betrieb
        +   benötigte Daten können entsprechend generiert werden
    contra:
        +   deutlich höhere nicht fakturierte Kosten
        +   SW hängt sehr stark von den aktuellen Entwicklern ab
        +   Dokumentation oft unzureichend
        +   SW Testen eigentlich erforderlich                
+   Auswahlverfahren für TWZ
    +   langfristige Investition
    +   TM muss 
        +   die Interoperatibilität mit anderen TWZ sicherstellen
        +   den ROI berücksichtigen
        +   Lernkurve der Benutzer einplanen
            => Planung der TWZ-Einführung                   
+   Effektivität von TWZ
    +   Es kann beträchtliche Zeit dauern, bevor sich ein TWZ bezahlt macht
    +   der TM muss den Lebenszyklus eines TWZ berücksichtigen        
+   Werkzeuglebenzyklus
    1.Beschaffung, 2. Support&Wartung 3.Weiterentwicklung 4.Außerbetriebnahme
+   Werkzeugmetriken
    +   Testmangementwerkzeuge
    +   Fehlermanagement-TWZ
    +   Statische-Analysatoren
    +   Performanz-TWZ
    +   Überdeckungs-Analysatoren
+   Testautomatisierung lohnt sich, wenn
    +   Tests häufig durchzuführen sind
    +   bei stabilen Testobjekten
    +   bei tabellen-getriebener Testautomatisierung

=== 14) Leitung des Testteams
+   Mitarbeiter(MA) Team: 
        SW-Tester,TestAnalyst,Testautomatisierer, Testmanager(=TM)(Testleiter),
        TestsystemAdmin,Techn.Experte
+   Testmanager(TM)
    +   Experte für Testplanung...
    +   Aufgaben: 
        +   Formulierung/Review der Testrichtlinie
        +   Erstellung und Abstimmung von Teststrategie/Testplan mit Projektmgmt
        +   Vertreten der Interessen der Tester
        +   Plan zur Schulung und Kompetenzentwicklung
+   Softskills/Teamrollen nach Dr.Belbin
    Neuerer/Erfinder,Webbereiter,Vorsitzender,Macher,Beobacher,Mitspieler,
    Umsetzer, Perfektionist,Spezialist
+   Aufbau eines Testteams:
        +   Gute Mischung von Personen unterschiedlicher Softskills            
        +   Skills Assessment
        +   Schulung mit Kompetenzentwicklung
                Wissenstransfer, Mentoring
+   Dynamik im Testteam
        +   werden die MA ihre Skills sinnvoll einsetzen können ?
        +   die Arbeitsumgebung    
        +   Nachweis der Fachkompetenz        
        +   Nachweis der Solzialkompetenz        
+   Motivation
        ( Optimale Testarbeit erfordert motivierte MA )  
        +   das Testen sei wichtig für die SWE 
        +   dem Testen wird eine bestimmte Zeit und Budget zugeordnet   
        +   im Testteam sind ausreichende Kenntnisse und Erfahrungen vorhanden
        +   gute Beziehung zwischen den Testern und anderen Projekt-MA 
        +   Beitrag der Tester zum Projekterfolg wird bezogen auf
            Kostensenkungen & Risikoverringerung
        +   das Management will Einblick in den Testprozeß haben
        +   in der Projektplanung wird der Zyklus 
            "Testen,Korrektur,erneut Testen" berücksichtigt            
        +   Empfehlungen der Tester werden in der Projektbesprechung erörtert            
        +   die Teilnahme am Testen wird als "Beförderung" angesehen
        +   passende Gehälter/Karriereaussichten
        +   Anerkennung und Respekt
            +   wenn es offensichtlich ist, daß Tester den Mehrwert des 
                Projektes
                steigern
            +   die Tester bereits von Projektbeginn an beteiligt sind
        +   Demotivation
            +   Beispiel: Tester findet viel, Produkt wird dennoch geliefert
+   Kommunikation (siehe Hörbeispiel)
    +   unterschiedliche Sprache
    +   Resignation (Akzeptanz falscher Testergebnisse)
    +   falsche Vorstellung, von dem Gegenüber
    +   Voraussetzen, dass der andere die Situation kennt
    +   kein Einfühlungsvermögen
    +   Übermittlung irrelevanter Informationen ("schwafeln")
    +   Verwendung undeutlicher Kommunikationsebenen ("Ironie")
+   Kommunikation des Testteams
    +   Testdokumente
    +   Feedback zu gereviewten Dokumenten
    +   Informationssammlung und -weitergabe
    +   regelmäßige Testteam-Meetings                       

        
=== 15) Auswahl der Organisationsform
+   Qualität
    +   gemeinsame Verantwortung aller während des gesamten SW-Lebenszyklus
    +   unabhängiges Testteam

+   Grad der Unabhängigkeit zwischen Entwicklern und Testern
    +   höher       =>  mehr Isolation, weniger Wissenstransfer
    +   geringer    =>  das Wissen über das System verbessern, Interessenskonflikte
+   Der TM sollte:
        1. Zuständigkeiten und Erwartungen f.d. einzelnen Testphasen verstehen
        2. passende Organisationsform wählen (?!)
+   Definitionen:
    +   verteiltes Testen
    +   zentralisiertes Testen: an einem Ort
    +   insourced Testen: externe MA führen im Unternehmen die Tests durch
    +   outsources Testen: Verlagerung des Testens in externe Firma
+   Problemfaktoren
    +   kulturelle Unterschiede
    +   Schutz des geistigen Eigentums
    +   Mitarbeiterfluktuation
    +   Ungenaue Kostensschätzung
+   Erfordnernisse
    +   Klare Kommunikationskanäle
    +   Gute definierze Erwartungen, Ziele
    +   Klares Veständnis für Rollen und Verantwortlicxhkeiten
    +   Ableich der (Test-)Methoden
    +   mögl.Verteilung über Standorte muss klar geregelt sein


Begriffe:
+   effektiv(nützlich,operativ) vs effizienz(sparsam,wirtschaftlich)
               