#ifndef DELEGATION_H
#define DELEGATION_H
#include <vector>
#include <iostream>
#include "Staff.h"
#include "Joueur.h"

using namespace std;

class Staff;

class Delegation
{
    friend class Match;
    friend class Groupe;
    friend class Competition;
    private:
        string nom;
        vector<Staff> stafflist;
        vector<Joueur> joueurlist;
        int points,niveau,nb_de_but,nb_de_carton_rouge,nb_de_carton_jaune;
        int grp;
    public:
        Delegation();
        Delegation(int*,int);
        void ajouter_joueur();
        void ajouter_staff();
        void ajouter_points(int i)
        {
            points=points+i;


        }
        void modifier_joueur();
        void modifier_staff();
        void supprimer_joueur();
        void supprimer_staff();
        void afficher_noms_des_joueurs();
        void afficher_noms_des_staff();
        string getnom();
        int getniveau();
        int get_groupe();
        void setgrp(int i) {grp = i;}
        void enregistrer_delegation();
        void download_delegation(string);
        void download_delegation_par_defaut(string);
        void afficher_info();
        Joueur meilleur_joueur();
};

#endif // DELEGATION_H
