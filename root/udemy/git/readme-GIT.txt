=== readme udemy.git.2022.11.03

+   Workflow
    make<User>-commit<User>-push<User>-pullRequest<User>-pull<TeamLeader>

=   Erstellung neuer Dateien
    1.  $>echo "hello" > file1.txt  ==>     ins Arbeitsverzeichnis
    2.  $>git-add file.1.txt        ==>     ins den Staging-Bereich 
    3.  $>git-commit file1.txt      ==>     ins Repository git push 
    4.  $>git-push file1.txt        ==>     zum Remote-Server zB git-HUB     
    
=   Änderungen an bestehenden Dateien
    1.  $>echo "samba" >> file1.txt ==>     nur im Arbeitsverzeichnis
    2.  $>git-commit file1.txt      ==>     Änderungen im Repository
    3.  $>git-push file1.txt        ==>     Änderungen in git-HUB     

&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
=== m:  Glossar
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

+   Blame (hier: Verantwortung)
    Mit dem Befehl Blame wird für jede Zeile einer
    Datei angezeigt, 
    wer wann die letzte Veränderung daran vorgenommen hat.

+   Checkout (etwa: Wechsel)
    Der Befehl zum Wechsel auf einen anderen Branch. 
    HEAD und Index werden dabei auf den gewählten Branch gesetzt.

+   Cherry-pick (etwa: Rosinen rauspicken)
    Mit einem Cherry-pick wird ein spezifischer Commit
    eines Branches auf einen anderen Branch
    angewendet. 
    Dies kann unter anderem zum Einbringen eines Commits 
    in den Ziel-Branch genutzt werden, 
    nachdem der Commit auf einen falschen Branch ausgeführt wurde.

+   Clean (sauber)
    Ein Working Directory ist Clean, 
    wenn keinerlei Abweichungen zum letzten Commit vorliegen,
    das heisst keine Dateien verändert wurden.

+   Collaborator (Mitarbeiter)
    Alle Entwickler eines Repositories, die über Lesund
    Schreibrechte verfügen.

+   Contributor (Beitragender)
    Ein Entwickler, dessen Pull Request in das Repository
    integriert wurde, der aber kein Collaborator ist.

+   Commit (Übergabe)
    Ein Commit speichert den aktuellen Stand des Working Directories, 
    also die jüngst vorgenommenen Modifikationen, 
    zusammen mit einer beschreibenden Nachricht und 
    weiteren Metadaten wie Datum, Uhrzeit und Autor als
    den nächsten Arbeitsschritt in der Historie.

+   CVS Versionskontrollsystem (Concurrent Version System, CVS)
    Versionskontrollsysteme dienen der Verwaltung
    verschiedener Versionen einer Software. 
    Bekannte CVS neben Git sind Subversion und CVS. 
    Ein CVS speichert die gesamte Entwicklungshistorie
    einer Software und ermöglicht
    die Zusammenarbeitet mehrerer Entwickler in
    kollaborativen Projekten.

+   Diff (Differenz)
    Die Anzeige der Unterschiede zwischen zwei Dateien. 
    Wird benutzt, um Bugs zwischen verschiedenen Commits aufzuspüren.

+   Forking (Gabelung) 
    Forking bezeichnet das Klonen eines Online-Repositories 
    (z.B. auf GitHub) für das eigene Benutzerkonto. 
    Damit können Entwickler unabhängig an einem Projekt arbeiten, 
    ohne Teil der ursprünglichen Entwicklergruppe zu sein,
    beispielsweise um die Software für ein anderes
    Betriebssystem zu portieren.

+   HEAD (Kopf)
    Ein Zeiger auf den aktuellen Commit des derzeitigen
    Branches. 
    Üblicherweise der jüngste Commit des Branches, 
    kann aber mit Git-Befehlen versetzt werden, 
        um auf ältere Commits zuzugreifen.

+   Index
    Index bezeichnet die Vorbereitung des Working
    Directory vor einem Commit. 
    Dabei wird ausgewählt, welche geänderten oder neu erstellten
    Dateien dem Commit hinzugefügt werden.

+   Issue (Angelegenheit)
    Finden Nutzer eines Repositories einen Bug oder
    wünschen eine Erweiterung der Software, 
    können sie auf GitHub eine Issue eingeben, 
    die dann von den Entwicklern entweder bearbeitet oder
    zurückgewiesen wird.

