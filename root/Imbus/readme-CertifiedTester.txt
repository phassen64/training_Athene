=== Kursinhalt      2018-05

Schulung Imbus AG Di,15.5.-Fr 18.5.2018
Heft: Software-Qualitätssicherung und -Test

ISTQB Certified Tester - Foundation Level

=== Übersicht
    1) Einführung
    2) Der Testprozess
    3) Techniken der Testspezifikation
    4) Tests durchführen und auswerten
    5) Testen im SWE-Zyklus
    6) Tests planen
    7) Testmanagement
    8) Testteams aufbauen
    9) Testunterstützungswerkzeuge


=== 1   Einführung

+   Testen - das übliche Vorgehen [1.2]
    Freigabetest [1.2]
    Ad-hoc Test [1.3]
    Debugging(Entwickler):konstruktiv oder Testen:destruktiv(Tester)
    Debugging vs Dynamischer Test
+   Anforderungen an Sw-Tests [1.7]
    Unabhängiges Testen, Gründe für Fehler [1.8]
    Testen erzeugt Informationen...[1.11]
    Fehlerkosten vs Testkosten [1.12]
    Wieviel Testen ist genug, wennn [1.13]
+   Testen und Software-Qs
    Planerische vs Konstrutive vs Anlaytische Massnahmen [1.15]
    Sw-Prüfungen: [1.17]
        Statische~: formale Verfahren, strukturelle Verfahren
        Dynamische~: Tests(BlackBox,..), Dynamische Analyse(MemoryLeak)
+   Testbegriffe(Testdefinitionen) [1.19]
        Erschöpfender Test  [1.20]
        Definitionen I: [1.23]
            Fehlerhandlung(error, mistake),
            Fehlerzustand(fault,bug),
            Fehlerwirkung(failure)
        Definitionen II: [1.25]
            Fehler(bug), Mangel(defiency), Qualität(quality)
+   Zusammenfassung [1.27]
    Grundsätze des Sw-Testens [1.30]
        1)  Fehlerzustände nachweisen
        2)  Testen kann nicht beweisen, dass keine Fehlerzustände vorhanden sind
        3)  Ausreichendes Testen verringert Fehlerzustände
        4)  keine Fehlerfreiheit, wenn keine Fehler gefunden werden
        5)  Ein vollständiger Test ist nicht durchführbar
        6)  Tests sind nur Stichproben, daher Risiko und Priorität festlegen
+   Ethnische Leitlininien [1.32]
        Urteilsvermögen, Berufsbild,...

=== 2   Der Testprozess

+   Testen im SWE-Zyklus [2.1]
    Phasen in der Softwareentwicklung (Analyse, Design, Implemtg, Test, Betrieb) [2.2]

+   Der Testprozess im Überblick [2.4]
    Testkonzept(Mastertestkonzept), Testskript, Testprotokoll, Abweichungsbegriff,
    Testabschlussbericht[2.4]
    1) a) ~planung      :   Testrichtlinien, Testziele, Teststrategie [2.6]
                        :   Testumgebung, Endekriterien [2.7]
       b) ~steuerung    :   Testüberdeckung, Endekriterien [2.9]
    2) ~Analyse/Entwurf :   Testbasis, Testbedinungen, Testenwurf, Testfall(testcase) [2.9]
                        :   Testdaten, Testumgebung [2.10]
    3) ~realisierung    :   Priorisierung, Testsuiten, ~ausfürhungplan [2.11]
       &~durchführung   :   ~daten, ~umgebung, ~rahmen [2.12]
                        :   Analyse der Soll/Ist-Abweichungen [2.12]
                        :   Fehlerbericht, Abweichungsprotokoll,
                            Fehlernachtest vs Regressionstests [2.14]
                        :   Testprotokoll(test log) [2.15]
    4)  Bericht         :   Auswertung der Endekriterien
                            Status des "System under Test" [2.16]
                            Verfassen des Testabsclussberichtes [2.17]
    5)  Abschluss       :   Testmittel archivieren, Übergabe [2.18]
                        :   "lessons learned", Testabschluss, wenn... [2.19]
+   Zusammenfassung [2.22]
    Aufgaben des Testmanagements ist es:
        Testorganisation, Abgleich mit d. Relaseplanung der Entwicklung, Testendebewertung,..
        Laufende, datenbankgestützte Fehlerstatus & Korrekturverfolgung [2.22]

=== 3   Techniken zur Testspezifikation

