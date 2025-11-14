
#include <string>

class Studieopgave {
private:
    std::string titel; // vi vil have en atitube der hedder titel
    std::string fag; // Vi vil have en artitube der hedder fag
    int estimeretTidsforbrug; // int
    std::string svaerhedsgrad; // int
    struct tal { // meget dumt lavet men vi laver vores egen type det ka fungere med flere tal osv
        int tal;
    };

    tal minetal; // min egen type

public:
    Studieopgave(std::string t, std::string f, int tid, std::string s); // dette er konstruktør

    std::string getTitel();
    void setTitel(std::string t);

    std::string getFag();
    void setFag(std::string f);

    void setMinetal();

    int getEstimeretTidsforbrug();
    void setEstimeretTidsforbrug(int tid);

    std::string getSvaerhedsgrad();
    void setSvaerhedsgrad(std::string s);

    std::string beskriv();
};



Studieopgave::Studieopgave(std::string t, std::string f, int tid, std::string s)
{
}

std::string Studieopgave::getTitel()
{
	return std::string();
}

void Studieopgave::setTitel(std::string t)
{
}

std::string Studieopgave::getFag()
{
	return std::string();
}

void Studieopgave::setFag(std::string f)
{
}

void Studieopgave::setMinetal()
{
	minetal.tal = 42;
}