+   Log
    Log dient der Darstellung der Commit-Historie
    des aktuellen Branches.

+   Master (hier: Original)
    Master bezeichnet den ursprünglich von Git angelegten,
        ersten Branch eines Repositories. 
    Dieser kann bei Bedarf umbenannt werden und 
        unterscheidet sich nicht von anderen Branches.

+   Markdown
    Markdown ist eine einfache Formatierungssprache
    für Textdateien, 
    mit der häufig README-Dateien
    formatiert werden.

+   Merge (Vereinigung)
    Im üblichen Arbeitszyklus wird zuerst ein Pull ausgeführt,
    damit der lokale Klon des Repositories
    auf dem neusten Stand ist. 
    Anschliessend werden lokale Modifikationen vorgenommen, 
    die dann anschliessend mit einem Commit und Push in
    das Online-Repository integriert werden. 
    Dabei wird ein Merge durchgeführt - 
        die neuen Programmteile werden integriert. 
    Wenn allerdings zwei Entwickler an den gleichen Programmteilen
    gleichzeitig lokal gearbeitet haben, 
    kann dabei ein Merge-Konflikt auftreten, 
    da das Online- Repository nicht weiß, 
    welche Teile übernommen werden sollen. 
    Üblicherweise müssen derartige Merge-Konflikte manuell aufgelöst werden.

+   Pull (Ziehen)
    Durch Pull werden alle Änderungen, 
    die im Master-Repository von anderen Entwicklern vorgenommen
    wurden, 
    aber nicht im lokalen Klon enthalten sind, 
    auf das lokale Repository angewendet.

+   Pull Requests
    Mit einem Pull Request können (auch unabhängige)
    Entwickler die Betreiber eines Projektes
    davon in Kenntnis setzen, 
    dass eine spezifische Änderung implementiert wurde. 
    Diese muss dann zuerst getestet werden und 
    wird dann bei Erfolg in das Projekt integriert.
    Workflow:: commit<User>-push<User>-pullRequest<User>-pull<TeamLeader>

+   Push (Stoßen)
    Mit einem Push werden alle zuletzt vorgenommenen
    Commits dem Repository des Projektes hinzugefügt, 
    entweder auf einem Server wie beispielsweise GitHub 
    oder in einem lokalen Repository auf der Festplatte.

+   Rebase
    Bei einem Rebase werden die Änderungen eines
    Branches auf einen anderen Branch angewendet, 
    beispielsweise von einem experimentiellem
    Branch auf Master. 
    Anschließend kann der experimentielle Branch in Master gemerged werden,
    wodurch im Gegensatz zu einem direkten Merge
    eine lineare Entwicklungshistorie ensteht.

+   Repository (Ablage)
    Ein Repository beinhaltet ein Projekt mitsamt seiner Entwicklungshistorie. 
    Das heisst, alle Zwischenschritte (in Form von Commits) der
    Software können wiederhergestellt oder betrachtet werden. 
    Im Fall von Git wird unterschieden zwischen einem meißt 
        online verfügbaren Master- Repository und 
        lokalen Klonen bei allen beteiligten
    Entwicklern, 
    die so unabhängig voneinander an dem Projekt arbeiten können.

+   Resolve (Auflösen)
    Resolve bezeichnet das manuelle Auflösen von Merge-Konflikten.

+   Rewind (Zurückspulen)
    Mit einem Rewind wird der HEAD auf einen früheren
    Commit zurückgesetzt und die Arbeit bis zu
    diesem Commit verworfen.

+   stage 
    Bühne, Abschnitt, Stufe, Stadium

+   SHA-1
    Mit SHA (Secure Hash Algorithmus) werden Prüfsummen
        für digitale Informationen erstellt. 
    Die Prüfsumme hat immer 40 Hexadezimale Zeichen.
    In Git wird SHA verwendet, 
        um Commits zu benennen.
    Somit kann die Validität eines Commits anhand seines Namens überprüft werden.

+   Tag (Markierung)
    Tags sind vom Entwickler angelegte Markierungen, 
        auf die einfach zugegriffen werden kann.
    Dadurch wird die Verwaltung der komplexen
    Entwicklungshistorie eines Projektes vereinfacht.
    Tags werden dazu mit Bezeichnern versehen, 
    wie beispielsweise v1.01 oder Django statt Flask