+   Testfälle definieren
    Virtual Showroom := Präsentations- und Ordnertool => Vw Car-Configurator [3.2]
    Vom Testziel zum Testfall(TestCase) [3.3]
    Testbedingung:=Eine Einheit/Ereignis Feature/Funktion [3.4]
    Identifikation einer Testbedingung nach DIN ISO-9126 [3.5]
    Merkmale von Softwarequalität [3.5]
        := Funktionalität, Zuverlässigkeit, Benutzbarkeit, Effizienz,
            Änderbarkeit(Wartbarkeit) und Übertragbarkeit(Portabilität)
    Testbedingunen & Testarten =: [3.6]
        1) Funktionale Tests  "Was leistet das System"
            : Sicherheitstest, Interoperabilitätstest (2)
        2) Nicht-Funktionale Tests ISO-9126
            : Performanztest, Lasttest, Stresstest,
                Benutzbarkeitstest/Gebrauchlichkeitstest,
                Wartbarkeitstest, Zuverlässigkeitstest, Portabilitätstest(7)
    Identifikation von  Testbedingungen [3.7]
        => Priorisierung
    Systematischer Ansatz:Testentwurfsprozeß [3.8]
        1) Testanalyse : Testbasis, Testbedingungen,  [3.8]
            Rückverfolgbarkeit("traceability")
        2) Testentwurf : Priorisierung von Testdaten,
            Identifitierung benötigter Testdaten [3.9]
            "traceability"
        3)  Testrealisierung: Testablaufspezifikation, Testskript[3.10]
    Testenwurf
        Testfall:a)logisch/abstrakt:"gültiger Name",b)konkret:"HansMeier" [3.11]
        Definition Testfall:  TestId, Quelle, Testziel,... [3.12]
    Testdokumentation nach ISO-829 (ISO-25010): Ablauf~,Entwurf~,Fall~ [3.13]
    -   Testentwurfspezikikation: TestId, Produkteigenschaft,... [3.15]
    -   Testfallspezikiation: Testobjekt, Eingabedaten  [3.16]
    -   Testfablaufspezikiation: Zweck, Schritte  [3.17]

+   Black Box Methoden(BBM) [3.18]
    "Tests welcher aus der Spezifikation abgeleitet werden"
    Problem Testfallexplosion [3.19]: Testen zu 100% ist unmöglich
    BBM - System under Test(SUT): Tests ohne Auswertung der Programmstruktur [3.20]
    BBM - Übersicht: Äquivalenzklassenmethode, Grenzwertanalyse,
        Entscheidungstabellentest, Zustandsanalyse, Anwendungsfallbasierter Test [3.21]
    1:  Äquivalenzklassenmethode [3.22]
        Vorgehen[3.23], Datumsfeld[3.24], Repräsentanten[3.25], Dreieck-Test[3.27]
        Übersicht[3.29]: anwendbar auf allen Teststufen
    2:  Grenzwertanalyse [3.30]
        Grenzwert[3.30], GW+-1[3.31], Datum[3.32],Repräsentant[3.33], Übersicht[3.35]
        Datenkombinationen[3.36]
    3:  Entscheidungstabellentest [3.37]
        4 Quadranten: Bedingungen(B), Regeln(J/N), Aktionen(A), Aktionszeiger(x) [3.38]
        Regel:Aktionszeiger=1:1 Bsp "Artikel Lieferung" [3.39]
        Bedingungskombinationen = 2**n Bediungungen [3.40]
        don't care-Regelelement('-') [3.41]
        Tabelle redundant oder inkonsistent? => "Zähler" [3.42]
        Vollständigkeit : SummeZähler=2**n [3.43]
        Inkonsitente und nicht-deterministische Tabelle [3.44]
        don't care => Entscheidungsprobleme [3.45]
        Entscheidungstabellentest - Testfallgenerierung [3.46]
        Zusammenfassung [3.48]
    4:  Zustansbasierter Test(Zustandsanalyse) [3.49]
        Grafische Veranschaulichung : Startzustand, Zustandsänderung, Endzustand[3.49]
        Beispiel Stapelverarbeitung [3.50]
        Def: Zustände:="Knoten", Kanten:="Ereignisse", Start="BaumWurzel"
        Bildungsregel:"Alle Wege mindestens 1x" [3.51]
        Test auf a) Robustheit/Negativtest b) unerlaubte Zustände bei Fehlerausgängen [3.52]
        Zustandsübergangstabelle [3.54]
        Übersicht [3.56]
        Anwendungen bei : embeddedSW, bei GUI, Überdeckungsgrad Bsp [3.57]
    5:  Anwendungsbasiertes Testen [3.58]
        Hauptszenario("das wahrscheinlichste") und Varianten [3.59]
        Beispiel : Geldautomat in UML [3.60]

