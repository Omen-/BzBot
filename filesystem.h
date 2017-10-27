#pragma once

namespace FileSystem
{
	/// <summary>Repr�sente un fichier en m�moire (HANDLE, taille et data)</summary>
	typedef struct
	{
		HANDLE file;
		SIZE_T size;
		LPBYTE data;
	}memory_file_t;

	/// <summary>Combine un chemin (r�pertoire) et une fichier en un chemin d'acc�s</summary>
	/// <param name="dest">Buffer de sortie</param>
	/// <param name="dir">Chemin du dossier � combiner</param>
	/// <param name="file">Nom du fichier � combiner</param>
	/// <returns>FALSE en cas d'�chec, TRUE sinon</returns>
	bool combinePath(LPWSTR dest, const LPWSTR dir, const LPWSTR file);

	/// <summary>Cr�er les dossiers non existants dans le chemin fourni</summary>
	/// <param name="path">Chemin � cr�er</param>
	/// <param name="securityAttributes">Atributs de s�curit� avec lesquels cr�er les dossier</param>
	/// <returns>FALSE en cas d'�chec, TRUE sinon</returns>
	bool createDirectoryTree(LPWSTR path, LPSECURITY_ATTRIBUTES securityAttributes);

	/// <summary>Lis le fichier dont le chemin est pass� en param�tre et le place en m�moire</summary>
	/// <param name="fileName">Chemin complet vers le fichier � lire</param>
	/// <param name="memoryFile">Pointeur vers la structure de sortie</param>
	/// <returns>FALSE en cas d'�chec, TRUE sinon</returns>
	bool fileToMemory(LPWSTR filePath, memory_file_t *memoryFile);

	/// <summary>Supprime le fichier dont le chemin est pass� en param�tre</summary>
	/// <param name="filePath">Chemin complet vers le fichier � supprimer</param>
	/// <returns>FALSE en cas d'�chec, TRUE sinon</returns>
	bool deleteFile(LPWSTR filePath);

	/// <summary>Enregistre les donn�es pass�es en param�tre dans le fichier pass� en param�tre</summary>
	/// <param name="filePath">Chemin complet vers le fichier dans lequel enregistrer les donn�es</param>
	/// <param name="data">Pointeur vers les donn�es � enregistrer</param>
	/// <param name="dataSize">Taille des donn�es � �crire</param>
	/// <returns>FALSE en cas d'�chec, TRUE sinon</returns>
	bool saveDataToFile(const LPWSTR filePath, const void * data, DWORD dataSize);

	/// <summary>Ferme le fichier m�moire pass� en param�tre</summary>
	/// <param name="memoryFile">Pointeur vers le fichier m�moire � fermer</param>
	void closeMemoryFile(memory_file_t *memoryFile);
}