+   Upstream (Flussauf)
    Synonym für das Master-Repository (meißt online auf GitHub). 
    Der lokale Klon eines Repositories wird auch Downstream genannt.

+   Workflow
    Um effektiv kollaborativ arbeiten zu können, 
    ist es wichtig, 
    sich mit allen beteiligten Entwicklern auf einen Workflow zu verständigen, 
    beispielsweise welche Branches langfristig unverändert belassen werden.

+   Working Tree (Arbeitsverzeichnis)
    Der Working Tree beinhaltet alle Dateien des Projektes
        im derzeitigen Zustand und 
    kann bei Bedarf vom CVS auf einen früheren Zustand
    zurückgesetzt werden.


&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
=== m:  Aktionen
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

=*= s:  Repositories erzeugen

+   Ein neues lokales Repository erzeugen
    $>  git init

+   Ein existierendes Repository klonen
    $>git clone ssh://nutzer@domain.com/repository.git


=*= s:  Lokale Änderungen

+   Geänderte Dateien anzeigen
    $>  git status

+   Änderungen anzeigen
    $>  git diff

+   Alle Änderungen dem nächsten Commit hinzufügen
    $>  git add .

+   Datei umbenennen
    $>  git mv [-v] [-f] [-n] [-k] <source> <destination>

+   Eine bestimmte Datei dem nächsten Commit hinzufügen
    $>  git add <DATEI>

+   Nur eine bestimmte Datei dem nächsten Commit hinzufügen
    $>  git add . -p <DATEI>

+   Commite alle lokalen Änderungen mit der gegebenen Beschreibung
    $>  git commit -am”Beschreibung”

+   Alle lokalen Änderungen dem letzten Commit hinzufügen
    (Nur für nicht bereits publizierte Commits!)
    $>  git commit –amend

+   Alle lokalen Änderungen dem letzten
        Commit mit gleicher Beschreibung   hinzufügen
    $>  git commit –amend –no-edit

+   Lokale Änderungen verwerfen
    $>  git stash


=*= s:  Commit Verlauf

+   Alle Commits beginnend mit dem ersten anzeigen
    $>  git log

+   Die letzten 5 Commits anzeigen
    $>  git log -n5

+   Alle Änderungen einer bestimmten Datei anzeigen
        $>  git log -p <DATEI>  # mit Comment
    oder :
        $>  git log -- <DATEI>
    
+   Wer hat was und wann an der Datei geändert?
    $>git blame <DATEI>

+   Commit-ID abgekürzt anzeigen lassen anzeigen
    $>  git log --abbrev-commit

+   Commit Differenz mit Commit-ID ansehen
    $>  git show <commitID>


=*= s:  Branches und Tags

+   Alle Branches anzeigen
    $>  git branch -av

+   Branch wechseln
    $>  git checkout <BRANCH>

+   Neuen Branch aus dem aktuellen HEAD erzeugen
    $>  git branch <BRANCH>

+   Lokalen Branch löschen
    $>  git branch -d BRANCH

+   Neuen Tag erzeugen
    $>  git tag TAG

+   Tags anzeigen
    $>  git tag

+   Tag löschen
    $>  git tag -d TAG

+   Zu einem Tag wechseln
    $>  git checkout TAG


=*= s:  Aktualisierung und Publizieren

+   Alle Remotes anzeigen
    $>  git remote -v

+   Informationen zu einer Remote anzeigen
    $>  git remote show REMOTE

+   Ein neues Remote Repository anlegen
    $>  git remote add REMOTE URL

+   Remote Repository herunterladen, ohne es in HEAD zu integrieren
    $>  git fetch REMOTE

+   Remote Repository herunterladen und in HEAD integrieren
    $>  git pull REMOTE BRANCH

+   Lokale Änderungen auf Remote publizieren
    $>  git push REMOTE BRANCH

+   Branch im Remote Repository lö̈schen
    $>  git branch -dr REMOTE/BRANCH

+   Tags publizieren
    $>  git push –tags


=*= s:  Merge und Rebase


+   Branch in den aktuellen HEAD mergen
    $>  git merge BRANCH

+   Commits des aktuellen HEAD auf ein Branch anwenden (Rebase)
    (Nur für nicht publizierte Commits!)
    $>  git rebase BRANCH

+   Rebase abbrechen
    $>  git rebase –abort

+   Rebase nach dem Auflösen von Konflikten fortsetzen
    $>  git rebase –continue