+   White Box Methoden(WBM) [3.61]
    "Test bei welchem Testfall und Testdaten aus der Struktur abgeleitet werden"
    : struktureller Test oder strukturorientierter/basierter Test [3.62]
    =>   Codeüberdeckung/-abdeckung = "CO" Anweisungsüberdeckung [3.63]
    =>   Kontrollflussgraph [3.63] [3.65]
    Prinzip auf höhren Teststufen [3.64]
        Integrations-teststufe (Module,Komponenten,Klassen)
        System~(Menüs, Geschäftsprozesse)
    1:  Anweisungstest-Anweisungsüberdeckung [3.66]
    2:  Entscheidungstest-Entscheidungsüberdeckung [3.67]
    3:  Bedingunsüberdeckung :einfach[3.68] :mehrfach/kombination[3.69]
    4:  Pfadüberdeckung
    Zusammenfassung [3.73]

+   Erfahrungsbasierte Test Methoden (EBM) [3.76]
    "Intuitive Testfallermittlung" "schwachstellenorientiertes Testen" "error guessing"
    1:  Intuitive Testfallermittlung" => "fault attack" [3.78]
    2:  Exploratives Testen : Testsession, Testmission-Test-Charta [3.79]

+   Zusammenfassung
    Testentwurf [3.81]
    Gegenüberstellung der Methoden  : BBM-WBM-EBM  [3.84]
    Testspezifikation [3.86]

+   Anhang
    Entscheidungstabellentest Beispiel (1-5) [3.88-3.92]


=== 4   Tests durchführen und bewerten

+   Testumgebung
    Testrealisierung und -durchführung :
        {Testfälle, Testsuite, Testdaten, Aufbau des Testrahmens} [4.2]
    Testumgebung : unabhängig v.d. Entwicklungsumgebung nahe Systemtest[4.3]
    typische Arhcitektur [4.4]
    Integrationsstrategien: inkrementell-bigBang, BottumUp-TopDown,
        Funktional-AdHoc[4.5]
    Begriffe:   1.Platzhalter(stubs) => a)Dummy b)Mock [4.6]
                2.Treiber/Testtreiber(driver), 3.Simulation [4.7]
    Testobjekt - typische Struktur => SUT [4.8]

+   Tests vorbereiten und durchführen
    Car-Configurator [4.10]
    Testdurchführung: Testabläufe, TestProtokoll, Abweichungen,
        Fehlernachtests & Regressionstests [4.11]
    Vorbereitungen : Testdaten aufbauen/einspielen [4.12]
    Anmerkungen: Testsuite, Testabläufe, Protokollierung [4.13]
    Ergebnisse : Teststatus, Testergebnis, Folge [4.14]
    Fehler & Abweichungsbericht "F&AB" Programm: WinRunner [4.15]
    Beispiel für F&AB [4.16-4.17]
    Inhalt F&AB : Attribute: Kennung, Status, Info [4.18]
    Merkmale eines guten F&AB (IEEE 829) : Testablauf, Fehler, Testumgebung [4.19]
    Fehleranalyse: Fehlersymptom | Fehler im Testobekt [4.20]

+   Tests bewerten [4.22]
    Bewertung von Endekriterien und Bericht : Endekriterien [4.23-4.24]
    Zusammenfassung : {Testpanung&TestSpec, Testprotokoll,
    Fehler und Abweichungsbericht, Fehlernachtests vs Regressionstest,
    Testabschlussbericht [4.26]

=== 5   Testen im SWE-Zyklus

+   SWE-Modelle [5.2]
    Wasserfallmodell : Testen ist eine "einmale" Aktion [5.2]
    moderne Sicht: iterativ-inkrementelle SWE:
    Beispiele: Prototyping, RAD(Rapid Application Developement),
        Rational Unified Process (RUP) und agile Modelle [5.3]
    Verifizierung & Validierung nach : ISO-9000 [5.5]
        a) Verifizierung: "Wurde das Produkt richtig realisiert?" : "3-Rad Auto"
        b) Validierung: "Wurde das richtige Produkt realisiert?" : "Auto statt Bike"
    V-Modell [5.6-7]: Entwicklungsstufe ~ Teststufe ISO 12207

