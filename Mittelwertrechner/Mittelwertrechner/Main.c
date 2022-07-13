//**************************************************************************
//**************************************************************************
//**
//**	Projekt: Mittelwertrechner	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 07.12.2021 20:22:00
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************


int main(void)
{
	//Variables
	int i_Anzahl = 0;
	int i_Schleifenvariable = 0;
	double d_Wert = 0;
	double d_Mittelwert = 0;



	//Code
	printf("Aus wie vielen Werten besteht der Mittelwert\n");
	scanf("%i", &i_Anzahl);

	for (i_Schleifenvariable = 0; i_Schleifenvariable < i_Anzahl; i_Schleifenvariable + 1)
	{
		printf("Bitte %i Wert angeben", i_Schleifenvariable+1);
		scanf("%i", &d_Wert);
		d_Mittelwert += d_Wert;
	}
	
	d_Mittelwert /= i_Anzahl;

	printf("Der Mittelwert ist %d", d_Mittelwert);


	getchar();
	fflush(stdin);
	getchar();
	return 0;
}