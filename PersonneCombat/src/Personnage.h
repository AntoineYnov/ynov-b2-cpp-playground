#define DEF_PERSONNAGE

#include <string>

class Personnage
{
    public:

    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();

	int getDegatsArme() const;

	void setDegatsArme(int degatsArme);

	int getMana() const;

	void setMana(int mana);

	const std::string& getNomArme() const;

	void setNomArme(const std::string& nomArme);

	int getVie() const;

	void setVie(int vie);

    private:

    int m_vie;
    int m_mana;
    std::string m_nomArme; //Pas de using namespace std, il faut donc mettrestd:: devant string
    int m_degatsArme;
};