+   Reviewtechnik [5.8]
    Reviews sollten "frühzeitig" durchgeführt werden [5.9]
    Review => Review-Prozess, Reviewsitzung
    Dynamisches Testen findet Fehlerwirkungen, Reviews finden Fehlerzustände [5.10]
    Review-Rollen : Manager,Moderator,Autor,Gutachter,Protokollant [5.11]
    Organisation von Reviews: Inhalt,Team,Ziel [5.12]
    1)Formales Review :
        1 Planung[5.13]
        2 Vorbesprechnung/Kick-Off, 3 Individuelle Vorbereitung [5.14]
        4 Durchführung/Reviewsitzung [5.15]
        5 Überarbeitung 6 Nachbereitung("follow-up") [5.16]
        Review-Varianten/~arten : informelle vs systematische [5.17]
    2)  Informelles Review : kein formales Review  [5.19]
    1.a Walkthrough [5.20-21]
    1.b Technisches Review (Autor nicht zwingend) [5.22]
    1.c Inspektion (Moderator<=>Autor!) [5.23]
    Revietechniken - Nutzen [5.25]
    Revietechniken - Erfolgsfaktoren [5.27]
    Typische Probleme [5.29]

+   Statische Codeanalyse [5.30]
    Bereiche: Kontrollfluss, Datenfluss, Komplexität [5.31]
    Kontrollflussanalyse (Menge mögl. Ablaufpfade) [5.32]
    Datenflussanalyse (Variablen?, Anomaliene?) [5.33]
    Komplexitätsanalyse:  Halstead, Zyklomatische Komplexität [5.34]
    Zyklomatische Komplexität  Bsp: von MvCabe V(G)= L - N + 2P [5.35]
    Nutzen [5.36]
    Tools: Compiler, Webcrawler [5.37]

+   Teststufen und Testarten
    V-Modell=>4 Teststufen [5.39]
    Idealbild : Abnahmetest, Systemtest, IntegTest, Komponententest [5.40]
    Realität : Implementierung [5.41]
    Komponententest:(=Modultest,Unittest) - Komponente IEEE-610 [5.42]
        =>  Testziel, Testbasis, Testobjekte [5.43]
        =>  KnowHow(Platzhalter,Treiber), Vorbedingungen [5.44]
        =>  Typische Techniken, Fehler die (nicht) gefunden werden [5.45]
        a) Testgetriebene Entwicklung [5.46]
        b) Integrationstest : Komponenten~ && System~:COTS, beim Kunden [5.47]
    Integrationstest [5.48-5.51]
    Systemtest  [5.52-5.56]
        => Anforderungsbasierter-, Geschäftsbasierter-, Anwendungsfallbasierter Test [5.52]
        => Funktionaler & Nicht-Funktionaler Test [5.55]
    Abnahmetest [5.57-5.62]
        => Beteiligung der Stakeholder(Interessengruppe)
        => Test explizite Anforderungen und implizite Erwartungen
        => nicht notwendigerweise letzte Teststufe-> Systemintegrationstest [5.57]
        => Aspekte von Abnahmetest's
            a) Benutzer- und b) Betrieblicher/operationaler Abnahmetest [5.60]
            c) Vertraglicher ~ d) Regulatorischer ~ [5.61]
        => Alpha-Test(Kunden testen im Herstellort) und Beta-Test(Feld-Test) beim Kunden [5.62]
    Fehlernachtest & Regressionstest [5.63]
    Wartungstest (~Regressionstest, aber für im Betrieb befindl. Systeme) [5.64-5.67]
        Auswirkungsanalyse von Modifikationen
        Migration und Migrationstest
    Weitere Testarten:
        Nicht-Funktionale Tests:
            Interoperabilität, Sicherheit, Portabilität, Last, Performance,.. [5.68]
    Definition Last- Performanze-(Anwortzeit?) Stresstest(wie lange stabil?) [5.69]
    Zusammenspiel Test&Entwicklung [5.70]
    Zusammenfassung [5.72-5.73]
    Testart(=Testtyp) gemäß ISO9126 [5.74]
    Testarten: [5.75]
        Funktionaler<->Nicht-funktionaler<->Struktureller<->Änderungsbezogener SwTest
    Grundsätze des Sw-Testens [5.76-5.77]
        7) so früh wie möglich testen
        + Trugschluss "keine Fehler bedeuten ein brauchbares System" [5.77]
        8) frühe Einbeziehung der späteren Nutzer

