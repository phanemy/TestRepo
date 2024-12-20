// TestRepo.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Engine/Addition.h">
#include "Engine/Multiplication.h">
#include "Engine/Soustraction.h">


int main()
{
	std::cout << "which operation would you like to perform\n";
	std::cout << "\t-Addition (a)\n";
	std::cout << "\t-Substraction (s)\n";

	char c;

	std::cin >> c; // Get user input from the keyboard

	if (c == 'a') {

		AddEngine engine;

		engine.AskNumberA();
		engine.AskNumberB();

		double dAdd = engine.Compute();

		std::cout << engine.NumberA() << " + " << engine.NumberB() << " = " << dAdd << std::endl;
	}
	else if(c == 's') {
		SubEngine engine;

		engine.AskNumberA();
		engine.AskNumberB();

		double dAdd = engine.Compute();

		std::cout << engine.NumberA() << " - " << engine.NumberB() << " = " << dAdd << std::endl;
	}
	else if (c == 'm') {
		MulEngine engine;

		engine.AskNumberA();
		engine.AskNumberB();

		double dAdd = engine.Compute();

		std::cout << engine.NumberA() << " * " << engine.NumberB() << " = " << dAdd << std::endl;
	}
	else {
		std::cout << c << " : is not a valid entry"<< std::endl;
	}

	system("pause");
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
