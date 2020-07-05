// main.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//


#include "Tree.h"
#include "IntNode.h"

using namespace std;

int main()
{
	Tree firstTree;
	Tree secondTree;

	IntNode* firstTreeNodes[10];
	IntNode* secondTreeNodes[4];

	cout << "construct nodes of first tree..." << endl;
	for (int i = 0; i < 10; i++)
	{
		firstTreeNodes[i] = create_newIntNode(i + 1);
	}

	firstTree.insertChild(nullptr, firstTreeNodes[0]);
	firstTree.insertChild(firstTreeNodes[0], firstTreeNodes[1]);
	firstTree.insertChild(firstTreeNodes[0], firstTreeNodes[2]);
	firstTree.insertChild(firstTreeNodes[0], firstTreeNodes[3]);
	firstTree.insertChild(firstTreeNodes[1], firstTreeNodes[4]);
	firstTree.insertChild(firstTreeNodes[1], firstTreeNodes[5]);
	firstTree.insertChild(firstTreeNodes[2], firstTreeNodes[6]);
	firstTree.insertChild(firstTreeNodes[2], firstTreeNodes[7]);
	firstTree.insertChild(firstTreeNodes[2], firstTreeNodes[8]);
	firstTree.insertChild(firstTreeNodes[2], firstTreeNodes[9]);

	cout << "construct nodes of second tree..." << endl;

	secondTree.insertChild(nullptr, create_newIntNode(15));

	for (int i = 16; i < 20; i++)
	{
		secondTree.insertChild(secondTree.getRoot(), create_newIntNode(i));	
	}
	
	cout << endl << "now print first tree:" << endl;
	cout << firstTree << endl << endl;
	cout << "now print second tree:" << endl;
	cout << secondTree << endl << endl;

	cout << "now copy first tree in a third tree with copy constructor..." << endl;
	Tree thirdTree = firstTree;

	cout << "new third tree:" << endl;
	cout << thirdTree << endl << endl;

	cout << "now assign first to second tree..." << endl;
	secondTree = firstTree;

	cout << "new second tree:" << endl;
	cout << secondTree << endl << endl;

}

// Programm ausführen: STRG+F5 oder "Debuggen" > Menü "Ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