=== 6   Tests planen

+   Testplanung
    Wer?, Wann?, Wie lange?, Wozu?, Was?, Womit? [6.2]
    Planung: Testziele, Risiken, Mastertestkonzept, Testausführungsplan [6.3]

+   Risiko und Testen
    Risiko : Schaden mit gewisser Wahrscheinlichkeit [6.5]
    Produktrisiko : Risiko auf das Testobjekt bezogen [6.6]
    Projektrisiko : Risiko bezogen auf das Projekt : Mitarbeiter... [6.7]
    Projektrisiko Aspekte : Technische~ , Lieferanten~ :IEE829 [6.8]
    Riskikomanagement: Risiko-Priorität, ~-Identifikation, ~-Überwindung [6.9]
    Zusammenhänge [6.10]
    Risiko-basiertes/-orientiertes Testen (ISTQB-Empfehlung) [6.11]
    Kriterien zur Priorisierung von Tests [6.12]

+   Das Testkonzept
    Metriken? Endekriterien? Ressourcen? Testaufwand? [6.14]
    Testplanungsaktivitäten : Rollen, Metriken [6.15-6.16]
    Eingangskriterien [6.17]
    Endekriterien [6.18]
    Testaufwandabschätzung
        :   Metrikbasierte-~ Expertenbasierte-~ [6.19]
        :   Faktoren [6.20]
    Test-Vorgehensweise(typische) [6.21]
        :   Analytische-~(Risiko),Modellbasierte-~(stochastische..),
        :   Methodische-~(error guessing),
        :   Prozess-/Standardkonforme-~, Dynamische u. heuristische -~
        :   Beratende-~,Wiederverwdungsorientierte-~ [6.23]
    Vorgabe & Standards für den Test berücksichtigen [6.24]
    Virtual Showroom Sytemtestumgebung [6.25]
    Testkonzept Virtual Showroom [6.26-6.31]
        :   Riskikobetrachtung und Priorisierung [6.30-6.31]
    Inhalt eines Testkonzepts nach IEEE-829 [6.34-6.35]    
        :   TestkonzeptNr, Features die NICHT getestet wurden,...

+   Der Testausführungsplan    
    Pläne zur Umsetzung des Testkonzepts [6.37]
    Testausführungsplan erstellen 
        Anm: AgileSwE: Sprint=1Zyklus, UserStory=1Requirement
        :   Coding, Test [6.38]
    Feinplanung der Testzyklen...[6.39]
    Zeitrahmen, Themat.+Zeitl. Ressourcenzuordnung [6.40]

+   Zusammenfassung[6.44-6.51]
    Hinweis: wirksame Tests müssen destruktiv+systematisch sein [6.44]
    Teststrategie => Produktorientiert, Prozessorientiert [6.45]
    Welcher Mix ist für mein Projekt optimal ? [6.46]
    Grundsätze des Sw-Testens [6.49]
        x)  "Testen ist abhängig vom Umfeld"
            je nach Einsatzgebiet ist das Testen anzupassen
            Sicherheitskritische Systeme vs E-Commerce Systeme
        y)  "Häufung von Fehlern"                    
            Der Testaufwand sollte proortional zur erwarteten Fehlerdichte verhalten
        z)  "Wiederholungen haben keine Wirksamkeit"
        

=== 7   Testmanagement

+   Aufgaben des Testmanagements
    Tesplanung, Kommunikation & Koordination [7.2]
    Testüberwachung, Teststeuerung und Testberichterstattung [7.3]
    
+   Testüberwachung     
    Ziele des Metrik-Einsatz [7.5]
    Beispiel : Fehleranzahl, Standortbestimmung, Trend... [7.6]
    Bezugsgrößen: Fehler pro Status|Fehlerklasse [7.7]
    Metriken.Fehlerdichte, ~.Ausfallrate(Zeitintervall, Transaktion,..) [7.8]
    Beispiel Korrekturaufwand [7.9]
    Testfortschritt : Metriken: {geplante-,gelaufene-,blockierte} Tests [7.10]
    Metrik.Testüberdeckung [7.11]
    Endekriterien variieren je Teststufe/Testziel [7.12]
    Metrik-Beispiele("101" Coverage Concepts) [7.13]
    =>  Zusammenfassung 
        Metriken [7.15]
        Testberichterstattung [7.16]
        Inhalte eines Testabschlussberichtes nach ISO829 [7.17-7.18]
            Kontext, Testfortschritt, Budget, Risiken, Planung    

