#include "Hele.h"

Hele::Hele(int andenVaerdi) { andenVaerdi = this->andenVaerdi; }

std::vector<Del> Hele::hentAlleDele()
{
    return dele;
}

void Hele::tilfoejDel(int veardi)
{
    Del d(veardi);
    dele.push_back(d);
}