+   Mergetool zum Auflösen von Konflikten starten
    $>  git mergetool

+   Dateien mit Konflikten als gelöst markieren
    $>  git add DATEI

=*= s:  Änderungen rückgängig machen


+   Alle lokalen Änderungen im Arbeitsverzeichnis verwerfen
    (Kann nicht rückgängig gemacht werden)
    $>  git reset –hard HEAD

+   Lokale Änderungen einer spezifischen Datei verwerfen
    $>  git checkout HEAD DATEI

+   Commit rückgängig machen mit einem neuen Commit, 
    der alle Änderungen verwirft
    $>  git revert COMMIT

+   Zurücksetzen auf den Head und alle Änderungen verwerfen
    $>  git reset –hard HEAD

+   Zurücksetzen auf einen Commit und alle Änderungen verwerfen
    $>  git reset –hard COMMIT

+   Zurücksetzen auf ein Commit, ohne die Äenderungen anzuwenden
    $>  git reset COMMIT

+   Zurücksetzen auf ein Commit ohne Löschen lokaler Änderungen
    $>  git reset –keep COMMIT


&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
=== m:  table
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

$>  cat <file>                      *   show file content
$>  clear                           *   clear screen
$>  ls -al                          *   list
$>  rm ls -al                           *   list
$>  rm --force --recursive tutor_git    *   rmDir



=== git <cmd>=:c
    Legende:   ID:=commitID

•   c:  add
    $>  git add <file>                  *   add single file into STASH einchecken
    $>  git add <file1> <file2>...      *   copy local files into STASH
    $>  git add --all                   *   add incl.subDir into STASH
    $>  git add .                       *   sämtliche neue Dateien => stash

•   c:  branch          
    $>  git branch                      *   view active branches and branch "master"
    $>  git branch -a                   *   show branches 
    $>  git branch <newBranch>          *   create new branch, but no switch 
    $>  git branch -d <mergedBranch>    *   remove merged branch
    $>  git branch -D <testedBranch>    *   remove branch without a merge

•   c:  checkout
    $>  git checkout <anyBranch>        *   switch into <anyBranch>
    $>  git checkout HEAD <file>        *   lokales File zurücksetzen - not committed
    $>  git checkout master             *   switch branch to HEAD
    $>  git checkout -b <newBranch>     *   switch+create into <newBranch>

•   c:  commit
    $>  git commit -m "<str>" <file>    *   update modified singleFile in Repository
    $>  git commit -a -m "<Comment>"        *   update multiple files of Repository
    $>  git commit --all -m "<Comment>"     *   dito
    $>  git commit –-amend              * show toBe committed files in vi

•   c:  diff
    $>  git diff master <branch>        *    difference branch to master

•   c:  fetch
    $>  git fetch           * download server changes into memory - don't change local
    
•   c:  log
    $>  git log                         *   alle Commits sehen - ohne Datei-Zuordnung
    $>  git log --abbrev-commit         *   commits mit short-commitID sehen
    $>  git log --raw                   *   alle Commits sehen - MIT Datei-Zuordnung
    $>  git log -n<i>                   *   nur die letzten i Commits
    $>  git log -- <file>               *   log einer bestimmten Datei
    $>  git log -p <file>               *   log einer bestimmten Datei + diff command

•   c:  merge
    $>  git merge <bBranch>             *    HEAD==master imports bBranch
    $>  git merge master                *    HEAD==bTmp; branch bTmp imports master
    
•   c:  mv
    $>  git mv [-v] <source> <destination>  * rename a file

•   c:  pull
    $>  git pull            * download server changes into local => fetch

•   c:  reset       => revert        
    $>  git reset <ID>
    $>  git reset --hard HEAD       *   lokales File zurücksetzen - not committed
    $>  git reset –hard <ID>        *   reset committed File 

•   c:  restore
    $>  git restore <file>          *   restore uncommitted File == history cleared 
                    
•   c:  revert
    $>  git revert <ID>             *   reset committed File - history untouched

•   c:  show  
    $>  git show <ID>               *   ID={commitID|tagID}

•   c:  stash
    $>  git stash                       *   reset modified from STASH to HEAD

•   c:  status 
    $>  git status                      *   wichtigstes Kommando ?uptodate?

•   c:  tag <tagID>
    $>  git tag v1.0-lw                 *   lightweight
    $>  git tag -a v1.0 -m “release version 4.0”    * annotated