+   Fehlermanagement (CRQ Dbase) 
    Motivation [7.20]
    Fehler- und Abweichungsmanagementprozeß [7.22-7.23]
        Change Control Boards(CCB)
        Rollen : Entwickler, Tester, Testmanager, CCB [7.23]
        Fehlerstatusverfolgung(CCB) [7.24]
    => Zusammenfassung [7.26]
    
+   Konfigurationsmanagement (SVN)
    Scenario vs Problem [7.28]                
    Typische Probleme [7.39]
    Versionen verwalten(CMS,SVN,grit) [7.30]
    Zugriffskontrolle [7.32]
    KM-Begriffe: Atom, Konfiguration, Baseline/Releasline [7.34]
    KM-Plan: IEE829 
    Zusammenfassung [7.36]    
       
=== 8   Testteam
    
+   Organisation von Testteams
    Testgruppe=>Fachtester,technischer Tester [8.2]
    Verantwortlichkeit vs Bedeutung [8.3]
    Stufen der Unabhängigkeit [8.4]
    Gegenüberstellungen : Einzeltester-Testgruppe-Testlabor intern/extern [8.5]
    Mitarbeiterprofile
        Sw-Tester [8.7]
        Testdesigner [8.8]
        Testautomatisierer/Testimplementierer [8.9]
        Testmanager(Testleiter) [8.10-8.12]
        Testsystemadministrator [8.13]
        Technischer Experte [8.14]
    Soft Skills von Testern [8.15]
    
+   Psychologie des Testteams
    Natur des Testens (Tester und Entwickler unabhängig) [8.17]
    Verhältnis Entwickler <=> Tester [8.18]
    Kommunikation zwischen Testteam und Management [8.19]
    Zusammenfassung [8.21]             
            
=== 9   Testwerkzeuge

    Lebenszykluse eines Tests [9.2]

+   Zweck der Werkzeugunterstützung für das Testen
    ~ direkt beim Test, bei der Testverwaltung [9.3]
    Warum? [9.4]
    
+   Klassifizierung von Testwerkzeugen
    Übersicht [9.6]
    1.  Management des Testens [9.7]
        Testmanagementwerkzeuge "Excel" [9.8]
        Fehler & Abweichungsmanagementwerkzeuge "CRQ" [9.9]
        Anforderungsmanagementwerkzeuge "Doors" [9.10]
        Konfigurationsmanagementwerkzeuge "CMS" [9.11]
    2.  Statischer Test 
        Reviewwerkzeuge : verwalten von Revie-Anmwerkungen "Word" [9.13]
        Statische Code-Analyse "Compiler" "Notepad++" [9.14]        
        Modellierungswerkzeuge "UML=>Visio" [ImbusAg Programm:TestBench] [9.15]
    3.  Testspezifikation
        Testentwurfswerkzeuge [9.17]
        Testdatengeneratoren [9.18]
    4.  Testdurchführung
        Testausführungswerkzeuge "journal" "Cam" "logging" [9.19-9.25]
        +   Datengetriebener Test-Ansatz "data-driven approach" (TestDaten-DB) [9.22]                
        +   Schlüsselwortgetriebener Ansatz "keyword-driven testing approach"            
        +   Testrahmen/UnitTest-Framework => nutzen Treiber und Stubs [9.23]
        +   Komparatoren [9.24]
        +   Überdeckungsanalysatoren [9.25]
        +   Instrusive Werkzeuge [9.26]
        +   Sicherheitsprüfungswerkzeuge [9.27]
    5.  Performanzmenssungen & Monitore 
        Übersicht [9.28]
        Dynamische Analysewerkzeuge [9.29]
        Werkzeuge für Last-,Performanz- und Stresstest [9.30]
        Testmonitore "Windows Systemmonitor" [9.31]
    6.  Spezifische Anwendungsbereiche 
        Bewertung der Datenqualität [9.32]
        Tools für Sw-Entwickler [9.33]

+   Nutzen und Risiken
    =>  Nutzen [9.35]
    =>  Risiken [9.37]                

+   Einführung von Testwerkzeugen 
    => Reifegrad der Organisation bewerten [9.40]
    => Ziele der Vorstudie [9.41]
    => Ziele des Pilotprojektes [9.42]
    => Erfolgsfaktoren [9.43]

+   Zusammenfassung
    Testmangementwerkzeuge,... [9.46]
    Nutzen & Riskien [9.47]
    Einführung von Werkzeugen [9.48]
    
    


                